//�����Ա��Person��
//���ݳ�Ա������string name��ѧ��string id���Ա�string sex��
//��Ա���������캯����void print_info()��������ݳ�Ա����
//��Person��������ѧ����Student��
//�������ݳ�Ա��רҵ(string major)���꼶��string grade����
//������Ա������
//���캯����
//string get_major()��
//string get_grade()��
//void print_info����������������ݳ�Ա����
//ʵ�������࣬
//����д�����������ಢ
//���Ը����������֮��ĺ���ͬ���������ԡ�
//��ʾ��string ����C++�ı�׼�࣬
//�������������ַ�����Ϣ��
//���ַ�����������޴�ķ��㡣
//ʹ�÷�����ο��̲ġ�



//6-2�ӵڣ�1�����Person��������������Assistant��
//��������ѧԺ��string school���͹���(double salary)���ݳ�Ա��
//������෽����Ƴ�ѧ��������Student_assistant
//���̳�Assitant���Student�ࣩ��
//ÿ�����о�������ƺ���void print_info������������������ȫ�����ݳ�Ա��
//ʵ�ָ����ಢ��д����������֮��
// ����Student_assistant�������࣬ͬүү
#include"Student.h"
#include"Person.h"
#include"Student_assistant.h"
#include"Assistant.h"
#include<iostream>

int main()
{
	Person B("per", "2", "women");
	Student A("A", "1", "man", "רҵ1", "NO.2022");
	Assistant ASSISTANT("ASSISTANT", "00", "women", "HFUT", 30000);
	Student_assistant Sa("Sa", "3","man","רҵ2","NO.2021","HFUT",10000);
	B.print_info();
	cout << endl;
	A.print_info();
	cout << endl;
	ASSISTANT.print_info();
	cout << endl;
	Sa.print_info();
	cout << endl;

}

