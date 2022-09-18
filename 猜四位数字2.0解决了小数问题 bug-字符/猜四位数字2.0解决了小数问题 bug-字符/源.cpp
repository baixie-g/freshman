#include<stdio.h>
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	//随机四位数分四步生成
	srand(time(0));//?
	int SUIJI1 = rand() % 9 + 1;
	int SUIJI2 = rand() % 9 + 0;
	int SUIJI3 = rand() % 9 + 0;
	int SUIJI4 = rand() % 9 + 0;
	int SUIJI = SUIJI1 * 1000 + SUIJI2 * 100 + SUIJI3 * 10 + SUIJI4;

	//出示问题
	cout << "input the XXXX you guess";

	//cout << "随机数是" << SUIJI << endl;


	double INPUT1;
	cin >> INPUT1;
	int INPUT = INPUT1;


	for (; INPUT != SUIJI; )
	{

		for (; INPUT < 1000 || INPUT >= 10000 || INPUT < INPUT1; )
		{
			cout << "不是四位整数，请重新输入" << endl;
			cin >> INPUT1;
			INPUT = INPUT1;
		}

		/*	cout << INPUT << "%%" << INPUT1 << endl;*/

		int XT = 0;
		int BT = 0;
		int QIAN = INPUT / 1000;
		int BAI = INPUT / 100 - QIAN * 10;
		int GE = INPUT % 10;
		int SHI = (INPUT - QIAN * 1000 - BAI * 100 - GE) / 10;

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
		INPUT = INPUT1;

	}

	cout << "你成功了" << endl;



	return 0;
}


