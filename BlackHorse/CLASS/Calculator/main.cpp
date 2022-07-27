#include <iostream>
#include <string>
using namespace std;
class calculator{
	public: 
		int m_Num1, m_Num2;
		int getResult(string oper){
			if (oper == "+"){
				return m_Num1+m_Num2;
			} else if (oper == "-"){
				return m_Num1-m_Num2;
			} else if (oper == "*"){
				return m_Num1*m_Num2;
			}
		}
};

void test01(){
	calculator c;
	c.m_Num1 = 10; 
	c.m_Num2 = 10; 
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}
// --------------------------------------------------------------------------------

class AbstractCalculator{
	public:
		int m_Num1, m_Num2;
		virtual int getResult() = 0; // pure virtual function
};

// plus class
class AddCalculator : public AbstractCalculator{
	virtual int getResult(){
		return m_Num1+m_Num2;
	}
};
class SubCalculator : public AbstractCalculator{
	virtual int getResult(){
		return m_Num1-m_Num2;
	}
};
class MultCalculator : public AbstractCalculator{
	virtual int getResult(){
		return m_Num1*m_Num2;
	}
};

void test02(){
	AbstractCalculator *abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 20;
	
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;	
	delete abc; 
	abc = new SubCalculator;	
	abc->m_Num1 = 100;
	abc->m_Num2 = 20;	
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc; 
	abc = new MultCalculator;	
	abc->m_Num1 = 100;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	

};

int main(){
	
//	test01();
	test02();


	return 0;
}
