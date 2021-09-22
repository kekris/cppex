#include<iostream>
#include"func.h"
using namespace std;


int main(){	
	int arr[10] = {4,3,6,9,1,2,10,8,7,5};
	cout << "The original array is: " << endl;
	for (int i = 0; i < 10; i++) { 
	cout << arr[i] << "\t" ;
	}
	cout << endl;
	
	bubblesort(arr,sizeof(arr)/sizeof(arr[0]));
	
	cout << "The sorted array is: " << endl;
	for (int i = 0; i < 10; i++) { 
	cout << arr[i] << "\t" ;
	}
	cout << endl;
	
	return 0;
}
