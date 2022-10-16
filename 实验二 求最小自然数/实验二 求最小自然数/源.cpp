//求满足下列条件的最小自然数n：（1）个位数是8；（2）将个位移数的最前面，所得的新数是原数的4倍。

#include<iostream>
using namespace std;
#include<cmath>

int main()
{
	int i=8;
	int ii=0;
	bool a = ii - 4 * i;
	for (i;; i+=10)
	{
		int wei = 0;
		int c= i;
		while (0 != c)
		{	
			c /= 10;
			wei++;
		}
		int qian = i / 10;
		int ii = 8 * pow(10,wei-1) + qian;
		bool a = ii - 4 * i;
		if (!a)break;
	}
	cout << i << endl;
	return 0;
}
