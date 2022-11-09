//（3）编写一函数：判断某整数是否是回文数。（bool isPalindromes(int )）。并调用该函数找出1000内的回文数。（如11,22,121,676等是回文数）
#include<iostream>
using namespace std;
bool isPalindromes(int x)
{
	int y = 0,x1=x;
	while (x1)
	{
		y = y * 10 + x1 % 10;
		x1 /= 10;
	}
	if (x - y)
		return false;
	else
		return true;
}
int main()
{
	int a;
	for (int i = 1; i < 1000; i++)
		if (isPalindromes(i))
			cout << i << endl;
	cin >> a;
	if (isPalindromes(a))
		cout << "是回文" << endl;
	else
		cout << "非回文" << endl;

}