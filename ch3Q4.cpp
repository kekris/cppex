//Programming Exercises on page 112 of C++ prime (vol.1) chap3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const int conv = 60, hr2day = 24;
	long int input, totalsec;
	cout << "Enter the number of seconds: " << endl;
	cin >> input;
	totalsec = input;
	int d, h, m, s;
	d = input/(hr2day*pow(conv,2));
	input = input - d*hr2day*pow(conv,2);
	h = input/pow(conv,2);
	input = input - h*pow(conv,2);
	m = input/conv;
	s = input%conv;
	cout << totalsec << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds." << endl;	
	return 0;
}
