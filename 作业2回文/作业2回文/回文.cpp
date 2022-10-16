#include<iostream>
using namespace std;

int main()
{
	int INPUT,INPUT1,P=0;
	cout << "请输入一个四位数" << endl;
	cin >> INPUT1;
	INPUT = INPUT1;
	for (; INPUT < 1000 || INPUT >= 10000 || INPUT < INPUT1; )
	{
		cout << "不是四位整数，请重新输入" << endl;
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
		cout << "是回文" << endl;
	else
		cout << "不是回文" << endl;
	return 0;


}