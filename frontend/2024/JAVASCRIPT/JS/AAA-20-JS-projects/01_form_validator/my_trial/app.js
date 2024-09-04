// selectors
const username = document.querySelector("#username");
const email = document.querySelector("#email");
const password = document.querySelector("#password");
const confirm = document.querySelector("#confirm");
const submitButton = document.querySelector(".submit-btn");

// Event Listeners
submitButton.addEventListener("click", validateAndSubmit);


// functions
function validateAndSubmit(event) {
  // prevent form from submitting for now, 
  event.preventDefault();
  let test = username.value;
  console.log(test);
  console.log("test");
}