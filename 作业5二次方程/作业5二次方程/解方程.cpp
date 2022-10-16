#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	double x1, x2;
	double DT, DT1;
	cout << "ax^2+bx+c=0" << endl;
	cout << "请输入a：" << endl;
	cin >> a;
	cout << "请输入b：" << endl;
	cin >> b;
	cout << "请输入c：" << endl;
	cin >> c;

	DT1 = b * b - 4 * a * c;
	if (DT1 < 0)
	{
		cout << "无解" << endl;
		goto P;
	}
	
	DT = sqrt(b * b - 4 * a * c);
	x1 = (-b + DT) / (2 * a);
	x2 = (-b - DT) / (2 * a);
	cout << "x1是" << x1 << "\nx2是" << x2 << endl;
P:

	return 0;


}