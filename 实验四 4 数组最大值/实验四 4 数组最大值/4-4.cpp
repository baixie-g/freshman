//（4）编写一函数并测试之：计算一组数组里的最大值。（double max(double *, int )）
#include<iostream>
#include<algorithm>
using namespace std;

double max(double* a, int n)
{
	double max = a[0];
	int i = 1;
	while (a[i])
	{
		if (max < a[i])max = a[i];
		i++;
	}
	return max;
}

int main()
{
	int n;
	cin >> n;
	double a[50];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << max(a, n) << endl;
}