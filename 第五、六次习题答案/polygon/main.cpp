#include <iostream>
#include "polygon.h"
using namespace std;

int main()
{
    Point p[4] = {Point(0,0),Point(1,0),Point(1,1),Point(0,1)};
    Line l[4] = {Line(p[0],p[1]),Line(p[1],p[2]),Line(p[2],p[3]),Line(p[3],p[0])};
    Polygon polygon1(l, 4);
    Polygon polygon2(p, 4);
    Polygon polygon3(polygon1);
    polygon1.show();
    polygon2.show();
    polygon3.show();
    return 0;
}
