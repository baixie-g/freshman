//#include<stdio.h>
//#include<time.h>
//void srand(unsigned int seed)
////#include <iostream>
////
////int main()
////{
////	random_device rd;
////	for (int i = 1000; i < 10000; ++i)
////	{
////		cout << rd() << endl;
////	}
////printf("%d",rd)
////}
//
//int rand()
//{
//	int randoxNumber = 1000 + rand() % (10000 - 1000);
//	return randoxNumber;
//}
//int main()
//{
//	int ROM = rand();
//	printf("%d", ROM);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;
    time_t t;

    n = 2;

    /* ��ʼ������������� */
    srand((unsigned)time(&t));

    /* ��� 0 �� 50 ֮��� 5 ������� */
    for (i = 1; i < n; i++) 
    {
        int randoxNumber = 1000 + rand() % (10000 - 1000);
        printf("%d\n", randoxNumber);
    }

    int INPUT,SAN, ER, GE, BAI,SHI,QIAN;
    printf("��������µ���λ��\n");
    scanf_s("%d", &INPUT);
    printf("%d\n", INPUT);
    SAN = INPUT % 1000;
    ER = INPUT % 100;
    GE = INPUT % 10;
    QIAN = (INPUT - SAN)/1000;
    BAI = (SAN - ER) / 100;
    SHI = (ER - GE) / 10;
    printf("%d, %d, %d, %d",QIAN,BAI,SHI,GE );
    if QIAN =0



    return(0);
}