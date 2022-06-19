#include<iostream>
using namespace std;
class person{
	private:
		int m_A;	//4bytes
		static int m_B; // belongs to global memory
		void func(){};	// does not belong to class memory allocation
	public:
		int age;
		person(){};
		person(int age){this->age = age;}; //Pointer -- 1. this pointer avoids collision of variable names, this->age refers to the p.age in the class
		person & personaddage(person & p){ // return type & function 
			this->age+=p.age;
			return *this; //Pointer -- 2. returns the dereferenced person
		};
};
int person::m_B = 1;
void test01(){
	person p;
	cout << "size of p = " << sizeof(p) << endl; // Size of null object is 1 byte	
};
void test02(){
	person p1(18);
	cout << "the age of p1 is "  << p1.age << endl;
	person p2(18);
	p2.personaddage(p1);
	cout << "the age of p1 is "  << p1.age << endl;
	cout << "the age of p2 is " << p2.age << endl;
	p2.personaddage(p1).personaddage(p1).personaddage(p1).personaddage(p1); //chained
	cout << "the age of p2 is " << p2.age << endl;
};
int main(){
	
	test02();
	
	return 0;
};
