var names = ["Hole-in-one!", "Eagle", "Birdie", "Par", "Bogey","Double Bogey", "Go Home!"];

function golfScore(par, strokes){
	if (strokes == 1){
		return "Hole-in-one!";
	}
	else if(strokes <= par - 2){
		return "Eagle";
	}
	else if(strokes == par - 1){
		return "Birdie";
	}
	else if(strokes == par){
		return "Par";
	}
	else if(strokes == par+1){
		return "Bogey";
	}
	else if(strokes == par+2){
		return "Double Bogey";
	}
	else if(strokes >= par+3){
		return "Go Home!!";
	}
	else{
		return "Change Me";
	}

}

console.log(golfScore(5,4));
console.log(golfScore(5,2));
console.log(golfScore(5,7));

/* Strokes	Return
 * 1		Hole-in-one!
 * <= par - 2   Eagle
 * par - 1	Birdie
 * par		Par
 * par+1	Bogey
 * par+2	Double Bogey
 * >= par + 3	Go Home!
 */


