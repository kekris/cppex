#include<iostream>
printNum(int number); //fix2
void printNum(int number){std::cout<<number;} //fix1
int main(){
	printNum(35);
	return 0; 
}
//void printNum(int number){std::cout<<number;} // original code
