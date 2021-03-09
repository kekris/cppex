//Programming Exercises on page 63 of C++ prime (vol.1)
#include <iostream>
using namespace std;
int yeartomonth(int);
int main()
{
	int n; 
	cout << "Please enter your age as an integer:" << endl;
	cin >> n;
	cout << "Your age in months is " << yeartomonth(n) << "." <<endl;
	return 0;
}
int yeartomonth(int a)
{
	return a*12;
}
	