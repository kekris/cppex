#include<iostream>
using namespace std;
int sum(int a,int b){
	int sumval = a + b;	
	return sumval;
}
int main(){
	int a = 5, b = 3; 
	cout << sum(a,b) << endl;
	return 0; 
}

