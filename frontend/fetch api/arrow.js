// const sayHelloConst = function () {
//     console.log("helloo const")
// }
// function sayHello(){
//     console.log("hello")
// }

// const sayHelloConst = () => {
//     console.log("helloo const")
// }

// function sayHello(){
//     console.log("hello")
// }

// const sayHello = () =>  console.log("helloo const")

// const sayHello = () =>  "helloo "

// const sayHello = function(){
//   return "helloo "
// }

// const sayHello = () =>( { msg : "helloo " })

// const sayHello = name => console.log(`helloo  ${name}`)

const sayHello = (firstName,lastName) =>  console.log(`helloo  ${firstName} ${lastName}`)

const names = ["debora", "zainab", "shamsudeen"]

const nameLength = names.map((name) => {
    return name.length
})

const numbers = [3, 4, 5, 3, 2, 4, 10]
const doubleNumber = numbers.map((number) => {
    return number * 2
})

console.log(doubleNumber)

console.log(nameLength)
    
sayHello("kemi")
sayHello("ali","faheed")