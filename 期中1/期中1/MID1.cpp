//һ��ĳϵͳ�ĵ�¼����Ҫ��
//��1�����뺬�д�д�ַ���Сд�ַ��������ַ���
//��2�����ȱ������8���ַ�����д������֤�û�����������Ƿ�Ϲ档
#include<iostream>
using namespace std;
int main()
{
	char a[20];
	cin >> a;
	int i=0,b=0,c=0,d=0;
	for (i = 0; a[i]; i++)
	{
		cout << a[i] << endl;
		if (islower(a[i]))b++;
		if (isupper(a[i]))c++;
		if (isdigit(a[i]))d++;
	}
	if (!(b+c+d - i) && b&&c&&d&&i>8)
		cout << "����Ϲ�" << endl;
	else
		cout << "����Υ��" << endl;
}