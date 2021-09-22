#include<iostream>
#include"funclib.h"
using namespace std;
int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	cout << &a[0] << ' ' << &a[10] << endl; // compares address
//	cout <<&a[0]+10 << endl; // compares address	
	cout << sum_45(a,sizeof(a)/sizeof(a[0])) << endl;
	cout << sum_46(a,sizeof(a)/sizeof(a[0])) << endl;
	return 0;
}
