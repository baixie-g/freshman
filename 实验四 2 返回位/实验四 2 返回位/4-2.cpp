//��2����дһ����������֮�������������ұ���ĳһָ��λ����ֵ����int digitR(int , int )��int digitR(12345,2)������4����
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