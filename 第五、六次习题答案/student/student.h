#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
//设计一个学生类Student，数据成员有：学号(char id[11])，姓名(char * name)，数学(float math)，物理(float physics)，英语(float english)成绩；
//成员函数有：构造函数、析构函数、设置学生信息函数、计算总成绩函数、输出学生全部信息函数和获取学生学号函数。
//编写主函数：创建有5个学生的对象数组并进行学生信息的设置；计算每个学生的总成绩；求出5人中的最高总分；输入一个学号，输出该同学的全部信息。
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
