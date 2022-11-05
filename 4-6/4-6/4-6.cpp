//（6）编写一函数并测试之：将字符串中的小写字符改为大写字符、大写字符改为小写字符。（char* strrev(char*)）
#include<iostream>
//#pragma warning(disable:4996)
using namespace std;
char* trrev(char* p)
{
	int i = 0;
	for (; *p;p++,i++)
	{
		if (isupper(*p))*p += 32;
		else*p -= 32;
	}
	return p-i;
}

int main()
{
	char a[20];
	cin >> a;
	cout << trrev(a) << endl;
}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <iomanip>
//#include <cstring>
//
//using namespace std;
////编写一函数并测试之：将字符串中的小写字符改为大写字符、大写字符改为小写字符。
//char* strtran(char* p)
//{
//    char* pt = p;
//    for (; *pt; pt++)
//        if (*pt >= 'a' && *pt <= 'z')
//            *pt -= 32;
//        else if (*pt >= 'A' && *pt <= 'Z')
//            *pt += 32;
//    return p;
//}
//
//int main()
//{
//    char str1[80] = "qwerTYUI";
//    char str2[80] = "ZXCVbnm";
//    cout << strcat(strtran(str1), strtran(str2)) << endl;
//    return 0;
//}
