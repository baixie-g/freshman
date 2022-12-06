//���ࡢֱ����Ͷ�������������¡���ʵ�����еĺ�����
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
    };//���������
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
        cout << "p1Ϊ";
        getp1().show();
        cout << "p2Ϊ";
        getp2().show();
    };//���ֱ�������˵�����
};
class Polygon
{
private:
    Line* p;
    int edges;//����α���
public:
    Polygon(Line*l, int edge_num) {
        p = new Line[edge_num];
        p = l;
    };//��һ������������Σ�һ�����Line�����������
    Polygon(Point*k, int point_num) {
        edges = point_num;
        p = new Line[edges];
        for (int i = 0; i < point_num - 1; i++)
        {
            p[i] = Line(k[i], k[i + 1]);
        }
        p[point_num - 1] = Line(k[point_num - 1], k[0]);
    }; //��һ�鶥�����������Σ�һ�鶥����Point�����������
    Polygon(const Polygon& a) {
        p = new Line[a.edges];
        edges = a.edges;
        for (int i = 0; i < edges; i++)
        {
            p[i] = a.p[i];
        }
    };//�������캯��
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
    };//�����������
    double perimeter() {
        double sum = 0;
        for (int i = 0; i < edges; i++)
        {
            sum = +p[i].length();
        }
        return sum;
    };//���������ܳ�
    void show() {
        cout << "����ζ���";
        for (int i = 0; i < edges; i++)
            p[i].getp1().show();
        cout << "�ܳ�" << perimeter()<<"���"<<area() << endl;
    };//�������ζ������С��ܳ������
    ~Polygon() {
        delete[]p;
    };//��������
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
//��ʾ��
//��1��������ʱ�����е���������A��x1, y1����B��x2, y2����C��x3, y3����
//���������Ϊ: S = 0.5 * (x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1)��
//���������ɶ����������Ͷ��ɡ�
//��2��Polygon�����εı��������ʱ���޷�ȷ���ģ�ֻ��������ʱ����ȷ����
//��˶���αߵ������ö�̬���飨new�����洢��Polygon����ֻ��Ŷ���α�����������׵�ַ��
//��Ϊ����new�����Ķ�̬���飬���Կ������캯���������������û����塣