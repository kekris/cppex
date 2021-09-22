#include<iostream>
using namespace std;
const int LENGTH =3, WIDTH =4;
void printArray(int a[],int len){
	for (int i=0;i<len-1;i++){
		cout << a[i] << ", ";
	}
	cout << a[len-1] << endl;
};
void reverse(int a[],int len){
	int temp = *(a+len-1);
	*(a+len-1) = *(a);
	*(a) = temp;
	if (len > 1) reverse(a+1,len-2);
};
void transpose(const int input[][LENGTH], int output[][WIDTH]){
	for (int i = 0; i < LENGTH; i++ ) {
		for (int j = 0; j < WIDTH; j++){
			output[i][j] = input[j][i];
		}
	}
};
int main(){
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	int array2[WIDTH][LENGTH]={
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9},
	{10, 11, 12}
	};
	int transposed[LENGTH][WIDTH];
	printArray(array,10);
	reverse(array,10);
	cout << "Reversed array is: " << endl;
	printArray(array,10);
	cout << "Matrix to be transposed is: " << endl;
	for (int i = 0; i<WIDTH;i++){
	printArray(array2[i],LENGTH);
	}
	transpose(array2,transposed);
	
	cout << "Transposed array is: " << endl;
	for (int i = 0; i<LENGTH;i++){
	printArray(transposed[i],WIDTH);
	}
	return 0;
}
