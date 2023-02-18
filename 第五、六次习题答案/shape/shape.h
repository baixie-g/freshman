#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
class Shape
{
protected:
    int x,y;
    Shape(int x=0, int y=0);
public:
    virtual void show();
    virtual double Getarea()=0;
    virtual double Getperimeter()=0;
    void Base_info();
};

#endif // SHAPE_H_INCLUDED
