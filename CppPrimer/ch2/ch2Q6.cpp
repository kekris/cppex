//Programming Exercises on page 63 of C++ prime (vol.1)
#include <iostream>
using namespace std;
double lyeartoastron(double);
int main()
{
	double n; 
	cout << "Enter the number of light years: " << endl;
	cin >> n;
	cout << n << " light years = " << lyeartoastron(n) << " astronomical units." << endl;
	return 0;
}
double lyeartoastron(double a)
{
	return a*63240;
}
	