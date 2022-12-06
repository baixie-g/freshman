//点类、直线类和多边形类的设计如下。请实现其中的函数。
#include<iostream>
using namespace std;
#pragma warning(disable : 4996) 
class Point
{
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    };
    int getx() {
        return x;
    };
    int gety() {
        return y;
    };
    void show() {
        cout << "(" << x << "," << y << ")" << endl;
    };//输出点坐标
};
class Line
{
private:
    Point p1, p2;
public:
    Line(int x1=0, int y1=0, int x2=0, int y2=0):p1(x1,y1),p2(x2,y2){};
    Line(Point p1, Point p2):p1(p1),p2(p2){};
    double length() {
        return sqrt((pow(p1.getx() - p2.getx(), 2) + pow(p1.gety() - p1.gety(), 2)));
    };
    Point getp1() {
        return p1;
    };
    Point getp2() {
        return p2;
    };
    void show() {
        cout << "p1为";
        getp1().show();
        cout << "p2为";
        getp2().show();
    };//输出直线两个端点坐标
};
class Polygon
{
private:
    Line* p;
    int edges;//多边形边数
public:
    Polygon(Line*l, int edge_num) {
        p = new Line[edge_num];
        p = l;
    };//由一组边来构造多边形，一组边有Line对象数组给出
    Polygon(Point*k, int point_num) {
        edges = point_num;
        p = new Line[edges];
        for (int i = 0; i < point_num - 1; i++)
        {
            p[i] = Line(k[i], k[i + 1]);
        }
        p[point_num - 1] = Line(k[point_num - 1], k[0]);
    }; //由一组顶点来构造多边形，一组顶点有Point对象数组给出
    Polygon(const Polygon& a) {
        p = new Line[a.edges];
        edges = a.edges;
        for (int i = 0; i < edges; i++)
        {
            p[i] = a.p[i];
        }
    };//拷贝构造函数
    double area() {
        int x1, x2, x3, y1, y2, y3;
        x1 = p[0].getp1().getx();
        y1 = p[0].getp1().gety();
        double sum = 0;
        for (int i = 2; i < edges; i++)
        {
            x2 = p[i - 1].getp1().getx();
            y2 = p[i - 1].getp1().gety();
            x3 = p[i].getp1().getx();
            y3 = p[i].getp1().gety();
            sum += 0.5 * (x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1);
        }
        return sum;
    };//计算多边形面积
    double perimeter() {
        double sum = 0;
        for (int i = 0; i < edges; i++)
        {
            sum = +p[i].length();
        }
        return sum;
    };//计算多边形周长
    void show() {
        cout << "多边形顶点";
        for (int i = 0; i < edges; i++)
            p[i].getp1().show();
        cout << "周长" << perimeter()<<"面积"<<area() << endl;
    };//输出多边形顶点序列、周长及面积
    ~Polygon() {
        delete[]p;
    };//析构函数
};
int main()
{
    Point p1[3] = { Point(-1, 1), Point(0, 0), Point(1, 1) };
    Polygon a(p1, 3);
    a.show();
    Point p2[4] = { Point(-1, 1), Point(0, 0), Point(1, 1),Point(0,2) };
    Polygon b(p2,4);
    b.show();
    Polygon  c(b);
    c.show();
}
//提示：
//（1）对于逆时针排列的三个顶点A（x1, y1）、B（x2, y2）、C（x3, y3），
//三角形面积为: S = 0.5 * (x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1)，
//多边形面积由多个三角形求和而成。
//（2）Polygon类多边形的边数在设计时是无法确定的，只有在运行时才能确定，
//因此多边形边的数据用动态数组（new）来存储。Polygon类里只存放多边形边数据数组的首地址。
//因为用了new创建的动态数组，所以拷贝构造函数、析构函数需用户定义。