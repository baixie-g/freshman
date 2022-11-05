#include <iostream>
//（7）先使用动态数组申请m个整型空间(new int[m])，
// 赋值m个整数。现在还想再输入n个整数，
// 使这m+n数据仍为一个数组。
// 这就是动态数组的扩展。
// 采取的技术是：重新new int[m+n]，将原来m个空间的数据copy到新的动态数组中，将原来的空间delete，
// 再将n个数据赋值到新的动态数组中。表面上是原动态数组可以按需要不断扩展，实际上完全重建了，只不过用户感觉不到。
// 请编写程序实现这个过程。
//#include <iomanip>
//#include <cstring>
//using namespace std;
////动态数组扩展
//
//int main()
//{
//    int n;
//    cout << "输入动态数组元素个数:";
//    cin >> n;
//    int* p1 = new int[n];
//    cout << "输入动态数组元素的值:";
//    for (int i = 0; i < n; i++)
//        cin >> p1[i];
//
//    cout << "输入要扩展元素个数:";
//    int m;
//    cin >> m;
//    int* p2 = new int[n + m];
//    cout << "输入扩展动态数组元素的值:";
//    for (int i = 0; i < n; i++)
//        p2[i] = p1[i];
//    delete[]p1;
//    for (int i = n; i < n + m; i++)
//        cin >> p2[i];
//    for (int i = 0; i < n + m; i++)
//        cout << p2[i] << " ";
//    delete[]p2;
//    return 0;
//}

