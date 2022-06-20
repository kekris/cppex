#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
int size = 5 ;
//cin >> size ;
int * nums = new int [ size ];
for ( int i = 0; i < size ; ++ i )
{
nums [ i ] = i; 
}
//... // Calculations with nums omitted
//delete nums ;//
delete[] nums; // deallocate an array requires delete[]
}

