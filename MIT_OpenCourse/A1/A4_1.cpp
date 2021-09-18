#include <iostream>
using namespace std;
int main ()
{
	long number;	long long accumulator = 1;
	cout << "Enter a number : " ;
	cin >> number ;
	if (number < 0 || number > 30){
		do{
		if (number < 0) {
		cout << "Please input a nonnegative integer: "; }
		else{
		cout << "Exceeds program's capability!";
		}
		cin >> number;
		} while(number < 0);
	}
	cout << "The factorial of " << number << " is " ;
	if (number <= 10) {// hard coding switch for factorials below 10 
	switch (number){ //switch block
	case 1: 
		accumulator = 1; break;
	case 2: 
		accumulator = 2; break;
	case 3: 
		accumulator = 6; break;
	case 4: 
		accumulator = 24; break;
	case 5: 
		accumulator = 120; break;
	case 6: 
		accumulator = 720; break;
	case 7: 
		accumulator = 5040; break;
	case 8: 
		accumulator = 40320; break;
	case 9: 
		accumulator = 362880; break;
	case 10: 
		accumulator = 362880; break;
	default: 
		accumulator = 1; break;	
		} // switch block	
	} // hard coding switch for factorials below 10 
	else{
	for (; number > 0; accumulator *= number--) ;
	}
	cout << accumulator << ".\n " ;

	return 0;
}
