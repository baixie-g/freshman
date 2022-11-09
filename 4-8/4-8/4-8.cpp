//使用函数void swap(int &, int &）将调用函数中的两个变量的交换位置。
#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void main()
{
    int a = 0, b = 1;
    swap(a, b);
    cout << a << "\t" << b << endl;
}


