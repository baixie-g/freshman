#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "��������������" << endl;
	cout << "��һ������" << endl;
	cin >> a;
	cout << "�ڶ�������" << endl;
	cin >> b;
	cout << "����������" << endl;
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
	cout << "���ߵ���С����˳����" << c << "<" << b << "<" << a << endl;

	return 0;


}