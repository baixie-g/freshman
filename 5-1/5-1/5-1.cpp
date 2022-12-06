//��1�����һ������Point������д����������֮��
//���ݳ�Ա�У�������(int x)��������(int y)��
//��Ա�����У����캯��Point(int _x = 0, int _y = 0)��
//�㵽ԭ����뺯��double dist()��
//���ƽ�ƺ���void pan(int delta_x, int delta_y)��
//����ԭ����ת����void rotate(double alpha)��
//�������ȡ����int get_x(), int get_y()��
//�������������void display()��

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
	cout << "���������" << endl;
	cin >> x;
	cin >> y;
	Point a(x,y);
	cout << "(" << a.get_x() << "," << a.get_y() << ")" << endl;
	cout << "����" << endl;
	cout<<a.dist()<<endl;
	double delta_x, delta_y;
	cout << "����ƽ��delta" << endl;
	cin >> delta_x;
	cin >> delta_y;
	a.pan(delta_x, delta_y);
	cout << "(" << a.get_x() << "," << a.get_y() << ")" << endl;
	double alpha;
	cout << "��ת��" << endl;
	cin >> alpha;
	a.rotate(alpha);
	cout << "(" << a.get_x() << "," << a.get_y() << ")" << endl;
	a.display();
}