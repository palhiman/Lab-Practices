// basic calclulator
let x = document.getElementById("x");
let y = document.getElementById("y");

function addition(x, y) {
    let result = x + y;
	return result;
}

function subtract(x, y) {
    return x - y;
}

function multiply(x, y) {
    return x * y; 
}

function division(x, y) {
    if (y != 0){
        return x/y;
    }
    else{
        alert("Cannot divide with zero. Are you Crazy !!!");
    }
}

