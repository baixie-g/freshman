//������д��������ԭ˳����ȡ�ַ����е������ַ�����һ��������                 
//������ַ�����as12dwe56*&3pPq��,��������12563��
#include<iostream>
using namespace std;
char* NUM(char* p)
{
	int i = 0,j=0;
	for (; *p;i++)
	{
		if (!*(p + i))break;
		if (isdigit(*(p + i))) {
			*(p + j) = *(p + i);
			j++;
		}
	}
	*(p + j) = '\0';
	return p;
}

int main()
{
	char a[20];
	cin >> a;
	cout << atoi(NUM(a)) << endl;
}