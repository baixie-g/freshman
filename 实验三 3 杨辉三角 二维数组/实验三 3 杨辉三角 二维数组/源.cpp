//��3����ӡ������µ��������10�С�����ʾ��ϵ���Ĺ�ϵΪai, j = ai - 1, j + ai - 1, j - 1�����ö�ά�������ֵ���ٴ�ӡ����
//1
//1  1
//1  2  1
//1  3  3  1
//1  4  6  4  1
//1  5  10 10  5  1
//��������.

#include<iostream>
using namespace std;
int main()
{
	int i,j,a[11][11]={0};
	a[1][1] = 1;
	cout << a[1][1] << endl;
	for (i = 2; i < 11; i++)
	{
		for (j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i-1][j];
			cout << a[i][j]<<"\t";
		}
		cout << endl;
	}
}