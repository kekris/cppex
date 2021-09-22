#include<iostream>
#include<cmath>
using namespace std;
int main(){
	srand(time(NULL));
	double pi;
	int n, in = 0;
	cout << "Total number of random throws: " ;
	cin >> n;
	for (int i = 0; i<n; i++){
	double x = rand()/ (double) RAND_MAX, y = rand()/ (double) RAND_MAX;
	double d = sqrt(x*x+y*y);
	if (d<1) in++;
	}
	pi = (double)in/static_cast<double>(n)*4; // static_cast<a>(b) forces b to be converted into type a.
	cout << pi;
	
	return 0;
}
