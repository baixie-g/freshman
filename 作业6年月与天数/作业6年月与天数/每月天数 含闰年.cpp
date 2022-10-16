#include<iostream>
using namespace std;


int main()
{
	int NIAN, YUE,a,R=0;
	cout<< "请输入年" << endl;
	cin >> NIAN;
	cout << "请输入月" << endl;
	cin >> YUE;
	a = NIAN % 4;
	if (a)
		cout << "不是闰年" << endl;
	else
	{
		int b;
		b = NIAN % 100;

		if (b)
		{
			cout << "是闰年" << endl;
			R++;
		}
		else
		{
			int c=NIAN%400;
			if(c)
				cout << "不是闰年" << endl;
			else
			{
				cout << "是闰年" << endl;
			R++;
			}
				
		}
	}

	if (YUE==1|| YUE == 3 || YUE == 5 || YUE == 7 || YUE == 8 || YUE == 10 || YUE == 12 )
		cout << "31天" << endl;
	if (YUE == 4 || YUE == 6 || YUE == 9 || YUE == 11)
		cout << "30天" << endl;
	if (YUE == 2)
		cout << 28 + R << endl;




	return 0;

}