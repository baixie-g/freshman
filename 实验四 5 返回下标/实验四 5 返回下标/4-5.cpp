//��5����дһ����������֮��
//����һ����һά��������СԪ�غ����Ԫ�ص��±꣬
//����ж����ͬ�ļ�ֵԪ�أ�������С���±꣨�� 2,4,4,5,7,8,8,2�� ���Ϊ0�� 5���� 
//��void  extreme_pos(const int *, int n, int *)��
#include<iostream>
using namespace std;

void  extreme_pos(const int* pa, int n, int* pm)
{
	pm[0] = pm[1] = 0;
	for (int i = 0; i < n; i++)
	{
		if (pa[i] > pa[pm[1]])pm[1] = i;
		if (pa[i] < pa[pm[0]])pm[0] = i;
	}
}
int main()
{
	int a[10] = { 0,-1,1,9,5,66,1,1,5,66 },m[2];
	extreme_pos(a, 10, m);
	cout << m[0] << "\t" << m[1] << endl;
}
