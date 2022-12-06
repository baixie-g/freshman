//一、某系统的登录密码要求：
//（1）必须含有大写字符、小写字符和数字字符。
//（2）长度必须大于8个字符。编写程序，验证用户输入的密码是否合规。
#include<iostream>
using namespace std;
int main()
{
	char a[20];
	cin >> a;
	int i=0,b=0,c=0,d=0;
	for (i = 0; a[i]; i++)
	{
		cout << a[i] << endl;
		if (islower(a[i]))b++;
		if (isupper(a[i]))c++;
		if (isdigit(a[i]))d++;
	}
	if (!(b+c+d - i) && b&&c&&d&&i>8)
		cout << "密码合规" << endl;
	else
		cout << "密码违规" << endl;
}