//������������������С��Ȼ��n����1����λ����8����2������λ��������ǰ�棬���õ�������ԭ����4����

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
