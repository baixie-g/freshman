//输出1000内的完数。
//（完数是指其因子(不含本身)之和与本身相等的数。
//如6是完数， 6 = 1 + 2 + 3）
#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        int x = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                x += j;
        }
        if (i == x)
            cout << i << endl;
    }
    return 0;
}