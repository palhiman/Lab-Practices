const myHeading = document.querySelector('h1');
myHeading.textContent = 'HIMANSHU SHEKHAR PAL';


document.querySelector('html').onclick = function() {
	alert('Do not poke me. Otherwise i explode');
}

let myImage = document.querySelector('img');

myImage.onclick = function() {
	let mySrc = myImage.getAttribute('src');
	if (mySrc === 'images/firefox-icon.png') {
		myImage.setAttribute('src', 'images/ubuntu-logo.jpg');
	} else {
		myImage.setAttribute('src', 'images/firefox-icon.png');
	}
}

let myButton = document.querySelector('button');
//let myHeading = document.querySelector('h1');

function setUserName() {
	let myName = prompt('Please enter your name:');
	if(!myName || myName === null){
		setUserName();
	} else {
		localStorage.setItem('name', myName);
		myHeading.textContent = " This is cool, " +  myName;
	}
}

if(!localStorage.getItem('name')) {
	setUserName();
} else {
	let storedName = localStorage.getItem('name');
	myHeading.textContent = 'Mozilla is cool, ' + storedName;
}

myButton.onclick = function() {
	setUserName();
}
