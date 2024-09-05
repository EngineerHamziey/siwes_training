// variables
let healthForm = document.querySelector("#health-form");

const questions = [
  "Are you unable to sleep?",
  "Are you currently taking any medications prescribed by your doctor?",
  "Are you currently pregnant?", 
  "Do you have difficulty breathing?",
  "Do you have a cough?",
  "Do you have a headache?",
  "Are you experiencing fatigue?",
  "Are you experiencing any pain or discomfort in your abdomen?",
  "Is your energy level low these days?",
  "Have you noticed any changes in your appetite?",
  "Are you experiencing nausea or vomiting?",
  "What is your temperature in Celsius degrees?",
  "What is your heart rate in BPM?"
];


// Functions ======================================================================
function loadQuestions() {
  for(let currentQuestion = 0; currentQuestion < questions.length; currentQuestion++) {
    let newFormField = document.createElement('div');
    newFormField.className = "each-form-field";
    if(currentQuestion >= 11) {
      // display input type number
      newFormField.innerHTML = `
        <p>${questions[currentQuestion]}</p>
        <input type="number" id="q-y-${currentQuestion}" name="q${currentQuestion}" required>
        `;
    }else {
      newFormField.innerHTML = `
        <p>${questions[currentQuestion]}</p>
        <input type="radio" id="q-y-${currentQuestion}" name="q${currentQuestion}" required>
        <label for="q-y-${currentQuestion}">Yes</label>
        <input type="radio" id="q-n-${currentQuestion}" name="q${currentQuestion}" required>
        <label for="q-n-${currentQuestion}">No</label>
        `;
    }
    

    healthForm.appendChild(newFormField);
  }
}


// function calls
loadQuestions();