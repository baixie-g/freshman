#include<iostream>
using namespace std;

int main()
{
	int INPUT,INPUT1,P=0;
	cout << "������һ����λ��" << endl;
	cin >> INPUT1;
	INPUT = INPUT1;
	for (; INPUT < 1000 || INPUT >= 10000 || INPUT < INPUT1; )
	{
		cout << "������λ����������������" << endl;
		cin >> INPUT1;
		INPUT = INPUT1;
	}

	int QIAN = INPUT / 1000;
	int BAI = INPUT / 100 - QIAN * 10;
	int GE = INPUT % 10;
	int SHI = (INPUT - QIAN * 1000 - BAI * 100 - GE) / 10;

	if (QIAN == GE)
		P++;
	if (SHI == BAI)
		P++;
	if (P == 2)
		cout << "�ǻ���" << endl;
	else
		cout << "���ǻ���" << endl;
	return 0;


}