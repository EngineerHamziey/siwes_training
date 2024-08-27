// pull in all the DOM element needed
/***************************************************
 *****************DOM Elements**********************
 ***************************************************/
const form = document.getElementById("form")
const username = document.getElementById("username")
const email = document.getElementById("email")
const password = document.getElementById("password")
const password2 = document.getElementById("password2")


/***************************************************
 *****************Functions************************
 ***************************************************/
// show input error message
function showError(input, message) {
  //remember, the .frm-control is the parent of the input
  const formControl = input.parentElement;
  formControl.className = "form-control error";
  /* parentNode.querySelector >>> Returns the first
   element that is a descendant of node that matches
   selectors.
   document.querySelector >>> retuns the first 
   decendant of the document...*/
  const small = formControl.querySelector("small");
  small.innerText = message;//message passed in to the function
}

// Show success outline
function showSuccess(input) {
  const formControl = input.parentElement;
  formControl.className = "form-control success";
}

//Check if Email is valid
function isValidEmail(email) {
  // this returns true of false, depending on whe-
  // ther the email is valid or not
  /* this is called javascript Email Regular
  Expression, go to google and type 
  "javascript email regex" and go to the stack overflow
  link then chose your choice, there are many javascript
  regex*/
  const re = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
  return re.test(String(email).toLowerCase());/*i.e turn 
  it to lowercase STRING before testing*/
  // console.log(re.test(String(email).toLowerCase));
}


/***************************************************
 *****************Event Listeners*******************
 ***************************************************/
// We need to an add Event Listeners on this form for when we submit it
form.addEventListener("submit", function (e) {
  /* the event parameter (e, that we added in the
  function) has a method called preventDefault()
  that prevent the form from submitting*/
  e.preventDefault();
  // console.log(username.value)
  if (username.value === "") {
    // if nothing is filled in
    showError(username, "Username is required");
  } else {
    showSuccess(username);
  }

  if (email.value === "") {
    // if nothing is filled in
    showError(email, "Email is required");
  } else if (!isValidEmail(email.value)) {
    showError(email, "Email is not valid");
  } else {
    showSuccess(email);
  }

  if (password.value === "") {
    // if nothing is filled in
    showError(password, "Password is required");
  } else {
    showSuccess(password);
  }

  if (password2.value === "") {
    // if nothing is filled in
    showError(password2, "Password is required");
  } else {
    showSuccess(password2);
  }
});