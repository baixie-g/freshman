#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
#include "point.h"
class Line
{
private:
      Point p1,p2;
public:
      Line(int x1,int y1,int x2,int y2);
      Line(Point p1, Point p2);
      Line();
      double length();
      Point getp1();
      Point getp2();
      void show();//输出直线两个端点坐标
};


#endif // LINE_H_INCLUDED
