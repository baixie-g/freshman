#include<iostream>
#include<stdio.h>


using namespace std;

int main()
{
	//int a = 11;
	//int b = 2;
	//int c = ( b>a ? a: b);
	//cout << c << endl;
	//(a > b ? a : b) = 111110000;
	//cout << a << "�ָ�" << b << endl;


	//switch(����)
	//	case ���λ����ַ���
	//		���;
	//		break;
	//	case.....

	//		ִ��Ч�ʸ�  ����

	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << j << "*" << i <<"="<<j*i << "\t";

	//	}
	//cout << endl;

	//}



/*
int a;
	cout << 4 * (a = 1, a + 1, a = a + 1) << endl;
*/
	/*int a=1, b = 2, c = 3;
	c=a++>=!(b+c);
	cout << a << b << c << endl;*/


	//int x = 4;
	//	if (2 < x < 6)
	//		cout << x << endl;

	/*
	int a = 1, b = 1, c;
	c = --a && ++b;//�жϵ������䲻ִ��
	cout << a << b << c << endl;

	*/

	


	////��ַ
	//int a = 10;
	//int *p = &a;
	//cout << a << "\n" << sizeof a << "\n" << *p << "\n" << &a << "\n" << p << endl;
	/*
	10
	4
	10                 *���� �������ñ������ĵ�ַ �����ַ����
	00000020F1B1FA04   ����*˵����Ҫ���ַ  �������ǵ�ַ
	00000020F1B1FA04
	*/

	//swap1(a, b)���void swap1(int a, int b);
	//swap2(&a, &b) ���void swap2(int *p1 ,int *p2)


	//int x = 1;
	//cout << (x > 0) || (0);



		////////////////int  hour1, minute1;
		////////////////int  hour2, minute2;
		////////////////scanf_s("%d &d", &hour1, &minute1);
		////////////////scanf_s("%d %d", &hour2, &minute2);
		////////////////int t1 = hour1 * 60 + minute1;
		////////////////int t2 = hour2 * 60 + minute2;

		////////////////int t = t2 - t1;

		////////////////printf("ʱ�����%dСʱ%d�֡�", t / 60, t % 60);

	//int a = 9;
	//bool ge = a % 10 - 8;
	//cout << ge << endl;

	//char* p;
	//p = "0x12312312";

	//char a[10];
	//char b[5];
	//cin >> a;
	//cout << a << endl;
	//(*a)++;
	//cout << a<<endl;
	//a[0]++;
	//b[0] = 'a';
	//cout << int('1') << endl;
	////cout << a << endl;
	//cout << b[0] << endl;
	////cout << b[2] << endl;


//cout << "wda" << "\0easdk" << endl;

//
//char ch = 'A' + '6' - '3';
//printf("%c", ch);
//
//string a = "12345678901234567890123456789012345678901123456789012345678901234567890";
//char b[] = "a1234567890bcd";
//cout << sizeof(a) << endl;
//cout << sizeof(b) << endl;

//
//for (int x = 4, y = 0; (y = 1) && (x > 3); x--)
//cout << x;

//
char ch[12] = "hello,world";
//
//while (true)
//{
//	cout << endl;
//}
//ch����&h
char* p = ch;

cout << p << endl;
cout << ch << endl;
cout << *ch<< endl;
cout << *p << endl;
cout << &ch << endl;
cout << & ch << endl;
cout << &p << endl;
cout << *(p+1) << endl;
cout << p+1 << endl;






	return 0;


}