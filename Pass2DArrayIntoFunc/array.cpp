#include<iostream>
using namespace std;
/*
void func(int m, int n, double a){
	a[m-1][n-1] = 0;
	return;
}
int main(){
	int m = 3, n = 3;
	double **a[m][n]; for (int i = 0; i<m;i++){ for (int j=0;j<n;j++){a[i][j]=1.0*m*n;}}
	func(m,n,a);
	cout << a[m-1][n-1] << endl;
	return 0;
}
*/
void passFunc(int m,int n, int **array){
	array[m-1][n-1]=999;
	return;
}
int main(){
	int **array; // pointer to the 2D array
	int m = 3, n = 3;
	array = new int *[m];   // array is then a 1D array of pointers, type double * [nz]
	for(int i = 0; i < m; i++){
    	array[i] = new int [n]; // Each element of T is then a 1D array of double [nz]
	}	
	cout << array[m-1][n-1] << endl;
	passFunc(m,n,array);
	cout << array[m-1][n-1] << endl;

	return 0;
}
