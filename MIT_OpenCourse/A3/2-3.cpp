#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class Point
{
private :
int x , y ;
public :
Point ( int u , int v ) : x ( u ) , y ( v ) {}
int getX () { return x ; }
int getY () { return y ; }
};
int main ()
{
Point p (5 , 3) ;
//cout << p . x << " " << p . y << " \ n " ; // can't access private variables
cout << p.getX() << " " << p.getY() << " \n ";
return 0;
}
