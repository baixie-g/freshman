//��7����������������a��a<10����n����a+aa+aaa+aaaa+a��a(n��a)֮�͡���������2,3������2+22+222֮�ͣ����246��
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