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
function checkEmail(input) {
  // this returns true of false, depending on whe-
  // ther the email is valid or not
  /* this is called javascript Email Regular
  Expression, go to google and type 
  "javascript email regex" and go to the stack overflow
  link then chose your choice, there are many javascript
  regex*/
  console.log("success in");
  const re = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
  if (re.test(input.value.trim())) {
    showSuccess(input);
  } else {
    showError(input, "Email is not Valid");
  }
}

function checkRequired(inputArr) {
  /* now we have to loop through the input array
  here the inputArr is the array of the input tag,
  and input in function (input) below is the value
  of each at a time during the forEach loop*/
  inputArr.forEach(function (input) {
    /* the input itself here is each input tag
    remember username, password are the exact taags*/
    if (input.value.trim() === "") {
      /*trim here trims the white space off */
      showError(input, `${getFieldName(input)} is required`);
    } else {
      showSuccess(input);
    }
  });
}

// check input length
function checkLength(input, min, max) {
  if (input.value.length < min) {
    showError(
      input,
      `${getFieldName(input)} must be at least ${min} characters long`);
  } else if (input.value.length > max) {
    showError(
      input,
      `${getFieldName(input)} must be more than ${min} characters long`);
  } else {
    showSuccess(input);
  }
}

// Get field name
function getFieldName(input) {
  // capitalizing the first letter before submitting
  return input.id.charAt(0).toUpperCase() + input.id.slice(1);
}

// Check passwords match
function checkPasswordMatch(input1, input2) {
  if (input1.value !== input2.value) {
    showError(input2, "Passwords do not match");
  }
}

/***************************************************
 *****************Event Listeners*******************
 ***************************************************/
// We need to an add Event Listeners on this form for when we submit it
form.addEventListener("submit", function (e) {
  e.preventDefault();

  /* we're passing in the values as an array to avoid
  calling the function for all each*/
  checkRequired([username, email, password, password2]);
  checkLength(username, 3, 15);
  checkLength(password, 6, 20);
  checkEmail(email);
  checkPasswordMatch(password, password2);
});