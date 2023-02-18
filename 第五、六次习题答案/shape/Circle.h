#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include "shape.h"
class Circle:public Shape
{
private:
    double r;
public:
    Circle(int x=0,int y=0,double r=1);
    double Getarea();
    double Getperimeter();
    void show();
};


#endif // CIRCLE_H_INCLUDED
