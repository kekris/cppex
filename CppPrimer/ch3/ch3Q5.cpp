//Programming Exercises on page 112 of C++ prime (vol.1) chap3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int worldpop, uspop;
	cout << "Enter the world's population: " << endl;
	cin >> worldpop;
	cout << "Enter the population of the US: " << endl;
	cin >> uspop;
	double percentage = double(uspop)/double(worldpop)*100;
	cout << "The population of the US is " << percentage << "% of the world population. " << endl;
	return 0;
}
