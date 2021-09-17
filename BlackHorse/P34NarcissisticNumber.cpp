#include<iostream>
#include<cmath> // this
using namespace std;
//Use the [do...while] loop to find out all Narcissistic Number that is larger than 100 and less than 1000
// Narcissistic numbers are integers which satisfies: 100*a+10*b+c = a^3+b^3+c^3
int main(){
	int a = 1, b = 0, c = 0, d; 
	
	do{
	b = 0;
		do{
		c = 0;
			do{	
				if ( (pow(a,3)+pow(b,3)+pow(c,3) ) == (100*a+10*b+c) ){
				d = 100*a+10*b+c;
				cout << "Find Narcissistic number: " << d << "." << endl;}
			c++;
			} while ( c < 10);
		b++;
		} while ( b < 10);
	a++;
	}while( a < 10 );
	
	return 0;
}
