#include<iostream>
using namespace std;


int main()
{
	int NIAN, YUE,a,R=0;
	cout<< "��������" << endl;
	cin >> NIAN;
	cout << "��������" << endl;
	cin >> YUE;
	a = NIAN % 4;
	if (a)
		cout << "��������" << endl;
	else
	{
		int b;
		b = NIAN % 100;

		if (b)
		{
			cout << "������" << endl;
			R++;
		}
		else
		{
			int c=NIAN%400;
			if(c)
				cout << "��������" << endl;
			else
			{
				cout << "������" << endl;
			R++;
			}
				
		}
	}

	if (YUE==1|| YUE == 3 || YUE == 5 || YUE == 7 || YUE == 8 || YUE == 10 || YUE == 12 )
		cout << "31��" << endl;
	if (YUE == 4 || YUE == 6 || YUE == 9 || YUE == 11)
		cout << "30��" << endl;
	if (YUE == 2)
		cout << 28 + R << endl;




	return 0;

}