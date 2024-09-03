// this is a single line comment
/* this is a
  multiline comment*/

// traditional way of sending alert to the user screen
// alert("your account has been credited oh yeah! :)");
// alert(2 + 2);

// printing to the console:
console.log("Coding isn't codeine");
console.log("but you can code like you're on codeine");

// variables and data types:
console.log("Mrs Joe is a girl, Mrs Joe likes yoghurt, Mrs Joe is married, Mrs Joe is happy :)");
// you can replace the name with a variable since it has multiple occurrences.



let womanName = "Kim Kadashian";//this string contains 13 characters
// simple concatenation sample:
console.log("My name is " + womanName + "-Rogan");
// using concatenation (which is the combination of strings)
console.log("Mrs " + womanName + " is a girl, Mrs " + womanName + " likes yoghurt, Mrs " + womanName + " is married, Mrs " + womanName + " is happy :)");

// proving javascript dynamic type
let pi = 3.142; // this is number type
console.log("the numeric value of pi = " + pi);
// we can later change the type of value held by the variable pi
pi = "Meat Pi"; // now converter to string type
console.log("the eatable value of pi is = " + pi);

// we have characters in programming eg: A - Z, a - z, and punctuations including white space `   AND     combinations of 2 or more characters makes a string

// boolean data type
const areYouABoy = true;
const areYouAGirl = false;
let areYouSingle = 0; // 0 here means false

// ARRAYS

//heterogenous items
const items = [1, "Shola", "bola", true, false, 1, 0, 4.4];

//homogenous items
const studentNames = ["David", "AbdulLateef", "Daniel", "Sofeeyah", "John"];
console.log(studentNames);
console.table(studentNames);// for printing arrays

// accessing an element in an array
console.log("First Student name is " + studentNames[0]);

// console.clear();// we can clear the console

console.warn('this is a warning  by me');//this does the same as error except for it makes it yellow.


// // for multiword variable names
var firstName = 'joe'; //camel case
var first_name = 'Sara';// underscore
var FirstName = "Tom"; //Pascal case,


// //const object and arrays
const person = {
  name: "John",
  age: 20,
  Height: 150,
  twinBrother: "David",
  wife: "inconclusive"
};

console.log("name of the person is " + person.name);
console.log(person.age);
console.log(person.Height);
console.log(person.twinBrother);
console.log(person.wife);

let wifi = {
  brand: "Airtel 4G",
  owner: "Abdullateef",
  ownersWife: "private",
  speed: "10G/s"
}

console.log("default brand " + wifi.brand);

wifi.brand = "MTN 5g";
console.log("NEW brand " + wifi.brand);

let x; // variable declaration
x = "5"; // variable assignment/initialization
// or
let yourName = "Sophisticated"; // variable declaration and initialization
console.log(typeof (x * 2)); //typeof is used for finding the type of a variable.

console.log(typeof person);// this tells the data type of person

const today = new Date(); //this prints today's date

console.log(today);


// escape sequences
/*
\n  new line
\t  tab
\"  double quote
\'  single quote
*/

console.log('Shola\'s shoe lace is untied');
console.log("Shola's shoe lace is untied");// no need for back slash, since double quote is used.

console.log("\"Shola\"\t\t\tis the name of the guy");// also note the use of \t for spacing

// showing the use of \n
console.log(
  "Dear Kim,\n\t\t\ttake your life seriously"
);

// LOOP
// 1. FOR LOOP
// for( initialization; condition;  increment/decrement) {
//   // code to run
// }

for(let count = 1; count <= 5; count++) {
  console.log("I love my wife");
}

for(let count = 1; count <= 5; count--) {
  console.log("I love my wife");
}