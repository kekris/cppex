#include<iostream>
void doublenumber(int *num) {*num = *num*2;}
int main(){
	int num=35;
	doublenumber(&num);
	std::cout << num; 
	return 0;
}
