//Programming Exercises on page 63 of C++ prime (vol.1)
#include <iostream>
using namespace std;
double CtoF(double);
int main()
{
	double n; 
	cout << "Please enter a Celsius value: " << endl;
	cin >> n;
	cout << n << " degrees Celsius is " << CtoF(n) << " degrees";
	cout << " in Fahrenheit." <<endl;
	return 0;
}
double CtoF(double a)
{
	return a*1.8+32;
}
	