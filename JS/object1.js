var testObj = {
	12:"Namath",
	16:"Montana",
	19:"Unitas"
};

var playerNumber = 16;
var x = 19;
var player = testObj.playerNumber; // undefined or wrong
var player = testObj[playerNumber];
var p = testObj[x];
console.log(player);
console.log(p);
