function nextInLine(arr, item){
	// code is here
	arr.push(item); // adds item in the end of the queue

	return arr.shift();
}

var testArr = [10,29,38,47, 56,65,74,83,92,100];
console.log("Before: " + JSON.stringify(testArr));
console.log(nextInLine(testArr, 109));
console.log("After: " + JSON.stringify(testArr));


