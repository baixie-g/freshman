//输入10个整数，用选择法进行排序。

#include<iostream>
using namespace std;

int main()
{
	int a[10],min,i,j,k;
	for (i = 0; i < 10; i++)
	{
		cout << "输入第" << i+1 << "个整数" << endl;
		cin >> a[i];
	}
	for (j = 0; j < 10; j++)
	{
		min = j;
		for (k = j + 1; k < 10; k++)
		{
			if(a[min] > a[k])min =k;
		}
		int temp = a[j];
		a[j] = a[min];
		a[min] = temp;
	}
	for (i = 0; i < 10; i++)
	cout << "第" << i + 1 << "个整数为"<<a[i] << endl;
	return 0;
}