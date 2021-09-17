//Programming Exercises on page 112 of C++ prime (vol.1) chap3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "Enter how many kilometers you have driven: " << endl;
	double distance; cin >> distance;
	cout << "Enter how many liters you have used: " << endl;
	double gas; cin >> gas;
	cout << "Your car uses " << gas/distance*100 << " liters per 100 km." << endl;
	return 0;
}
