//��5������һ������������ת��Ϊ�ַ��������罫����12345 ת��Ϊ�ַ�����12345����
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