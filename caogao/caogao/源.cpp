#include<stdio.h>
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(0));//?
	int SUIJI1 = rand() % 9 + 1;
	int SUIJI2 = rand() % 9 + 0;
	int SUIJI3 = rand() % 9 + 0;
	int SUIJI4 = rand() % 9 + 0;
	int SUIJI = SUIJI1 * 1000 + SUIJI2 * 100 + SUIJI3 * 10 + SUIJI4;

	cout << "input the XXXX you guess";

	int INPUT, SAN, ER, GE, BAI, SHI, QIAN;
	cin >> INPUT;
	double shengyu = INPUT % 1;
	if (shengyu != 0)
		printf("ʧ��");

	QIAN = INPUT / 1000;
	BAI = INPUT / 100 - QIAN * 10;
	GE = INPUT % 10;
	SHI = (INPUT - QIAN * 1000 - BAI * 100 - GE) / 10;

	cout << "�������" << SUIJI << endl;
	cout << "��������" << QIAN << BAI << SHI << GE << endl;

	for (; INPUT < 1000 || INPUT >= 10000; )
	{
		cout << "������λ��������������";
		cin >> INPUT;
	}
	cout << "��ɹ���" << endl;
	return 0;
}


