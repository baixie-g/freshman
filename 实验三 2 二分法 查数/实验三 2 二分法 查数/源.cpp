
#include<iostream>
using namespace std;
int main()
{
	int i, j, k, a[10], s = -1, w = 10, z, cz;
	cout << "从小到大" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << "请输入第" << i + 1 << "个数" << endl;
		cin >> a[i];
	}
	cout << "请输入查找数" << endl;
	cin >> cz;

	for (; s != (w - 1);)
	{
		z = (s + w) / 2;
		if (a[z] == cz)
		{
			cout << "在" << z + 1 << endl;
			goto t;
		}
		a[z] > cz ? w = z : s = z;
	}
	cout << "不在" << endl; t:
	return 0;
}
