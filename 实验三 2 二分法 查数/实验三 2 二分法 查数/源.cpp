
#include<iostream>
using namespace std;
int main()
{
	int i, j, k, a[10], s = -1, w = 10, z, cz;
	cout << "��С����" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << "�������" << i + 1 << "����" << endl;
		cin >> a[i];
	}
	cout << "�����������" << endl;
	cin >> cz;

	for (; s != (w - 1);)
	{
		z = (s + w) / 2;
		if (a[z] == cz)
		{
			cout << "��" << z + 1 << endl;
			goto t;
		}
		a[z] > cz ? w = z : s = z;
	}
	cout << "����" << endl; t:
	return 0;
}
