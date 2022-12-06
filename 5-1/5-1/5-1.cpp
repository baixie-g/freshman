//（1）设计一个点类Point，并编写主函数测试之。
//数据成员有：横坐标(int x)，纵坐标(int y)；
//成员函数有：构造函数Point(int _x = 0, int _y = 0)、
//点到原点距离函数double dist()、
//点的平移函数void pan(int delta_x, int delta_y)、
//点绕原点旋转函数void rotate(double alpha)、
//点坐标获取函数int get_x(), int get_y()、
//点坐标输出函数void display()。

#include<iostream>
using namespace std;
class Point
{
private:
	double x, y;
public:
	Point(double x = 0, double y = 0);
	double dist();
	void pan(double delta_x, double delta_y);
	void rotate(double alpha);
	double get_x();
	double get_y();
	void display();
};
Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}
double Point::dist()
{
	return sqrt(x * x + y * y);
}
void Point::pan(double delta_x, double delta_y)
{
	this->x += delta_x;
	this->y += delta_y;
}
void Point::rotate(double alpha)
{
	x = x * cos(alpha / 180 * 3.1415926) - y * sin(alpha / 180 * 3.1415926);
	y = y * sin(alpha / 180 * 3.1415926) + y * cos(alpha / 180 * 3.1415926);
}
double Point::get_x()
{
	return x;
}
double Point::get_y()
{
	return y;
}
void Point::display()
{
	cout << "(" << x << "," << y << ")" << endl;
}
int main()
{
	double x, y;
	cout << "输入点坐标" << endl;
	cin >> x;
	cin >> y;
	Point a(x,y);
	cout << "(" << a.get_x() << "," << a.get_y() << ")" << endl;
	cout << "距离" << endl;
	cout<<a.dist()<<endl;
	double delta_x, delta_y;
	cout << "输入平移delta" << endl;
	cin >> delta_x;
	cin >> delta_y;
	a.pan(delta_x, delta_y);
	cout << "(" << a.get_x() << "," << a.get_y() << ")" << endl;
	double alpha;
	cout << "旋转角" << endl;
	cin >> alpha;
	a.rotate(alpha);
	cout << "(" << a.get_x() << "," << a.get_y() << ")" << endl;
	a.display();
}