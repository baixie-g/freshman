//输入角度x（以度为单位），不使用数学函数求cos(x)的值。（cos(x)=1-x2/2!+x4/4!-x6/6!+......）
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x, t = 1, cos = 1;
	cout << "cos" << endl;
	cin >> x;
	for (int i = 1; i <= 10; i++)
	{
		t = t * x / i * 3.14159 / 180;
		if (!(i % 2))
		{
			t *= -1;
			cos += t;
		}
	}
	printf(" % .4lf\n", cos);
	return 0;
}
