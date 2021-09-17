#include<iostream>
using namespace std;
#define StrA "Hello, World!"
int main()
{
	cout << "Please input a nonnegative integer:" << endl;
	int n, i = 1;
	cin >> n;
	do {	
	cout << StrA << endl; cout << "# Counter = " << i << endl;
	i++;
	} while(i<=n);
	return 0;
}
