const displayInput = document.querySelector('#display-input'),
      resultOuput = document.querySelector('#output-result'),
      numbers = document.querySelectorAll('.button');
     


numbers.forEach((numbers) => {
  numbers.addEventListener('click', (e) => {

    try{
      if( e.target.innerText === 'AC'
      ){
        displayInput.innerHTML = ''; 
        resultOuput.innerHTML = '';
    } else if ( e.target.id === '/' || e.target.id === '*' || e.target.id === '-'){
      displayInput.innerHTML += e.target.id    
    } else if (e.target.innerText === '+/-' ){
      displayInput.innerHTML = displayInput.innerText.slice(0, -1); 
      resultOuput.innerHTML = '';
    } else if ( e.target.innerText === '='){
      resultOuput.innerHTML = eval(displayInput.innerText);   
    }  else{
      displayInput.innerHTML += e.target.innerText;
    }
    }catch(e){
      resultOuput.innerHTML ='ERROR';
    }
   
  })
})