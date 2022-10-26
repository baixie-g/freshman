//（8）输入一英文字符串，判断其是否为回文
//（所谓回文，是指其正读和反读都一样的字符串，
//如Was it a cat I saw ? Madam, I’m Adam.等等）
//(提示：判断前，先对字符串进行预处理。
//	先删除不必要的空格、标点符号等，
//	再将大写字符转化为小写字符。
//	然后再首尾相向逐字符进行判断)
#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0,k=0,l=0;
	char a[30];
	cin.getline(a,30);
	cout << a << endl;
	while (a[i] != '\0')
	{
		if (isalpha(a[i]))
		{
			if (isupper(a[i]))
				a[j] = tolower(a[i]);
			else
				a[j] = a[i];
			j++;
		}
		i++;
	}
	k = j;
	while (a[j]!='\0')
	{
		a[j] = '\0';
		j++;
	}
	cout << a << endl;
	while (l <= k / 2)
	{
		if (a[l] != a[k - l - 1])
		{
			cout << "不是回文" << endl;
			goto end;
		}
		l++;
	}
	cout << "是回文" << endl;
end:
	return 0;
}