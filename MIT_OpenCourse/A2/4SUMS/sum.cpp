#include"funclib.h"
int sum_45(const int a[], const int len){
	int sumval = 0;
	for(int i = 0; i<len; i++){
		sumval += a[i];
	}
	return sumval;
};
int sum_46(const int a[], const int len){
//	cout << a << endl; // prints address of current a
	return len==0?0:a[0]+sum_46(a+1,len-1);
};


