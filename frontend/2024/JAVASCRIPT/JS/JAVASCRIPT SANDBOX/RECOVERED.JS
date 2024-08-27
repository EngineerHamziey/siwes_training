// alert("Ï love my Mum and Dad");//this is not an efficient way to do things
// //log to the consolw
// document.querySelector("h1").style.color = "coral"; //things like ths are used for debugging when written directly in the console from the browser
// console.log("hello");// we can log string
// console.log(true);// we can log boolean
// console.log(123);//you can log numbers
// var greeting = "hello";
// console.log(greeting);//we can log variable
// console.log([1, 2, 3, 4, 5]);//we can log arrays
// console.table([1, 2, 3, 4, 5]);//we can log arrays as a table, this will show its index and value
// console.log({ a: 1, b: 2, c: 3, d: 4 });//we can log objects
// console.table({ a: 1, b: 2, c: 3, d: 4 });//we can log objects as a table
// console.error('this is some error by me');//for debugging, shows the point in our code where this is, fron the browser
// console.clear();// we can clear the console
// console.warn('this is a warning  by me');//this does the same as error except for it makes it yellow.
// console.time('Hello');// this is used to measure time between two points the 'hello; here os the identifer 
// console.log(greeting);
// console.log(greeting);
// console.log(greeting);
// console.log(greeting);
// console.log(greeting);
// console.log(greeting);
// console.log(greeting);
// console.log(greeting);
// console.log(greeting);
// console.log(greeting);
// console.timeEnd('Hello'); //endpoint

// console.clear();


// //variables//variables//variables//variables//variables//variables//variables//variables//variables//variables//variables
// //variables//variables//variables//variables//variables//variables//variables//variables//variables//variables//variables


// var name = "Hamziey";// string can be single/double quotes
// // we can reassign
// name = 'Hamzatronics'
// console.log(name);

// var greeting;//initialization without assignment
// console.log(greeting);
// greeting = "hi";
// console.log(greeting);


// // rules and conventios of variables
// // variables can include the following characteres: letters, numbers, _, $
// //it can't start with a number

// var $name = 'joe';// not recommended, only recommended in JQuerry, when dealling with dom manipulation
// var _name = "folake";// not recommended

// // for multiword variable names
// var firstName = 'joe'; //camel case
// var first_name = 'Sara';// underscore
// var FirstName = "Tom"; //Pascal cade, recommended when we get to object oriented programming...creating objects
// var firstname = "Shaun"; // not really recommended

// // let and var
// let myName = "Hammy";

// const hitup = "cant change";//we have to assign to a value immediately

// //const object and arrays
// const person = {
//   name: "John",
//   age: 30,
//   Height: 10
// }

// person.age = 90;// we can change the content of const
// // object and arrays but we cant reassign the variable "person" in this case
// person.name = 'Cat';

// console.log(person);

// const numbers = [1, 2, 3, 4, 5];
// numbers.push(6);// this is used to add a data to an array
// // we can change the content of const
// // object and arrays but we cant reassign the variable "person" in this case
// console.log(numbers);




// //Data Types //Data Types //Data Types//Data Types//Data Types

// // all variables aare undefined by default

// //6 primitive types  in JavaScript(these are accessed from the memory directly)



/*
// //  string type
const name = 'John';
console.log(typeof name);//the typeof returns the data type

// number  type
const age = 45;
console.log(typeof age);

// boolean type
const hasKids = true;//booleans don't have quotes around them
console.log(typeof hasKids);

// Null type
const car = null;
console.log(typeof car);//the object returned here is a bogus (fron the word bug) its bug

// undefuned type
let test;//this is undefined since it ain't given a value, const must bee given value immediately
console.log(typeof test);

// Symbol
const sym = Symbol();
console.log(typeof sym);


// Reference types - Objects(they are accessed from the memory as a refrence)
// Array
const hobbies = ['killing', 'movies'];
console.log(typeof hobbies);

// Object Literal
const address = {
  city: 'Boston',
  state: 'MA'
}
console.log(typeof address);

const today = new Date(); // we need to use the new, because we are using day constructor
console.log(today);
console.log(typeof today);

*/





///Type Conversion

// input taken from form and stored in a vriable are  string by default 

let val;

//Number to String 
val = String(52);
val = String(5 + 2);//this turns the result(7) to a string
// Bool to string
val = String(true);
//Date to String
val = String(new Date());
// Array to String
val = String([1, 2, 3, 4]);// this give a String with length 7, i.e the ',' is included in the String
// toString Method 
val = (5).toString();
val = (true).toString();


// String to Number 
val = Number('5');
val = Number(true);// this return 1 as a number
val = Number(false);// this return 0 as a number
val = Number(null);// this return 0 as a number
val = Number('hello');// this return NaN(not a number), which is an actual value in JavaScript
val = Number([1, 2, 3, 4, 5, 6]);// this return NaN(not a number), which is an actual value in JavaScript

// Method 2
val = parseInt("100.33");//this returns 100, parseInt
val = parseFloat("100.33");//this returns 100.33, parseFloat


//output
// console.log(typeof val);
// console.log(val);
// // console.log(val.length);//this is a String Method gives undefined when used on number type
// console.log(val.toFixed(10));// this allows us to specifie decimal, if we pass a number n(eg 2) to the method, it will give us two decimal places but does nothing when left empty this is a method that only works on numbers


//Type Coersion: here JavaScript do the type change for us
//when we add string to a number, JavaScript automatically conver the number to a string, then concatenates it for us

// Example
// const val1 = '5';
// const val2 = 6;
// const sum = val1 + val2;

// console.log(sum);
// console.log(typeof sum);





//Math Objects   Math Objects Math Objects  Math Objects

const num1 = 100;
const num2 = 50;
// let val;  this has already been declared up tipetipe

// Simple math with numbers
val = num1 + num2;
val = num1 * num2;
val = num1 / num2;
val = num1 - num2;
val = num2 - num1;// returns negative value lol 'hahaha'
val = num1 % num2;


/* Math Object: 
    Math is an Object meaning that it has properties and methods
    A property is basically like an attribute,
    and a method is a function inside of an object / of object or belonging to an object 
*/
val = Math.PI;
val = Math.E;
val = Math.round(2.4);// 2.4 rounds to 2, while 2.8 rounds to 3
val = Math.ceil(2.4);// gives 3 because Math.ceil rounds up
val = Math.floor(2.4);// gives 2 because Math.floor rounds down
val = Math.sqrt(2.4);// this returns the absquare of the number
val = Math.abs(-4.23);//this retuuuns the absolute value = 4.23
val = Math.pow(89, 2);//this returns the 89 to the power of 2
val = Math.min(89, 2, 5, 7, 8, -20, -1);//this returns the minimum value here -20 and it takes in a comma seperated list of numbers
val = Math.max(89, 2, 5, 7, 8, -20, -1);//this returns the maximum value here -20 and it takes in a comma seperated list of numbers
val = Math.random();// this renturn random decimal from 0-1

val = Math.random() * 20; // Math.random()*n = random number from 0 to (n-1) 
val = Math.random() * 20 + 1; // Math.random()*n + 1 = random number (0-n) 
val = Math.floor(Math.random() * 20 + 1); // this random whole number (0-n) 

// console.log(val);



//string Methods   //string Methods//string Methods//string Methods

const firstName = "Williams";
const lastName = "John";

// let val; already declared

val = firstName + " " + lastName;//concatenation

//Append this means to add on to variable(string)
val = "Ham";
val += "ziey";// now val = Hamziey
const age = 9304;

// val = "Hello, my name is " + firstName + "and I am " + age + " ÿears old";

// // Escaping 
// val = 'that\'s awesome';// using backslash

// length
// val = firstName.length;//this is a property, so no braces

//concat() this is a method
// val = firstName.concat(' ', lastName, "dakl;aka"); //this works similar to the "+" and it can take more than one arguement 

// //changing of case

// val = firstName.toUpperCase();
// val = firstName.toLowerCase();

// val = firstName[3];// this returns the char at 3 i.e used to get the character at a certain point

//indexOf
// val = firstName.indexOf('l');//..returns -1 if, the char isn't in the string...returns the index of the first "l" in firstName
// val = firstName.lastIndexOf('l');//returns -1 if.... and returns the index of the last "l" in firstName

//charAt()
// val = firstName.charAt('2');//

// Get last character
// val = firstName.charAt(firstName.length - 1);//-1 here bacause string(arrays) it's zero index

/*Substring(0, n): 0 here implies we're starting from the
index 0(i.e front of the string) and the n = no of characters to pull out*/
// val = firstName.substring(0, 3);// // this bring out a string index 0,1 & 2 i.e the first three letters of the string

/*Slice(0, n): 0 here implies we're starting from the....can be used with arrays and strings
index 0(i.e front of the string) and the n = no of characters(or array members) to pull out*/
// val = firstName.slice(0, 3);// this bring out a string(array members) index 0,1 & 2 i.e the first three letters of the string(members of an array)
// val = firstName.slice(-4);// this bring out the last 4 letters of the string(members of an array)

//Split(): this can split a string into an array based on a seperator
// var tags = 'HTML, CSS, JS, WebDev';
// var str = 'huh yeah no lol wtf yo';

// val = str.split(' ');// this split str into array using the ' ' character
// val = tags.split(',');// this split tags into array using the ',' character

//replace()
// val = str.replace('yeah', 'yey');// then val = the str string but the 'yeah' in it has been replaced by 'yey'

//includes() this returns a true or false
// val = str.includes('yeh');
// val = str.includes('yeah');

// console.log(val);




// Template Litherals // Template Litherals // Template Litherals
// const name = 'John';
// // const age = 45; already declared up
// const job = 'Wevdev';
// const city = 'Ibadan';
// let html;

//without template strings (i.e the es5 way)
// html = '<ul><li>Name: ' + name + '</li><li>Age: ' + age + '</li><li>Job: ' + job + ' </li><li>City: ' + city + '</li></ul>';


// to put them on seperate lines, you have to concatenate(+) at the end of each line
// html = '<ul>' +
//   '<li>Name: ' + name + '</li>' +
//   '<li>Age: ' + age + '</li>' +
//   '<li>Job: ' + job + '</li>' +
//   '<li>City: ' + city + '</li>' +
//   '<ul>';

// function hello() {
//   return 'hello there';
// }

/*with template strings / litherals (ES6 ways)
 NOT compatible with old browser like IE-edge 7
 uses a character ` called back ticks, it's to the left of our no 1 key */

// anything javaScript can be placed inside this ${}
//age > 30 ? 'Over 30' : 'Under 30'
/*ternary operator(i.e shrthand for if ststement) ? = if true, :  = if false or say else */
// html = `
//   <ul>
//     <li>Name: ${name}</li>
//     <li>Age: ${age}</li>
//     <li>Job: ${job}</li>
//     <li>City: ${city}</li>
//     <li>${2 + 2}</li>
//     <li>${hello()}</li>
//     <li>${age > 30 ? 'Over 30' : 'Under 30'}</li
//   </ul >
//   `;

// document.body.innerHTML = html;



//Arrays //Arrays //Arrays//Arrays//Arrays//Arrays//Arrays

// initialization
// const numbers = [32, 3, 45, 92, 12, 4, 5, 6, 5];//method 1   RECOMMENDED
// const number2 = new Array(33, 2, 45, 6, 5);//method 2: using the array constructor or say object
// const fruit = ['apple', 'mange', 'cherry'];//array of strings
// //we can have different types in an Array
// const mixed = [22, 'wahala', true, undefined, null, { a: 1, b: 4, c: 5 }, new Date()];//array of mixed data type

// console.log(mixed);

// let val; already declared

// to check an array's length
// val = numbers.length;//jusr the way we used it with a string

// // to check if something is an array
// val = Array.isArray(numbers);//returns true/false

// //To get a single value from an array
// val = numbers[3];// the element that has an index of 3 will be returned here i.e 4th element
// console.log(numbers);

// to change the value of an element in an array
// numbers[2] = 32;

// //to find the index of a value in an array
// val = numbers.indexOf(32);// you can also add a parameter to tell it where to start
// console.log('ídex = ' + val);

//Changing / Mututatuing an Array
// numbers.push(250); // to add an element to the end of an array

// numbers.unshift(50); // to add an element to the beginning of an array

// numbers.pop(); //To remove the last element of an array

// numbers.shift(); //To remove the first element of an array

//splce values: to delete some values/elements out of an array
// numbers.splice(1, 1);//(m,n) m = start index  n = no of elements to remove / stop point
// numbers.splice(0, 3);//(m,n) m = start index n = no of elements to remove / stop point
// console.log(numbers);
// val = numbers.reverse();//Reversing an array
// console.log(numbers);//numbers was also reversed i.e val and numbers are now the samw

//concatenate
// val = numbers.concat(number2);

// val = fruit.sort();//ths sort in alphabetical order
// val = numbers.sort();//when used on numbers sorts in ascending order using the first digits only
//to make sure it doen't sort using the first digit only, we use the compare function

// val = numbers.sort(function (x, y) {//we use the compare function
//   return x - y;
// });

//for descending order
// val = numbers.sort(function (x, y) {//we use the compare function
//   return y - x;
// });

// // the find method
// function under39(num) {
//   return num < 39;
// }
// val = numbers.find(under39);//this returns the first numbers less than 39 i.e the one with the lowest index

// function under39(num) {
//   return num > 39;
// }
// val = numbers.find(under39);//this returns the first numbers greater than 39 i.e the one with the lowest index



// console.log(numbers);
// console.log(val);



// //Object lithetals//Object lithetals//Object lithetals

// //
// const person = {//this defines an object litheral
//   firstName: 'joe',//this are it's properties
//   lastName: 'smith',
//   email: 'joe@aol.com',//he is an old school, he still uses @aol.com
//   hobbies: ['music', 'sports'],
//   age: '54',
//   address: {// these is called an embedded object i.e object inside object
//     city: 'Ibadan',
//     country: 'Nigeria'
//   },
//   getBirthYear: function () {//we can also do function
//     return 2022 - this.age;// we need to add 'this' to let it know it's the age in this object
//   }
// }

// // let val; already declatred

// val = person;

// //get specific value
// val = person.firstName;//recommeded method: eady pizzy
// val = person['lastName'];//not recommeded method
// val = person.age;
// val = person.hobbies[1];
// val = person.address.city;
// val = person.getBirthYear();

// console.log(val);

// // arrays of objects
// const people = [
//   { name: 'shaol', age: 34 },
//   { name: 'jola', age: 23 },
//   { name: 'Tola', age: 65 },
//   { name: 'Fpla', age: 23 }
// ];

// for (let i = 0; i < people.length; i++) {//i < people.length because it is zero indexed
//   console.log(people[i].name)
// }

// console.clear();



// //Lesson 14  Dates and times//Dates and times//Dates and times

// // the Date Object 

// const today = new Date();//this will be today's date  by default if it has no arguement
// // how to declare a date
// let birthDay = new Date('9-10-1981');//method 1
// birthDay = new Date('9/10/1981');//method 2
// birthDay = new Date('September 10 1981');//method 3

// val = birthDay;
// val = today;
// val = typeof (val);
// val = today.toString();
// val = typeof (val);

// // we can also get the month(one of it's properties)
// val = today.getMonth();//this will give month-1, because it's zero based and January is 0
// val = today.getDate();
// val = today.getDay();
// val = today.getFullYear();//to get the Year, getYear returns some Weird number
// val = today.getMinutes();
// val = today.getHours();
// val = today.getSeconds();
// val = today.getMilliseconds();
// val = today.getTime();//this gives us the current Time stamp,i.e the amont of seconds that has passed since january 1st 1970

// birthDay.setMonth(6);// to change or set the month
// birthDay.setDate(18);// to change or set the day
// birthDay.setFullYear(1994);// to change or set the year


// val = birthDay;


// console.log(val);



// If Statements and comparison Opetator If Statements and comparison Opetator If Statements and comparison OpetatorIf Statements and comparison Opetator
// Syntax
// if(something is true) {
//   do some things
// }else{
//   do some other things
// }


// const id = '100';

//Equal(==) To Value only
// if (id == 100) {
//   console.log('correct');
// } else {
//   console.log('Incorrect');
// }

// //NOT Equal(!=) To Value only
// if (id != 100) {
//   console.log('Incorrect');
// } else {
//   console.log('correct');
// }

// //Equal(===) To TYPE and Value only        THIS IS THE BEST TO USE TO AVOID ERRORS
// if (id === 100) {
//   console.log('correct');
// } else {
//   console.log('Incorrect');
// }
// //NOT  Equal(!==) To TYPE and Value only        THIS IS THE BEST TO USE TO AVOID ERRORS
// if (id !== 100) {
//   console.log('correct');
// } else {
//   console.log('Incorrect');
// }

// console.clear();

// if (id) {
//   console.log(`The id is ${id}`)//this will return error if the id is not defined, then use the typof
// } else {
//   console.log(`No Id`)
// }

// to know if the variable isn't declared atall
// if (typeof id != 'undefined') {
//   console.log(`The id is ${id}`)//
// } else {
//   console.log("No ID")
// }

// // Greater than
// if (id > 200) {
//   console.log('correct');
// } else {
//   console.log('Incorrect');
// }

// //less than
// if (id < 200) {
//   console.log('correct');
// } else {
//   console.log('Incorrect');
// }


// // IF ELSE 
// const color = 'red';

// if (color === 'red') {
//   console.log('Color is Red');
// } else if (color === 'blue') {
//   console.log('Color is blue');
// } else if (color === 'violet') {
//   console.log('Color is violet');
// } else if (color === 'pink') {
//   console.log('Color is pink');
// }
// console.clear();

// // Logical Operators to compair more than one thing
// let testAge = parseInt(Math.random() * 25 + 1);

// console.log(`TestAge = ${testAge}`);


// //AND (&&)
// if (testAge > 0 && testAge < 12) {
//   console.log(`This person with age ${testAge} is a child`);
// } else if (testAge >= 13 && testAge <= 19) {
//   console.log(`This person with age ${testAge} is a teenager`);
// } else {
//   console.log(`This person with age ${testAge} is an adult`);
// }

// //OR (||)
// if (testAge < 16 || testAge > 65) {
//   console.log(`This person with age ${testAge} can't register for the race`);
// } else {
//   console.log(`This person with age ${testAge} can register for the race`);
// }


// //Shorthand ways of doing conditionals   i.e Using TERNARY OPERATOR
// console.log(id === 100 ? 'Correct' : 'Incorrect');// ? = if true and : = else


// // If statements can work withour curly braces ALTHOUGH IT'S NOT RECOMMENDED, AND INDENTATION IS REQUIRED
// if (testAge < 16 || testAge > 65)
//   console.log(`This person with age ${testAge} can't register for the race`);
// else if (testAge >= 13 && testAge <= 19)
//   console.log(`This person with age ${testAge} can register for the race`);





// Switches // Switches // Switches // Switches // Switches // Switches // Switches 
// const color = 'red';

// switch (color) {
//   case 'red':
//     console.log('Color is Red');
//     break;
//   case 'blue':
//     console.log('Color is blue');
//     break;
//   default:
//     console.log('Color is neither Red nor Blue');
//     break;
// }

// let day;

// switch (new Date().getDay()) {// Day is also zero based
//   case 0:
//     day = 'Sunday';
//     break;
//   case 1:
//     day = 'Monday';
//     break;
//   case 2:
//     day = 'Tuesday';
//     break;
//   case 3:
//     day = 'Wednesday';
//     break;
//   case 4:
//     day = 'Thursday';
//     break;
//   case 5:
//     day = 'Friday';
//     break;
//   case 6:
//     day = 'Saturday';
//     break;
//     Default:
//     day = 'ErrorErrorErrorError';
//     break;
// }

// console.log(`Today is ${day}`);


// console.clear();

// Functions: One of the most important CONTROL STRUCTURE// Functions: One of the most important CONTROL STRUCTURE
//They are blocks of codes that maybe defined and called some later time
// or sometimes decared and called at the same time

// function greet() {//function declaration without an arguement
//   return 'Hello'
// }

//function declaration with an arguement
// function greet(hisFirstName = 'Kay', hisLastName = 'Krain') {// the = here is used to define default value in ES6
//   //ES5 ways of declaring Default values incase the parameters are not passed in, to avaid error
//   // if (typeof hisFirstName === 'undefined') { hisFirstName = 'Hamziey' }
//   // if (typeof hisLastName === 'undefined') { hisLastName = 'Zaid' }
//   // return 'Hello' + ' ' + hisFirstName;
//   return `Hello Mr/Mrs ${hisLastName} ${hisFirstName}`;
// }

// console.log(greet());// the parameters here are John and Joe
// console.log(greet("John", "Joe"));// the parameters here are John and Joe

// console.clear();


// Function Expressions: i.e putting as a variable assignment

// const square = function (x = 10) {
//   return x * x;
// };

// console.log(square(34));
// console.log(square());//this runs with the default value

// IMMIDIATELY INVOLABLE FUCNCTION EXPRESSIONS - IIFEs

// (function () {//without arguements
//   console.log('ÍIFE Ran..');
// })();


//These very usefull for/in modules pattern
// (function (name) {//with arguements
//   console.log(`Hello ${name}`);
// })('Brad');//We passed 'Brad' in as Arguements immediately


/*Property method: a function put inside an Object is called a METHOD.
i.e a function that happens to be a property to an object
*/

// const todo = {
//   add: function () {
//     console.log('Add todo..');
//   },
//   edit: function (id) {
//     console.log(`Edit todo ${id}`);
//   }
// }
//you can also define funtion/method for this object from outside of this
// todo.delete = function () {
//   console.log('Delete todo...')
// }



// todo.add();
// todo.edit();
// todo.delete();


//LOOPS AND ITERATIONS  //LOOPS AND ITERATIONS  //LOOPS AND ITERATIONS  //LOOPS AND ITERATIONS  

/*LOOPS are used to run the same block of codes with different values each time
 */

//you can't use const here cause the variable here always change(++ or --)
// for (let i = 0; i < 10; i++) {//var or let is fine
//   console.log(`i = ${i}`);
// }

// to skip an iteration
// for (let i = 0; i < 10; i++) {//var or let is fine
//   if (i == 2) {
//     console.log(`please skip ${2}`);
//     continue;//this stops the loop here and go to the next iteration without continuing to go on
//   }
//   console.log(`i = ${i}`);
// }

//the break and continue applies to all loop type

// to Stop a loop use 'break'
// for (let i = 0; i < 10; i++) {//var or let is fine
//   if (i == 4) {
//     console.log(`please stop the loop before 4`);
//     break;//this stops the loop here and go to the next iteration without continuing to go on
//   }
//   console.log(`i = ${i}`);
// }

//THEY SAY: USE FOR LOOP WHEN YOU KNOW HOW MANY TIMES THIS IS GONNA RUN

//WHILE LOOP

// let i = 100;
// while (i < 10) {
//   console.log(`Number = ${i}`);
//   i++;
// }


//unlike others this will always run atleast once no matter what, even if the condition isnt met
// do {
//   console.log(`Number = ${i}`);
//   i++;
// }
// while (i < 10);

/* looping through an array,
although array has it own specific method for looping through which Brad suggest using over this for loop*/
// const cars = ['Ford', 'Chevy', 'Honda', 'Toyota'];

// for (let i = 0; i < cars.length; i++) {
//   console.log(`I love ${cars[i]}`);
// }

/*forEach array loop: arrayname.forEach,
// then it takes in an anonymous(i.e function with no name) function*/
// cars.forEach(function (car) {//instead of car, we can say current or something else
//   console.log(`I love ${car}`);
// });

//Usingthe the first two arguements atime
/* this can also take in the index and the actual array itself
(eachElecment, index, actualArray)
(car, index, actualArray) they are just arguments*/
// cars.forEach(function (car, idex) {
//   //*instead of car,index we can say current or something else*/
//   console.log(`${idex}: I love ${car}`);
// });

//Usingthe three arguements at atime
// cars.forEach(function (car, idex, theWholearraygangan) {
//   /*instead of car,index we can say current or something else*/
//   console.log(`${idex}: The CEO of ${car} company loves these cars: ${arraygangan.sort()}`);
// });



/*MAP method, it's basically to return something different, eg: A different array */
// const users = [//this is an array of object
//   { id: 1, name: 'John' },
//   { id: 2, name: 'Jeff' },
//   { id: 3, name: 'Jack' },
//   { id: 4, name: 'Jerremy' }
// ];

/*the Map below is used to create an array of users' id stored in const "ids"*/
// const ids = users.map(function (user) {//instead of user here, we can use something else
//   return user.id;
// });

// console.log(ids);


// the For in loop: often used to loop through Objects,

// const user = {
//   firstName: 'Johie',
//   lastName: 'Jack',
//   Age: 40
// }

// for (let x in user) {
//   /*x here is the key and user[x] is the key and value pairs i.e the object itself.
//   x here is an arguement and could be something else*/
//   console.log(`${x} : ${user[x]}`);
// }
// console.clear();


//Windows Object  //Windows Object  //Windows Object//Windows Object  //Windows Object  

//window methods / Objects / properties
// if you type 'window' and press enter in the console(chrome) you will see it all

// window.console.log('yeh!'); //there is no need to add that window because we're at the top if the windows object but it is part of the window 

// window.alert('REal or sUs'); //also alert() will do just fine

//Prompt: for taking input

// const input = prompt();// this is used for taking input
// alert(input);
// console.log(input);


//Confirm: eg: this can be used to confirm if user really wanna delete something or he pressed the button accidentally
// these ain't recommended though,(#alert, #confirm), its better to use the DOM / boostrap fine looking alert
// if (confirm('Are you sure')) {
//   console.log('Yes');
// } else {
//   console.log('no');
// }


//Outer height and width of window
// val = window.outerHeight;
// val = window.outerWidth;

// Inner height and width of window: these excludes the scroll bars and others
// val = window.innerHeight;
// val = window.innerWidth;

//We can also get Scroll point
// val = window.scrollY; // this will return 0 if we dont have scroll bar atall
// val = window.scrollX; // this will return 0 if we dont have scroll bar atall


//Location Object
// val = window.location;//
// val = window.location;// this shows us the host name, if we were on a server with a domain name it will show the domain name too
// val = window.location.port;// this shows the port number
// val = window.location.href;// this shows the host name and the port
// val = window.location.search;// this is used and also to take know the links people click on in your web


// Redirect 
// val = window.location.href = 'http://google.com';//to redirect to another place

//Reload
// val = window.location.reload();// the reload method

//the HISTORY Object
//when we pass in -1 it go the back once, -2 it go the back twice and so on
// window.history.go();//this keep reloading the page when used without arguements

// val = window.history.length;// this shows how many site visited before us

//Navigator Object: it has  to do with the browser itself, not the window
// val = window.navigator;
// val = window.navigator.appName;//the (appName: "Netscape") will always be netscape unless you're using IE browser
// val = window.navigator.appVersion;//this shows the geneetation of the browser i.e 5th or 4th etc
// val = window.navigator.userAgent;//
// val = window.navigator.platform;//this shows our operating system(eg: win32)
// val = window.navigator.vendor;//
// val = window.navigator.language;//eg: en-US

// console.log(val);




// block scope with let and const// block scope with let and const// block scope with let and const

// var a = 1;
// let b = 2;
// const c = 3;

// function test() {
//   var a = 4;
//   let b = 5;
//   const c = 6;
//   console.log('Function Scope: ', a, b, c);
// }

// test();

// block: if statement, loop, or anything that is wrap in curly braces
// if (1) {
//   // block scope
//   var a = 4;//only var can be used to define a global variable in the block scope
//   let b = 5;
//   const c = 6;
//   console.log('Block Scope: ', a, b, c);
// }

// in loop 
// for (let a = 0; a < 10; a++) {//this won't affect the global variable 
//   console.log(`Loop: ${a}`);
// }

// for (var a = 0; a < 10; a++) {//using var will affect global variable with the same name
//   console.log(`Loop: ${a}`);
// }

//in conclusion: let and const has a block level scope and var has a global scope
// console.log('Global Scope: ', a, b, c);

