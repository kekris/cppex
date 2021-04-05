//Programming Exercises on page 112 of C++ prime (vol.1) chap3
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int foottoinch = 12;
	double height_feet, height_inch, weight, BMI;
	double inchtometer = 0.0254, poundtokg = 1/2.2;
	cout << "Enter your height in feet and inches." << endl;
	cout << "First, enter feet:" << endl;
	cin >> height_feet;
	cout << "Then, enter inches:" << endl;
	cin >> height_inch;
	cout << "Enter your weight in pounds:" << endl;
	cin >> weight;
	height_inch = height_inch + height_feet*foottoinch;
	height_inch = height_inch * inchtometer;
	weight = weight * poundtokg;
	BMI = weight/pow(height_inch,2);
	cout << "Your BMI is " << BMI << "." << endl;	
	return 0;
}
