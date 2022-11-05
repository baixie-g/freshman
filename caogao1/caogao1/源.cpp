#include<iostream>
#include<stdio.h>


using namespace std;

int main()
{
	//int a = 11;
	//int b = 2;
	//int c = ( b>a ? a: b);
	//cout << c << endl;
	//(a > b ? a : b) = 111110000;
	//cout << a << "分割" << b << endl;


	//switch(变量)
	//	case 整形或者字符：
	//		语句;
	//		break;
	//	case.....

	//		执行效率高  清晰

	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << j << "*" << i <<"="<<j*i << "\t";

	//	}
	//cout << endl;

	//}



/*
int a;
	cout << 4 * (a = 1, a + 1, a = a + 1) << endl;
*/
	/*int a=1, b = 2, c = 3;
	c=a++>=!(b+c);
	cout << a << b << c << endl;*/


	//int x = 4;
	//	if (2 < x < 6)
	//		cout << x << endl;

	/*
	int a = 1, b = 1, c;
	c = --a && ++b;//判断到灵后后半句不执行
	cout << a << b << c << endl;

	*/

	


	////地址
	//int a = 10;
	//int *p = &a;
	//cout << a << "\n" << sizeof a << "\n" << *p << "\n" << &a << "\n" << p << endl;
	/*
	10
	4
	10                 *变量 就是利用变量里存的地址 导向地址变量
	00000020F1B1FA04   所以*说明我要存地址  变量即是地址
	00000020F1B1FA04
	*/

	//swap1(a, b)配对void swap1(int a, int b);
	//swap2(&a, &b) 配对void swap2(int *p1 ,int *p2)


	//int x = 1;
	//cout << (x > 0) || (0);



		////////////////int  hour1, minute1;
		////////////////int  hour2, minute2;
		////////////////scanf_s("%d &d", &hour1, &minute1);
		////////////////scanf_s("%d %d", &hour2, &minute2);
		////////////////int t1 = hour1 * 60 + minute1;
		////////////////int t2 = hour2 * 60 + minute2;

		////////////////int t = t2 - t1;

		////////////////printf("时间差是%d小时%d分。", t / 60, t % 60);

	//int a = 9;
	//bool ge = a % 10 - 8;
	//cout << ge << endl;

	//char* p;
	//p = "0x12312312";

	


	return 0;


}