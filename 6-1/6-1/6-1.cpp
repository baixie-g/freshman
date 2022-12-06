//设计人员类Person，
//数据成员：姓名string name、学号string id、性别string sex。
//成员函数：构造函数、void print_info()（输出数据成员）；
//从Person类派生出学生类Student，
//新增数据成员：专业(string major)，年级（string grade）。
//新增成员函数：
//构造函数、
//string get_major()、
//string get_grade()、
//void print_info（）（输出所有数据成员）。
//实现两个类，
//并编写主函数测试类并
//测试父类和子类类之间的函数同名隐藏特性。
//提示：string 类是C++的标准类，
//可以用来处理字符串信息，
//给字符串处理带来巨大的方便。
//使用方法请参看教材。



//6-2从第（1）题的Person类派生出助教类Assistant，
//增加所属学院（string school）和工资(double salary)数据成员，
//用虚基类方法设计出学生助教类Student_assistant
//（继承Assitant类和Student类）。
//每个类中均重新设计函数void print_info（）用以输出该类对象全部数据成员。
//实现各个类并编写主函数测试之。
// 所以Student_assistant有两父类，同爷爷
#include"Student.h"
#include"Person.h"
#include"Student_assistant.h"
#include"Assistant.h"
#include<iostream>

int main()
{
	Person B("per", "2", "women");
	Student A("A", "1", "man", "专业1", "NO.2022");
	Assistant ASSISTANT("ASSISTANT", "00", "women", "HFUT", 30000);
	Student_assistant Sa("Sa", "3","man","专业2","NO.2021","HFUT",10000);
	B.print_info();
	cout << endl;
	A.print_info();
	cout << endl;
	ASSISTANT.print_info();
	cout << endl;
	Sa.print_info();
	cout << endl;

}

