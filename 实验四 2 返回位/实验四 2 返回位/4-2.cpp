//（2）编写一函数并测试之：返回整数从右边起某一指定位的数值。（int digitR(int , int )如int digitR(12345,2)，返回4。）
#include<iostream>
using namespace std;
int digitR(int x, int y)
{
	int i = 1;
	for (; i < y; i++)
		x /= 10;
	return x % 10;
}
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << digitR(a, b) << endl;
}