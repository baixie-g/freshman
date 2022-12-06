//三、编写函数，按原顺序提取字符串中的数字字符构成一个整数。                 
//（如对字符串“as12dwe56*&3pPq”,构成整数12563）
#include<iostream>
using namespace std;
char* NUM(char* p)
{
	int i = 0,j=0;
	for (; *p;i++)
	{
		if (!*(p + i))break;
		if (isdigit(*(p + i))) {
			*(p + j) = *(p + i);
			j++;
		}
	}
	*(p + j) = '\0';
	return p;
}

int main()
{
	char a[20];
	cin >> a;
	cout << atoi(NUM(a)) << endl;
}