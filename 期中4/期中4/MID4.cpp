//��������int data[5][5]�������Ԫ�ص�ֵ������ÿ�е����ֵ���������Խ����ϡ�
#include<iostream>
using namespace std;
int main()
{
	int data[5][5];
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��" << endl;
		for (int j = 0; j < 5; j++)
			cin >> data[i][j];
	}
	for (int i = 0; i < 5; i++)
	{
		int max = data[i][0];
		for (int j = 0; j < 5; j++)
		{
			if(data[i][j]>max)max= data[i][j];
		}
		data[i][i] = max;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		cout << data[i][j]<<"\t";
		cout << endl;
	}
}