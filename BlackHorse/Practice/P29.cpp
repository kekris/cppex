#include<iostream>
using namespace std;
int main(){
	double a,b,c,d;
	for (int i = 0; i<3; i++)
	{
	cout << "Input the first number: " << endl;
	switch (i){
	case 0:
		cin >> a; break;
	case 1: 
		cin >> b; break;
	case 2: 
		cin >> c; break;
		}
	}
	d = ((a>=b)?((a>=c)?a:c):((b>=c)?b:c));
	//concatenate nested loop structures into nested [exp1?exp2:exp3]
	cout << "The largest number is "<< d << endl;
	return 0;
}
