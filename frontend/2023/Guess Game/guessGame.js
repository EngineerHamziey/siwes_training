let range = 11,
    min = Math.floor(Math.random()*range),
    max = min + range,
    guessLeft = 3,
    winningNumber = getRandomNumber(min,max);

    console.log(min)
const maxNum = document.querySelector(".maxNum"),
    minNum = document.querySelector(".minNum"),
    submitBtn = document.querySelector("#submitBtn"),
    guess = document.querySelector("#guessInput"),
    message = document.querySelector(".message"),
    gameContainer = document.querySelector(".game");

maxNum.textContent = max;
minNum.textContent = min;

gameContainer.addEventListener("mousedown", function (e) {
    if (e.target.className === 'play-again') {
        window.location.reload()
    }
})
submitBtn.addEventListener("click", function (e) {

    let guessNum = parseInt(guess.value)

    if (isNaN(guessNum) || guessNum > max || guessNum < min) {
        setMessage(`Please enter a number between ${min} and ${max}`, "red")
    } else {
        if (guessNum === winningNumber) {
            
            guess.disabled = true;

            guess.style.borderColor = "green"

            setMessage(`${winningNumber} is right, You won! `, "green")

            submitBtn.value = "Play Again";
            submitBtn.className += "play-again"
        } else {
            guessLeft -= 1;

            if (guessLeft === 0) {
                guess.disabled = true;

                guess.style.borderColor = "red"

                setMessage(`Hey you loose, the correct number is ${winningNumber}`, "red") 

                
            submitBtn.value = "Play Again";
                submitBtn.className += "play-again"
                
            } else {

                guess.style.borderColor = "red";

                setMessage(`You have ${guessLeft} guess left`, "red")
            }
        }
        }
    
        e.preventDefault()
    });

function gameOver(won, msg) {
    let color;

    won  === true ? color = "red":color = "green"

    guess.disabled = true;

    guess.style.borderColor = color;
    message.style.color = color;

    setMessage(msg)
}

function setMessage(msg, color) {
    message.style.color = color;
    message.textContent = msg;
}

function  getRandomNumber(min, max){
    return Math.floor (Math.random()*(max - min + 1) + min);
   }

