#include<iostream>
using namespace std;
// Knock knock: count number from 1 to 100. For those numbers containing 7, or being a multiple of 7, print knock knock; for the rest, print the number.
// Use for loop
int main(){
	for ( int i=1; i<=100; i++) {
		if ( (i%10==7) || (i%7==0) || ( i/10==7 ) ){
		cout << "Knock Knock" << endl;
		}
		else{
		cout << i << endl;
		}
	}
	return 0;
}
