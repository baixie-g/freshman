//（2）设计一个学生类Student
//数据成员有：学号(char id[11])，姓名(char name[20])，数学成绩(double math)，物理成绩(double physics)，英语成绩(double english)。
//成员函数有：
//构造函数Student(const char* p1 = NULL, const char* p2 = NULL, double _math = 0, double _phy = 0, double _eng = 0)、
//设置学生信息函数void set_info(char* p1, char* p2, double _math, double _phy, double _eng)、
//计算总成绩函数double total()、
//获取学生学号函数char* get_id()、
//输出学生全部信息函数void show_info()。
//编写主函数：创建有5个学生的对象数组并进行学生信息的设置；计算每个学生的总成绩；任意输入一个学号，输出该同学的全部信息。
#include<iostream>
using namespace std;
#pragma warning(disable:4996);
//#include<cstdlib>
class Student
{
private:
	char id[11];
	char name[20];
	double math;
	double physics;
	double english;
public:
	Student(const char* p1 = NULL, const char* p2 = NULL, double _math = 0, double _phy = 0, double _eng = 0);
	void set_info(char* p1, char* p2, double _math, double _phy, double _eng);
	double total();
	char* get_id();
	void show_info();
};
Student::Student(const char* p1, const char* p2 , double _math , double _phy , double _eng )
{	
	/*for (int i = 0; p1[i]; i++)
	{
		id[i] = p1[i];
	}
	for (int i = 0; p2[i]; i++)
	{
		name[i] = p2[i];
	}*/
	strcpy(id,p1);
	strcpy(name, p2);
	math = _math;
	physics = _phy;
	english = _eng;
};
void Student::set_info(char* p1, char* p2, double _math, double _phy, double _eng)
{
	math = _math;
	physics = _phy;
	english = _eng;
};
double Student::total()
{
	return math + physics + english;
		
};
char* Student::get_id()
{
	return id;
};
void Student::show_info()
{
	cout << id << " " << name << math << physics << english;
};
int main()
{
	Student a[5]={Student("202201","a",100,100,100),Student("202202","b",90,90,90),Student("202203","b",80,80,80),Student("202204","c",70,70,70),Student("202205","d",60,60,60) };
	for (int i = 0; i < 5; i++)
		cout << a[i].total() << endl;
	char idd[11];
	cin >> idd;
	for (int i = 0; i < 5; i++)
	{
		if (!strcmp(idd, a[i].get_id()))//发现字符数组不能==直接比较
		{
			a[i].show_info();
			return 0;
		}	
	};cout << "查无此人" << endl;
}