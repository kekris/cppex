#include<iostream>
using namespace std;
int lengthofchar(char * a){
	int length = 0;
	while(a[length] != '\0') length++;		
	return length;
};
void swap_ref(int &a, int &b){
	int temp = a; 
	a = b; 
	b = temp; 
};
void swap_pointer(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
};
void swap_pp(int **p1,int **p2){ // p1 = &ptr1, *p1 = ptr1, **p1 = *ptr1 = x
// here swap_pp swaps the VALUE of ptr1 and ptr2, which are addresses of x and y
	cout << p1 << ' ' << p2 << endl;
	cout << *p1 << ' ' << *p2 << endl;
	cout << **p1 << ' ' << **p2 << endl;
	int *temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << p1 << ' ' << p2 << endl;
	cout << *p1 << ' ' << *p2 << endl;
	cout << **p1 << ' ' << **p2 << endl;
};
int main(){
	char *aa = const_cast<char*>("Hello World!");
	cout << lengthofchar(aa) <<endl;
	int a = 10, b = 20;
	cout << "a="<<a<<", " << "b="<<b<<endl;
	swap_ref(a,b);
	cout << "a="<<a<<", " << "b="<<b<<endl;
	swap_pointer(&a,&b);
	cout << "a="<<a<<", " << "b="<<b<<endl;
//----------------------------------------------------	
	int x=5, y=6;
	int *ptr1 = &x, *ptr2 = &y;
	cout << "-----------------------" << endl;
	cout << &ptr1 << ' ' << &ptr2 << endl;	
	cout << ptr1 << ' ' << ptr2 << endl;		
	cout << *ptr1 << ' ' << *ptr2 << endl;
	cout << "-----------------------" << endl;
	swap_pp(&ptr1, &ptr2);
	cout << "-----------------------" << endl;
	cout << &ptr1 << ' ' << &ptr2 << endl;
	cout << ptr1 << ' ' << ptr2 << endl;		
	cout << *ptr1 << ' ' << *ptr2 << endl;
//----------------------------------------------------
	cout << "7.5---------------------------" << endl;
	char * oddOrEven = (char*)"Never odd or even";
	//1
	char * nthCharPtr = &oddOrEven[5];
	//2
	nthCharPtr -= 2;
	//3
	cout << *nthCharPtr << endl;
	//4
	char ** pointerPtr = &nthCharPtr;
	//5 
	cout << &nthCharPtr << endl;
	cout << pointerPtr << endl;
	//6
	cout << **pointerPtr << endl;
	//7
	nthCharPtr ++;
	//8 
	cout << nthCharPtr - oddOrEven << endl;
	
	
	
	
	return 0;
}
