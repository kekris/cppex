//Programming Exercises on page 192 of C++ prime (vol.1) chap4
#include <iostream>
#include <string>
using namespace std;
int main()
{
	struct inputs
	{
		string name;
		string dessert;
		string output;
	};
	inputs usr_input = 
	{
	"","",""
	};
	cout << "Enter your name: " << endl;
	getline(cin,usr_input.name);
	cout << "Enter your favorite dessert: " << endl;
	getline(cin,usr_input.dessert);
	usr_input.output = "I have some delicious "+ usr_input.dessert+" for you, "+usr_input.name+".";
	cout << usr_input.output << endl;
	return 0;
}
