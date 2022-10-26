//输入一身份证号码，判断其是否是有效的身份证号码。
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int j = 0, i = 0,s=0;
	string sfz;
	cin >> sfz;
	cout << sfz << endl;
	int qz[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	while (i<17)
	{
		s += qz[i]*static_cast<int>(sfz[i]-'0');
		i++;
	}
	char zh[11] = { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
	if (zh[s % 11] == sfz[17])
		cout << "对咯" << endl;
	else
		cout << "错咯" << endl;
}