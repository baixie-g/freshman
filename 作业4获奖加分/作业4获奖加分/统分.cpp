#include<iostream>
using namespace std;

/*
ĳѧԺ������һ�Ρ�������ƴ��������涨ѧ���ġ�������ơ��γ̳ɼ�������Ϊ�ڴ����ϻ񽱶��ӷ֣�
һ�Ƚ���10�֣����Ƚ���8�֡����Ƚ���5�֣���ʤ����2�֡�
�ӷֺ�ĳɼ��������100����100�ּ��㡣
��д����
����ͬѧ�ġ�������ơ��ɼ��ͻ񽱵ȼ���
���¼����ͬѧ�ġ�������ơ��ɼ���

*/

int main()
{
	int CHENGJI = -1;
	for (; CHENGJI < 0 || CHENGJI>100;)
	{
		cout << "��������Ŀγ̳ɼ���0~100��" << endl;
		cin >> CHENGJI;
	}
	cout << "��ѡ�������˼��Ƚ�\nAһ�Ƚ�\tB���Ƚ�\nC���Ƚ�\tD�ĵȽ�" << endl;
	char a;
	cin >> a;
	int SUM=0;

	if (a == 'A')
		SUM = CHENGJI + 10;
	if (a == 'B')
		SUM = CHENGJI + 8;
	if (a == 'C')
		SUM = CHENGJI + 5;
	if (a == 'D')
		SUM = CHENGJI + 2;

	if (SUM <= 100)
		cout << "�ܳɼ�Ϊ" << SUM << endl;
	else
		cout << "�ܳɼ�Ϊ" << 100 << endl;


	


	return 0;
}