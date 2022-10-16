//输入一正整数，输出其逆序数。（如输入123456，输出654321）
#include<iostream>
using namespace std;
int main()
{
	int wei=0,x,hou,shou,out=0;
	cin >> x;
	int x1 = x;
	while (x1)
	{
		x1 /= 10;
		wei++;
	}
	for (int i = 1; i <= wei; i++)
	{
		hou = x % 10;
		x /= 10;
		out += hou * pow(10, wei - i);
	}
	
	cout << out << endl;
	//int num, n_num = 0;
	//cin>>num;
	//while (num)
	//{
	//	n_num = n_num * 10 + num % 10;
	//	num = num / 10;
	//}
	//cout << n_num << endl;
	return 0;

}