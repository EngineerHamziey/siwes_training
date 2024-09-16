/*
  examples of spread operator:
  function sum(x, y, z) {
    return x + y + z; 
  }
  const numbers = [1, 2, 3];

  //passing the array values in using spread operator
  console.log(sum(...numbers));

  console.log(sum.apply(null, numbers));// this also works

  another example:
  const array1 = [1, 2, 3];
  const array2 = [...array1, 4, 5];
  console.log(array2);//logs 1,2,3,4,5

  // Example of forEach:
  const array1 = [1, 2, 3];
  const array2 = [...array1, 4, 5];
  
  array2.forEach(function(items) {
    console.log(items);//logs each items(members of array2) in a line
  });
  
  // example of MAP:
  const array1 = [1, 2, 3];
  const array2 = [...array1, 4, 5];
  
  const array3 = array2.map(function(items) {
    return items * 2;//i.e doubling each item
  });

  console.log(array3);//prints  [2, 4, 6, 8, 10]

  // Example: the "indexOf()" array method:
array = [1, 2, 3, 4, 5];
console.log(array.indexOf(4));//prints 5

Example of local Storage:
localStorage.setItem("name", "Hamziey");
// i.e sets name to brad, we don't need to stringify, since it's a string

// the select tag has this thing in javaScript eg:
movieSelect.addEventListener("change", e => {
  ticketPrice = +e.target.value;//the + is to ensure that it's a number
  console.log(e.target.selectedIndex);// the .selectedIndex return the value index of the selected option
  updateSelectedCount();//i.e re update it
})
*/
  







const container = document.querySelector(".container");
// querySelectorAll >> to select all and it returns a node list
const seats = document.querySelectorAll(".row .seat:not(.occupied)");
const count = document.getElementById("count");
const total = document.getElementById("total");
const movieSelect = document.getElementById("movie");

populateUI();

let ticketPrice = movieSelect.value;

//functions
function setMovieData(movieIndex, moviePrice) {
  localStorage.setItem("selectedMovieIndex", movieIndex);
  localStorage.setItem("selectedMoviePrice", moviePrice);
}

function updateSelectedCount() {
  const selectedSeats = document.querySelectorAll(".row .seat.selected");
  // to save our selected seats to local storage:
      // copy selected seats into an array
      // map through the array
      // return a new array of indexes
  /*
  const seatsIndex = [...selectedSeats].map(function (eachSeat) {
    return [...seats].indexOf(eachSeat);
    //returns index of each seat, then the  whole function returns an array of index of the seats array
  });
  //the shorthand form is the one below
   */
  //we can use the shorthand form of the map function since it's just one esspression(return) here 
  const seatsIndex = [...selectedSeats].map(eachSeat => [...seats].indexOf(eachSeat));
  /*the map function returns index of each seat, then the  
  whole function returns an array of index of the seats array*/
  
  localStorage.setItem("selectedSeats", JSON.stringify(seatsIndex));//since it's an array, we need to stringify it
  console.log(seatsIndex);
  /* the "..." is called the spread , it's used to assign 
  the values of an array to another in this case, the values of 
  selectedseats(a nodelist) to the array seatIndex*/

  const selectedSeatCount = selectedSeats.length;
  count.innerText = selectedSeatCount;
  total.innerText = selectedSeatCount * ticketPrice;
}

function populateUI() {
  //pull out the selected seats from storage
  const selectedSeats = JSON.parse(localStorage.getItem("selectedSeats"));
  // console.log(selectedSeats);
  /* check to see if anything is in the selected seats and
  if the length is > 0 i.e to see if it's not an empty array*/
  if (selectedSeats !== null && selectedSeats.length > 0) {
    /* remember seats = the actual seats class selected 
    with querrySelectorAll*/
    seats.forEach((seat, index) => {
      /*loop through and see element that has same idex as the 
      save(in localStorage) index, give it "selected" class */ 
      if(selectedSeats.indexOf(index) > -1) {
        /*if something is not in there the "indexOf" returns -1,
        hence we use > -1 in our if statement, so if ....> -1 means
        if (it's there)*/
        seat.classList.add("selected");
      }
    });
  } 
// previous selected movie update
  const selectedMovieIndex = localStorage.getItem("selectedMovieIndex");
  if (selectedMovieIndex !== null) {
    // if it exist in localStorage, reset it to the fetch(previous) value
    movieSelect.selectedIndex = selectedMovieIndex;
  }
}

// movie select event
movieSelect.addEventListener("change", e => {
  ticketPrice = +e.target.value;//the + is to ensure that it's a number
  // console.log(e.target.selectedIndex, e.target.value);
  setMovieData(e.target.selectedIndex, e.target.value);
  updateSelectedCount();//i.e re update it
})



/* 
  --we can use forEach loop through and add event listener on each seat.
  --but we are using a more performant way, which is to
    grab its container and add event listner to it to know when
    when something inside it is pressed
*/
container.addEventListener("click",(e) => {
  //if what we clicked on has a class of seat, and not "occupied"
  if(
    e.target.classList.contains("seat")
     &&
    !(e.target.classList.contains("occupied"))
    ) {
      // toggle so that we can add and unadd just like toggle switch
      e.target.classList.toggle("selected");

      updateSelectedCount();
  }
});

//to make it calculate the price after populating the UI
updateSelectedCount();
