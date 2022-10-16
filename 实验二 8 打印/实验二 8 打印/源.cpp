//（8）打印输出如下的图形。
//1   2   3   4   5   6
//    1   2   3   4   5
//        1   2   3   4
//            1   2   3
//                1   2
//                    1
#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 6; i++)
	{
		for (int x = 0; x < i - 1; x++)
		{
		cout << "\t";
		}
		for (int k = 1; k <= 7-i; k++)
		{
		cout << k << "\t";
		}
		cout << "\n";
	}
	return 0;
}