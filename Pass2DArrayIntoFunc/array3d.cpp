#include<iostream>
using namespace std;
void func(){
	return;
}
int main(){
	int m,n,l; m=3; n=5; l=8;
	double ***T;
	T = new double ** [m];
	for (int i = 0; i < m; i++){
		T[i] = new double * [n];
		for (int j = 0; j < n; j++){
			T[i][j] = new double [l];
		}
	}
	for (int i = 0; i < m; i++){for (int j = 0; j < n; j++){for (int k = 0; k < l; k++){
		T[i][j][k] = i+j+k; 
	}}}
	return 0;
}
