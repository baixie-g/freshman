//����һ����������������������ӡ���������12�����2, 2, 3��
#include<iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	for (int i = 2; i <= x; i++)
	{
		if (x % i == 0)
		{
			cout << i << endl;
			do
			{
				x /= i;
			} while (x%i==0);
		}

	}
	return 0;
}