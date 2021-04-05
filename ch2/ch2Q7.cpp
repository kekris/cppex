//Programming Exercises on page 63 of C++ prime (vol.1)
#include <iostream>
using namespace std;
void timedisplay(int,int);
int main()
{
	int h, m;
	cout << "Enter the number of hours: " << endl;
	cin >> h;
	cout << "Enter the number of minutes: " << endl;
	cin >> m;
	timedisplay(h,m);
	return 0;
}
void timedisplay(int h, int m)
{
	cout << "Time: " << h << ":" << m << endl;
}