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

	double INPUT1;
	int  SAN, ER, GE, BAI, SHI, QIAN;
	cin >> INPUT1;
	long long int INPUT = INPUT1;
	
	for (; INPUT < 1000 || INPUT >= 10000 || INPUT < INPUT1; )
	{
		cout << "不是四位整数，请重新输入" << endl;
		cout << INPUT << "%%" << INPUT1 << endl;
		cin >> INPUT1;
		INPUT = INPUT1;
		cout << INPUT << "%%" << INPUT1 << endl;
		QIAN = INPUT / 1000;
		BAI = INPUT / 100 - QIAN * 10;
		GE = INPUT % 10;
		SHI = (INPUT - QIAN * 1000 - BAI * 100 - GE) / 10;

		cout << "随机数是" << SUIJI << endl;
		cout << "你输入了" << QIAN << BAI << SHI << GE << endl;
	}
	INPUT = INPUT1;
	cout << "你输入了" << QIAN << BAI << SHI << GE << endl;

	cout << "走出了第一段" << endl;

		for (; INPUT != SUIJI; )
		{

			INPUT = INPUT1;
		
			int XT = 0;
			int BT = 0;
			QIAN = INPUT / 1000;
			BAI = INPUT / 100 - QIAN * 10;
			GE = INPUT % 10;
			SHI = (INPUT - QIAN * 1000 - BAI * 100 - GE) / 10;

			if (QIAN == SUIJI1)
				XT++;
			else
				BT++;
			if (BAI == SUIJI2)
				XT++;
			else
				BT++;
			if (SHI == SUIJI3)
				XT++;
			else
				BT++;
			if (GE == SUIJI4)
				XT++;
			else
				BT++;
			cout << "相同的有" << XT << "个" << "不同的有" << BT << "个" << endl;
			cout << "继续加油哦" << endl;
			cin >> INPUT1;

			cout << "你输入了" << QIAN << BAI << SHI << GE << endl;

			int INPUT = INPUT1;
			for (; INPUT < 1000 || INPUT >= 10000 || INPUT < INPUT1; )
			{
				cout << "不是四位整数，请重新输入" << endl;
				cin >> INPUT1;
				INPUT = INPUT1;
			}
			INPUT = INPUT1;
			cout << INPUT << "%%" << INPUT1 << endl;

			
		}
	cout << "你成功了" << endl;
		return 0;
}


