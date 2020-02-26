function selectionSort(let A, let n){
	for(let i=0; i< n-1; i++){
		let iMin = i;
		for(let j=i+1; j<n; j++){
			if(A[j] < A[iMin])
			{
				iMin = j;
			}
		let temp = A[i];
		A[i] = A[iMin];
		A[iMin] = temp;
		}
	}
}


let x = [2,7,4,1,10,5,8,6,3,9];

console.log(selectionSort(x, 10));
