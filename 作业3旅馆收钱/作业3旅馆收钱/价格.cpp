#include<iostream>
using namespace std;
/*
* ĳ���ݷ���ı�׼�۸�Ϊ398Ԫ/�죬
�۸������μ��ں��Ŷӹ�ģ��������

��������7��9�·ݣ���20����������(��20��)���Ŷ��Ż�30%��
����20������Ŷ��Ż�15%��

�ڵ�����         20��������(��20��)���Ŷ��Ż�50%��
����20������Ŷ��Ż�30%��

��д���������·ݺ�Ԥ�������������ÿ��Ӧ���ܽ�

*/
int main()
{
	const int DANJIA = 398;
	int YUE, FANGJIANSHU;
	double FEIYONG;
	cout << "��������ס�·�໣�" << endl;
	cin >> YUE;
	//int INPUT = YUE;
	/*for (; INPUT <= 0 || INPUT > 12 || INPUT < YUE; )
	{
		cout << "��ʵ���·�" << endl;
		cin >> YUE;
		INPUT = YUE;
	}*/
	cout << "������Ԥ���ķ�������" << endl;
	cin >> FANGJIANSHU;

	if (7 <= YUE && 9 >= YUE)
	{
		if (FANGJIANSHU >= 20)
			FEIYONG = DANJIA * FANGJIANSHU * 0.7;
		else FEIYONG = DANJIA * FANGJIANSHU * 0.85;
	}
	else
	{
		if (FANGJIANSHU >= 20)
			FEIYONG = DANJIA * FANGJIANSHU * 0.5;
		else FEIYONG = DANJIA * FANGJIANSHU * 0.7;
	}
		
	cout << "������" << FEIYONG << endl;


	return 0;
}