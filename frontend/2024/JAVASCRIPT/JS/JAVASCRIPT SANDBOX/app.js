// console.log("Hello World");/*you can log string */
// console.log(123);/*you can log numbers*/
// console.log(true);/* you can log boolean */
// var greeting = "hello";
// console.log(greeting);/* we can log variables */
// console.log([1, 2, 3, 4, 5, 6]);/* we can log arrays */
// console.log({ a: 1, b: 2, c: 3 });/* we can log objects */
// console.table({ a: 1, b: 2, c: 3 });/* we can log Objects as table */
// console.error("This is some error by me");/*To output something as an error */
// console.clear();
// console.warn("This is a Warning");
// console.time("Hello"); /*time it tool from here*/
// console.timeEnd("Hello");/*The time it took to
// reach here from the
// start( of the same identifier here we used "Hello") */
// console.clear();

// var let const

// var name = "Engineer Hamziey";
// console.log(name);
// name = "variable value can be changed"
// console.log(name);

// // things that can start a variable name
// // letters, numbers, _ , $ 
// // variable name can't start with a number
// var $name = "lol"; //it can start with $ and _ but not always


// // Multi-world variable
// var firstName = 'Joan';//camel case
// var first_name = 'Joan';// underscore
// var FirstName = 'Joan';
/*Pascal case: this is
recommended eg in oop when creating a
constructive function and an ES6 class(it should start with
  an uppercase)*/


// var and let are similar Except for in global scope except for in block scope


//LET

let name;
name = "bro";

const change = "change";// this can't be changed and we must assign a value

// const in object
const person = {// this is an object
  name: "locely",
  age: 27,
  Fiance: 'kidney'
}
person.name = 'Sara';
/* we can change the data inside the object(also arrays)
but we can't re-assign the object since
its constant to something else*/

console.log(person);
console.table(person);//loging the object as a table

//