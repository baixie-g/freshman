//��3����дһ�������ж�ĳ�����Ƿ��ǻ���������bool isPalindromes(int )���������øú����ҳ�1000�ڵĻ�����������11,22,121,676���ǻ�������
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
		cout << "�ǻ���" << endl;
	else
		cout << "�ǻ���" << endl;

}