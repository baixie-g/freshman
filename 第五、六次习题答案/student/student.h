#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
//���һ��ѧ����Student�����ݳ�Ա�У�ѧ��(char id[11])������(char * name)����ѧ(float math)������(float physics)��Ӣ��(float english)�ɼ���
//��Ա�����У����캯������������������ѧ����Ϣ�����������ܳɼ����������ѧ��ȫ����Ϣ�����ͻ�ȡѧ��ѧ�ź�����
//��д��������������5��ѧ���Ķ������鲢����ѧ����Ϣ�����ã�����ÿ��ѧ�����ܳɼ������5���е�����ܷ֣�����һ��ѧ�ţ������ͬѧ��ȫ����Ϣ��
class Student
{
private:
	char id[11];
	char *name;
	double math,physics,english;
	static double account_balance;
public:
	Student(char *id = NULL,char *name = NULL,double math = 0,double physics = 0,double english = 0);
	void setinfo(char * _id ,char * _name ,double _math,double _physics ,double _english);
	double total();
	void showinfo();
	char * getid();
	~Student();
};


#endif // STUDENT_H_INCLUDED
