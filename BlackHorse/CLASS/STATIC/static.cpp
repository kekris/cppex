#include<iostream>
using namespace std;

class person{
	public: 
		static int m_A;
		static void func(){// static methods can only access static members
			cout << "static void func" << endl;		
		};
	private:
		static int m_B;
};
int person::m_A = 100; // initialise static int m_A outside class
int person::m_B = 200; // use getters to access
void test01(){
	person p; 
	cout << p.m_A << endl; // outputs 100
	person p2;
	p2.m_A = 200;
	cout << p.m_A << endl; // outpus 200
};
// static member doesn't belong specifically to a given object since all objects share the same member
// we can access static member via
void test02(){
// 1. object
	person p; cout << p.m_A << endl; 
	p.func();
// 2. class name 
	cout << person::m_A << endl;
	person::func();
};
int main(){
	test01();
	test02();
	return 0;
}
