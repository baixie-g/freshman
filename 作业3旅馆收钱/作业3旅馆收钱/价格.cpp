#include<iostream>
using namespace std;
/*
* 某宾馆房间的标准价格为398元/天，
价格随旅游季节和团队规模而浮动：

在旺季（7—9月份），20个房间以上(含20间)的团队优惠30%；
不足20房间的团队优惠15%；

在淡季，         20房间以上(含20间)的团队优惠50%；
不足20房间的团队优惠30%；

编写程序，输入月份和预定房间数，输出每天应收总金额。

*/
int main()
{
	const int DANJIA = 398;
	int YUE, FANGJIANSHU;
	double FEIYONG;
	cout << "请输入入住月份嗷：" << endl;
	cin >> YUE;
	//int INPUT = YUE;
	/*for (; INPUT <= 0 || INPUT > 12 || INPUT < YUE; )
	{
		cout << "真实的月份" << endl;
		cin >> YUE;
		INPUT = YUE;
	}*/
	cout << "请输入预订的房间数：" << endl;
	cin >> FANGJIANSHU;

	if (7 <= YUE && 9 >= YUE)
	{
		if (FANGJIANSHU >= 20)
			FEIYONG = DANJIA * FANGJIANSHU * 0.7;
		else FEIYONG = DANJIA * FANGJIANSHU * 0.85;
	}
	else
	{
		if (FANGJIANSHU >= 20)
			FEIYONG = DANJIA * FANGJIANSHU * 0.5;
		else FEIYONG = DANJIA * FANGJIANSHU * 0.7;
	}
		
	cout << "费用是" << FEIYONG << endl;


	return 0;
}