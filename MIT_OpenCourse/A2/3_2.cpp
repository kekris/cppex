#include<iostream>
//void printnum(){std::cout << number;}; //original code
int number = 35; // fix2, make number a global variable
void printnum(int number=5){std::cout << number;}; // fix1
int main(){
	//int number = 35;//fix2
	int number = 35;
	printnum(number);
	return 0;
}
