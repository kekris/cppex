#include<iostream>
using namespace std;
int main(){
	int arr[9] = {4,2,8,0,5,7,1,3,9};
	// re-order the numbers
	for ( int j = 0; j < (sizeof(arr)/sizeof(arr[0]) -1); j++){
	for (int i = 0; i<=(sizeof(arr)/sizeof(arr[0])-j-1);i++){
		if (arr[i]> arr[i+1]){ 
		int temp = arr[i+1];
		arr[i+1] = arr[i];
		arr[i] = temp;
		}
	}
	}
	// output the results: 
	for (int i=0;i<=(sizeof(arr)/sizeof(arr[0])-1);i++){
		cout << i <<','<< arr[i] << endl;	
	}
	
	
	return 0;
}
