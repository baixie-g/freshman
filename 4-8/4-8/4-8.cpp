//ʹ�ú���void swap(int &, int &�������ú����е����������Ľ���λ�á�
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


