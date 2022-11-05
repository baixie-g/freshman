//（4）输入一英文字符串，统计其中每个字母（大小写按同一种计数）出现的频率。
#include<iostream>
using namespace std;

int main()
{
	//int a[24]={}, i = 0, j = 0;
	//char b[50];
	//cin >> b;
	//while (b[i] != '\0')
	//{
	//	if (isupper(b[i]))
	//	{
	//		int n = static_cast<int>(b[i] - 'A');
	//		a[n]++;
	//	}
	//	else
	//	{
	//		int n = static_cast<int>(b[i] - 'a');
	//		a[n]++; 
	//	}
	//	i++;//izongzimu
	//}
	//while (j < 24)
	//{
	//	double e = a[j] / i;
	//	cout << static_cast<char>(j + 97) << "占" <<e << endl;
	//	j++;
	//}

	int a[26]={};
	char s[100];
	cin >> s;
	for (int i = 0; s[i]; i++)
	{
		a[(s[i] - 'A') % 32]++;
	}
	for (int i = 0; i < 26; i++)
		cout << char(i + 'A') << char(i + 'a') << a[i] << endl;
		
}