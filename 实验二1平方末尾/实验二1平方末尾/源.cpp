//��1�����ĳ������ƽ����ĩβ��λ���������������ô�ͳ������Ϊ�����������1000���ڵ�������������
//����5��6��һλ��������5x5 = 25�� 6x6 = 36��25��76����λ��������25x25 = 625�� 76x76 = 5776��
#include<iostream>
using namespace std;

int main()
{
	int i;
	for (i = 1; i <= 1000; i++)
	{
		int p = i * i;
		int ge = i % 10;
		int shi = i / 10 % 10;
		int bai = i / 100 % 10;
		int qian = i / 1000;
		int ge1 = p % 10;
		int er = p % 100;
		int san = p % 1000;
		int t = 0;
		if (!qian && !bai && !shi && ge1 == i)
		{
			t++;
			goto flag;
		}
		if (!qian && !bai && er == i)
		{
			t++;
			goto flag;
		}
		if (!qian && san == i)
		{
			t++;
			goto flag;
		}flag:
		if (t)
		{
			cout << i << endl;
		}
	}

	return 0;
}
