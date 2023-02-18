#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED
#include "line.h"
class Polygon
{
private:
     Line *p;
     int edges;//多边形边数
public:
     Polygon(Line *, int edge_num);//由一组边来构造多边形，一组边有Line对象数组给出
     Polygon(Point *, int point_num); //由一组顶点来构造多边形，一组顶点有Point对象数组给出
     Polygon(const Polygon &);//拷贝构造函数
     double area();//计算多边形面积
     double perimeter();//计算多边形周长
     void show();//输出多边形顶点序列、周长及面积
     ~Polygon();//析构函数
};


#endif // POLYGON_H_INCLUDED
