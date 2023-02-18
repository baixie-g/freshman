#include "polygon.h"
#include <iostream>
using namespace std;
Polygon::Polygon(Line *line, int edge_num)
{
    edges = edge_num;
    p=new Line[edges];
    for (int i = 0;i < edges; i++)
        p[i] = line[i] ;
}
Polygon::Polygon(Point *point, int point_num)
{
    edges = point_num;
    p = new Line[edges];
    for (int i = 0;i<edges;i++)
    if(i < edges-1)
        p[i] = Line(point[i], point[i+1]);
    else
        p[i] = Line(point[i], point[0]);
}
Polygon::Polygon(const Polygon &polygon)
{
    edges = polygon.edges;
    p=new Line[edges];
    for (int i = 0;i < edges;i++)
        p[i] = polygon.p[i];
}
double Polygon::area()
{
    double sum = 0;
    for (int i = 2;i < edges;i++)
    sum += 0.5*( p[0].getp1().getx()*p[i-1].getp1().gety()
                +p[i-1].getp1().getx()*p[i].getp1().gety()
                +p[i].getp1().getx()*p[0].getp1().gety()
                -p[0].getp1().gety()*p[i-1].getp1().getx()
                -p[i-1].getp1().gety()*p[i].getp1().getx()
                -p[i].getp1().gety()*p[0].getp1().getx()
               );
    return sum;
}
double Polygon::perimeter()
{
    double peri = 0;
    for (int i = 0;i < edges; i++)
        peri += p[i].length() ;
    return peri ;
}
void Polygon::show()
{
    for (int i = 0;i < edges; i++)
        p[i].show() ;




    cout << this->perimeter() << endl;
    cout << this->area() << endl ;
    
    
    
    
    
    
    return;

}
Polygon::~Polygon()
{
    delete []p;
}
