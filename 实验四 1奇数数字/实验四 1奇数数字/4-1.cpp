//（1）编写一函数并测试之：判断某整数是否只由奇数数字构成。（bool isOddDigit(int)）
#include <iostream>
using namespace std;
bool isOddDigit(int n) 
{
    if (!n)
        return false;
    while (n) 
    {
        if (n % 2)
            n /= 10;
        else
            return false;
    }
    return true;
}
int main()
{
    int a;
    cin>>a;
    cout << isOddDigit(a) << endl;

}