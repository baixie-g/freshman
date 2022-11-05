//（6）将一字符串插入到另一字符串的指定位置。（如将字符串一“abc”插入到字符串二“123456xyz”的第3位处，则字符串二变为“12abc3456xyz”）
#include<iostream>
#include<string>
using namespace std;


void main()
{
	int n,i=0;
	string a,b,c;
	cout << "输入第一个字符串" << endl;
	cin >> a;
	cout << "输入第二个字符串" << endl;
	cin >> b;
	cout << "输入第一个字符插入第二个字符第几位后" << endl;
	cin >> n;
	while(b[i])
	{
		if (i == n)c += a;
		c += b[i];

		i++;
	}
	cout << c << endl;
}