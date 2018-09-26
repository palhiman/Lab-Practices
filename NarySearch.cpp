#include<iostream>
#include<stdlib.h>

using namespace std;

void search(int arr[], int low, int high, int key){
	
	if(low==high){
		if(key == arr[low])
			cout<<"Element found at: "<<low;
			
		return;
	}
	
	int mid = (low+high)/2;
	
	search(arr,low,mid,key);
	search(arr,mid+1,high,key);
	
}

int main(){
	
	int a[] = {2,5,7,1,6,8,3,9,4,0};
	
	search(a,0,9,3);
	
	return 0;

}
