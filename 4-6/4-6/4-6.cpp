//��6����дһ����������֮�����ַ����е�Сд�ַ���Ϊ��д�ַ�����д�ַ���ΪСд�ַ�����char* strrev(char*)��
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
////��дһ����������֮�����ַ����е�Сд�ַ���Ϊ��д�ַ�����д�ַ���ΪСд�ַ���
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
