//Programming Exercises on page 111 of C++ prime (vol.1) chap3
#include <iostream>
using namespace std;
int main()
{
	const int conv = 12;
	cout << "Enter your height in inches:_____\b\b\b\b\b" << endl;
	int height;
	cin >> height;
	cout << "Your height is " << height/conv << " feet and " << height%conv << " inches." << endl;
	return 0;
}

