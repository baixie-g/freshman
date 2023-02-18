#include "shape.h"
#include <iostream>
using namespace std;
Shape::Shape(int x,int y)
{
    this->x = x;
    this->y = y;
}
void Shape::show()
{
    cout<<"Center:("<<x<<","<<y<<")"<<endl;
}
void Shape::Base_info()
{
    cout<<"Base Copyright£¡"<<endl;
}
