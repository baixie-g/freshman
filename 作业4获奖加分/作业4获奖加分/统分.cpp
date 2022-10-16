#include<iostream>
using namespace std;

/*
某学院举行了一次“程序设计大赛”，规定学生的“程序设计”课程成绩可以因为在大赛上获奖而加分：
一等奖加10分，二等奖加8分、三等奖加5分，优胜奖加2分。
加分后的成绩如果超出100分则按100分计算。
编写程序，
输入同学的“程序设计”成绩和获奖等级，
重新计算该同学的“程序设计”成绩。

*/

int main()
{
	int CHENGJI = -1;
	for (; CHENGJI < 0 || CHENGJI>100;)
	{
		cout << "请输入你的课程成绩（0~100）" << endl;
		cin >> CHENGJI;
	}
	cout << "请选择你获得了几等奖\nA一等奖\tB二等奖\nC三等奖\tD四等奖" << endl;
	char a;
	cin >> a;
	int SUM=0;

	if (a == 'A')
		SUM = CHENGJI + 10;
	if (a == 'B')
		SUM = CHENGJI + 8;
	if (a == 'C')
		SUM = CHENGJI + 5;
	if (a == 'D')
		SUM = CHENGJI + 2;

	if (SUM <= 100)
		cout << "总成绩为" << SUM << endl;
	else
		cout << "总成绩为" << 100 << endl;


	


	return 0;
}