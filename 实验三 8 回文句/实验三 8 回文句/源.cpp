//��8������һӢ���ַ������ж����Ƿ�Ϊ����
//����ν���ģ���ָ�������ͷ�����һ�����ַ�����
//��Was it a cat I saw ? Madam, I��m Adam.�ȵȣ�
//(��ʾ���ж�ǰ���ȶ��ַ�������Ԥ����
//	��ɾ������Ҫ�Ŀո񡢱����ŵȣ�
//	�ٽ���д�ַ�ת��ΪСд�ַ���
//	Ȼ������β�������ַ������ж�)
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,k=0,l=0;
	char a[30];
	cin.getline(a,30);
	cout << a << endl;
	while (a[i] != '\0')
	{
		if (isalpha(a[i]))
		{
			if (isupper(a[i]))
				a[j] = tolower(a[i]);
			else
				a[j] = a[i];
			j++;
		}
		i++;
	}
	k = j;
	while (a[j]!='\0')
	{
		a[j] = '\0';
		j++;
	}
	cout << a << endl;
	while (l <= k / 2)
	{
		if (a[l] != a[k - l - 1])
		{
			cout << "���ǻ���" << endl;
			goto end;
		}
		l++;
	}
	cout << "�ǻ���" << endl;
end:
	return 0;
}