#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED
#include "line.h"
class Polygon
{
private:
     Line *p;
     int edges;//����α���
public:
     Polygon(Line *, int edge_num);//��һ������������Σ�һ�����Line�����������
     Polygon(Point *, int point_num); //��һ�鶥�����������Σ�һ�鶥����Point�����������
     Polygon(const Polygon &);//�������캯��
     double area();//�����������
     double perimeter();//���������ܳ�
     void show();//�������ζ������С��ܳ������
     ~Polygon();//��������
};


#endif // POLYGON_H_INCLUDED
