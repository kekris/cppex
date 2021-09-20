#include<iostream>
using namespace std;
// asks the usr to input a INT number, and print stuff accordingly 
int main()
{
	int score; cout << "Please input your score: " << endl; 
	cin >> score;
	if (score > 600)
	{
		cout << "Grats!" << endl;
	}
	else if (score == 600)
	{
		cout << "Oho!" << endl;
	}
	else 
	{
		cout << "Pity!" << endl;
	}
	return 0;
	
}



