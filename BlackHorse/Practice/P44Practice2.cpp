#include<iostream>
using namespace std;
int main(){
	int arr[5];
	for (int i = 0; i<5;i++) {
	cout << "Please indicate a number: "; cin >> arr[i]; 	
	}
	cout << "The transposed array is: " << endl;
	for (int i = 4; i>=0;i--) {
	cout << arr[i] << endl; 	
	}	
	return 0;
}
