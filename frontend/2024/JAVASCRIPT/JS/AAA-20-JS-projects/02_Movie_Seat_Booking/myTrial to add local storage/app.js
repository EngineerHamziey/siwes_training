const container = document.querySelector(".container");
// querySelectorAll >> to select all and it returns a node list
const seat = document.querySelectorAll(".row.seat:not(.occupied)");
const count = document.getElementById("count");
const total = document.getElementById("total");
const movieSelect = document.getElementById("movie");

let ticketPrice = movieSelect.value;

//functions
function updateSelectedCount() {
  const selectedSeat = document.querySelectorAll(".row .seat.selected");
  const selectedSeatCount = selectedSeat.length;

  count.innerText = selectedSeatCount;
  total.innerText = selectedSeatCount * ticketPrice;
  saveDataToLocalStorage();
}

// movie select event
movieSelect.addEventListener("change", e => {
  ticketPrice = +e.target.value;//the + is to ensure that it's a number
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


// my local storage trial

function saveDataToLocalStorage(selectedCount, ticketPrice,selectedItems) {
  const selectedSeat = document.querySelectorAll(".row .seat.selected");
  const selectedSeatCount = selectedSeat.length;
  const data = [selectedSeatCount, movieSelect.value];
  // if (localStorage.getItems("dataInJSON") === null) {
  //   data = [];
  // } else {
    
  // }
  // data = [selectedSeatCount, movieSelect.value];
  localStorage.setItem("dataInJSON", JSON.stringify(data));
}

document.addEventListener("documentContentLoaded", getFromLocalStorage());
// localStorage.clear();
function getFromLocalStorage() {
  console.log("jfjsl");
  let data;
  if (localStorage.getItem("dataInJSON") === null) {
    return;
  }
  data = JSON.parse(localStorage.getItem("dataInJSON"));
  console.log(data);
}