#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(int x,int y,double r):Shape(x,y)
{
    this->r = r;
}
double Circle::Getarea()
{
    return 3.14159*r*r;
}
double Circle::Getperimeter()
{
    return 2*3.1415926*r;
}
void Circle::show()
{
    Shape::show();
    cout<<"Radius:"<<r<<endl;
}

