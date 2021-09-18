#include<iostream>
using namespace std;
#define str "Goodbye!"
int main() {
	int N, mod, out;
	do{
	cout << "Please input an Integer: "; cin >> N;
	/* This is for 3.4.1 */
//	out = (N%5==0 && N>=0)?N/5:N/-1; 
//	cout << out <<endl;
	/* This is for 3.4.2 */
	if (N%5!=0 || N < 0) {
		continue;
	}
	cout << N/5 <<endl;	
	}while(N>=0);
	cout << str << endl;
}
