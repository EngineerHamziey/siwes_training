document.querySelector(".button1").addEventListener("click", getTextData)
document.querySelector(".button2").addEventListener("click", getJsonData)
document.querySelector(".button3").addEventListener("click", getExternalData)

function getTextData() {
    fetch("test.txt")
        .then((res) => res.text())
        .then((data) => {
            console.log(data)
            document.querySelector("#output").innerHTML = data
        }).catch((error) =>console.log(error))
}
    
function getJsonData() {
    fetch("data.json")
        .then(function (res) {
             return res.json()
        }).then(function (data) {
            console.log(data)
            let output = ""
            data.forEach(function (item) {
                output += `<li>${item.name}</li>
                <li>${item.email}</li>`
            })
            document.querySelector("#output").innerHTML = output
        }).catch(function (error) {
            console.log(error)
        })
}

function getExternalData() {
    fetch("https://api.github.com/users")
        .then(function (res) {
             return res.json()
        }).then(function (data) {
            console.log(data)
            let output = ""
            data.forEach(function (item) {
                output += `<li>${item.login}</li>`
            })
            document.querySelector("#output").innerHTML = output
        }).catch(function (error) {
            console.log(error)
        })
}  
