#include <iostream>
using namespace std;
int main(){
	int n; double maxval, minval, sum, input;
	cout << "Please indicate N: ";
	cin >> n;
	for (int i = 1; i <= n; i++){
	cout << "Please input: " ;
	cin >> input;
	if (i == 1) {
	maxval = input; minval = input; sum = input;
	}
	else{
	maxval = (input>maxval)?input:maxval;
	minval = (input<minval)?input:minval;	
	sum += input;
	}
	}
	sum = sum/n;
	cout << "Mean: \t" << sum << endl;
	cout << "Max: \t" << maxval << endl;
	cout << "Min: \t" << minval << endl;		
	cout << "Range: \t" << maxval-minval << endl;	
	return 0;
}
