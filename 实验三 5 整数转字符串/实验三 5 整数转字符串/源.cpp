//（5）输入一正整数，将其转化为字符串。（如将整数12345 转化为字符串“12345”）
#include<iostream>
#include<string>
using namespace std;

void main()
{
	int num, j = 0;
	string num1;
	cin >> num;
	while (num != 0)
	{
	char i = static_cast<char>(num % 10+'0');
	num1 = i+num1;
	num /= 10;
	}
	cout << num1 << endl;
}