//（7）输入两个正整数a（a<10）和n，求a+aa+aaa+aaaa+a…a(n个a)之和。（如输入2,3，计算2+22+222之和，输出246）
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, n,d=0,dd=0;
	cin >> a;
	cin >> n;
	for (int j = 1; j <= n; j++)
	{
		d += (a * pow(10, j-1));
		dd += d;
	}
	cout << dd << endl;
	return 0;

}