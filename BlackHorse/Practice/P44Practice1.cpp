#include<iostream>
using namespace std;
int main(){
int arr[5] = {300,350,200,400,250};
int maxval = arr[1];
for (int i = 2; i<=(sizeof(arr)/sizeof(arr[1])); i++){
	if (arr[i-1]>= maxval) {maxval = arr[i-1];}
}
cout << "The largest number is " << maxval << endl;
return 0;
}
