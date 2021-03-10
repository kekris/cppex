//Programming Exercises on page 112 of C++ prime (vol.1) chap3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double conv = 60;
	int degree, min, sec;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees:" << endl;
	cin >> degree;
	cout << "Next, enter the minutes of arc:" << endl;
	cin >> min;
	cout << "Finally, enter the seconds of arc:" << endl;
	cin >> sec;	
	cout << degree << " degrees, " << min << " minutes, " << sec << " seconds = " << degree+(min+sec/conv)/conv << " degrees." << endl;
	return 0;
}
