//��6����һ�ַ������뵽��һ�ַ�����ָ��λ�á����罫�ַ���һ��abc�����뵽�ַ�������123456xyz���ĵ�3λ�������ַ�������Ϊ��12abc3456xyz����
#include<iostream>
#include<string>
using namespace std;


void main()
{
	int n,i=0;
	string a,b,c;
	cout << "�����һ���ַ���" << endl;
	cin >> a;
	cout << "����ڶ����ַ���" << endl;
	cin >> b;
	cout << "�����һ���ַ�����ڶ����ַ��ڼ�λ��" << endl;
	cin >> n;
	while(b[i])
	{
		if (i == n)c += a;
		c += b[i];

		i++;
	}
	cout << c << endl;
}