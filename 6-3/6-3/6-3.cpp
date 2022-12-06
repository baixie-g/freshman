//设计一个抽象类Shape，
//数据成员：中心坐标（int x, y）;
//成员函数：构造函数，计算面积和周长的纯虚函数double Getarea()和double Getperimeter();
//并由该类派生出Rectangle类（增加数据成员长和宽int width, length）
// 和Circle类（增加数据成员int radius)，实现各类的Getarea（）和Getperimeter()函数。
//设计全局函数void show(Shape* s)
//实现各种几何图形面积和周长的输出。
//实现类并编写主函数测试之。


#include <iostream>

using namespace std;

class Shape
{
protected:
    int x, y;
    Shape(int x = 0, int y = 0);
public:
    virtual void show();
    virtual double Getarea() = 0;
    virtual double Getperimeter() = 0;
    void Base_info();
};
Shape::Shape(int x, int y)
{
    this->x = x;
    this->y = y;
}
void Shape::show()
{
    cout << "Center:(" << x << "," << y << ")" << endl;
}
void Shape::Base_info()
{
    cout <<"\033[34;1mShape版权\033[0m" << endl;
}




class Rectangle :public Shape
{
protected:
    int width, length;
public:
    Rectangle(int x=0, int y=0, int width=0, int length=0);
    double Getarea();
    double Getperimeter();
    void show();
};
Rectangle::Rectangle(int x, int y, int width, int length) :Shape(x, y)
{
    this->width = width;
    this->length = length;
}
double Rectangle::Getarea()
{
    return width * length;
}
double Rectangle::Getperimeter()
{
    return 2 * (width + length);
}
void Rectangle::show()
{
    Shape::show();
    cout << "width:" << width << endl;
    cout << "length:" << length << endl;
}




class Circle :public Shape
{
private:
    double r;
public:
    Circle(int x = 0, int y = 0, double r = 1);
    double Getarea();
    double Getperimeter();
    void show();
};
Circle::Circle(int x, int y, double r) :Shape(x, y)
{
    this->r = r;
}
double Circle::Getarea()
{
    return 3.14159 * r * r;
}
double Circle::Getperimeter()
{
    return 2 * 3.1415926 * r;
}
void Circle::show()
{
    Shape::show();
    cout << "Radius:" << r << endl;
}




void show(Shape* p)
{
    p->Base_info();
    p->show();
    cout << "Area:" << p->Getarea() << endl;
    cout << "Perimeter:" << p->Getperimeter() << endl;
}
int main()
{
    Circle c(1, 2, 1);
    Rectangle R(0, 0, 2, 3);
    Shape* p = &c;
    Shape* pp = &R;
    show(p);
    show(pp);
    return 0;
}
