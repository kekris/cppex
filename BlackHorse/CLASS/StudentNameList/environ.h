#include<iostream>
#include<string>
using namespace std;
class student {
	private:
		string m_name; // student name
		int m_sid; //student id 
	public:
		void getName(){
			cout << "Student name is: " << m_name << endl;
		};
		void setName(string name){
			m_name = name;
		};
		void setSID(int sid){
			m_sid = sid;
		};
		int getSID(){
			return m_sid;
		};
};
