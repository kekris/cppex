#include<iostream>
using namespace std;
#define StrA "Hello, World!"
int main()
{
	cout << "Please input a nonnegative integer:" << endl;
	int n;
	cin >> n;
	for (int i = 1; i <=n; i++ ){	
	cout << StrA << endl; cout << "# Counter = " << i << endl;
	}
	return 0;
}
