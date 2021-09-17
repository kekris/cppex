//Programming Exercises on page 113 of C++ prime (vol.1) chap3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "Enter an automobile gasoline consumption figure in the European style (liters per 100 km):" << endl;
	double eu_gas, us_gas; cin >> eu_gas; 
	const double kmtomile = 0.6214, gallontoliter = 3.875;
	us_gas = 100*kmtomile/(eu_gas/gallontoliter);
	cout << "This is equivalent to " << us_gas << " miles per gallon." << endl;
	return 0;
}
