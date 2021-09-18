#include<iostream> // find the prime number based on the input N
using namespace std;
int main(){
	int N, j = 2, k = 0, mod = 1;
	cout << "Find the first N primes (N>1): "; cin >> N; 
	do {
	for (int i=2; i<j; i++){
	mod *= j%i;
	if (mod > 1000) mod = 1; // prevents integer overflow
	}
	if (mod != 0) {
		cout << j << " is a prime number. \t#" << ++k << endl;
	}
	mod = 1;
	j++;
	} while(k < N);
	return 0;
}
