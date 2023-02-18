#include "point.h"
#include "line.h"
#include<iostream>
#include<cmath>
using namespace std;
Line::Line(int x1,int y1,int x2,int y2):p1(x1,y1),p2(x2,y2)
{
}
Line::Line(Point _p1, Point _p2):p1(_p1),p2(_p2)
{
}
Line::Line()
{
}
double Line::length()
{
    int x = p1.getx()-p2.getx();
    int y = p1.gety()-p2.gety();
    return sqrt(x*x+y*y);
}
Point Line::getp1()
{
    return p1;
}
Point Line::getp2()
{
    return p2;
}
void Line::show()
{
    p1.show();
    p2.show();
}
