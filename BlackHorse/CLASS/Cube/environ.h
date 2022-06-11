#include<iostream>
#include<string>
using namespace std;
/*--------------------------------Class Declaration---------------------------------------*/
class Cube{
	private:
		double m_H, m_L, m_W;
	public:
		double getVolume(){
			return m_H*m_L*m_W;
		};
		double getArea(){
			return 2*(m_H*m_L+m_H*m_W+m_L*m_W);
		};
		void setDimension(double F, char A){
			switch (A){
				case 'W':
					m_W = F; 
					break;
				case 'H':
					m_H = F; 
					break;
				case 'L':
					m_L = F; 
					break;
				default:
					cout << "Wrong Dimension" << endl;
				return;
			};
		};
		bool isSameByClass(Cube & c){
			if (getVolume() == c.getVolume() && getArea() == c.getArea()){
				return true;
			}
			return false;
		}
};
/*--------------------------------Function Declaration---------------------------------------*/
void getusrinput(Cube & c1);
bool isSame(Cube & c1, Cube & c2);
