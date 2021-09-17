//Programming Exercises on page 192 of C++ prime (vol.1) chap4
#include <iostream>
using namespace std;
int main()
{
	const char Q[]="What is your ";
	char firstname[30], lastname[30];
	char mygrade; 
	int age;
	cout << Q << "first name? ";
	cin.getline(firstname,30);
	cout << Q << "last name? ";
	cin.getline(lastname,30);
	cout << "What letter grade do you deserve? ";
	cin >> mygrade;
	mygrade = mygrade + 1;
	cout << Q << " age? " ;
	cin >> age;
	cout << "Name: " << lastname << ", " << firstname << endl;
	cout << "Grade: " << mygrade << endl;
	cout << "Age: " << age << endl;
	return 0;
}
