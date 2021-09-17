#include<iostream>
using namespace std;
// asks the usr to input three numbers and output the largest one
int main()
{
	double a,b,c; 
	for (int i = 0; i<3; i++)
	{
	cout << "Input the first number: " << endl;
	switch (i){
	case 0:
		cin >> a; break;
	case 1: 
		cin >> b; break;
	case 2: 
		cin >> c; break;
		}
	}
	
	if ( a >= b ) {
		if ( a >= c ) {
		cout << "The largest number is "<< a << endl;
		}
		else {
		cout << "The largest number is "<< c << endl;
		}
	}
	else{
		if ( b >= c ) {
		cout << "The largest number is "<< b << endl;
		}
		else{
		cout << "The largest number is "<< c << endl;
		}
	}
	return 0;
}
