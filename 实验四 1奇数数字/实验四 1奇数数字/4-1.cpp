//��1����дһ����������֮���ж�ĳ�����Ƿ�ֻ���������ֹ��ɡ���bool isOddDigit(int)��
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