#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "请输入三个数字" << endl;
	cout << "第一个数字" << endl;
	cin >> a;
	cout << "第二个数字" << endl;
	cin >> b;
	cout << "第三个数字" << endl;
	cin >> c;
	if (b > a)
	{
		d = b;
		b = a;
		a = d;
	}
	if (c > a)
	{
		d = c;
		c = a;
		a = d;
	}
	if (c > b)
	{
		d = c;
		c = b;
		b = d;
	}
	cout << "三者的由小到大顺序是" << c << "<" << b << "<" << a << endl;

	return 0;


}