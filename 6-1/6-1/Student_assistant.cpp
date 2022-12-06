#include"Student_assistant.h"
#include<iostream>
using namespace std;
Student_assistant::Student_assistant
(   string name, string id, string sex,
	string major , string grade, string school,
	double salary):
	Person(name,id,sex),Student(name,id,sex,major,grade),
	Assistant(name,id,sex,school,salary)
{
};
void Student_assistant::print_info() {
	cout << "name:" << name <<endl;
	cout << "id:" << id << endl;
	cout << "sex:" << sex << endl;
	cout << "major:" << major << endl;
	cout << "grade:" << grade << endl;
	cout << "school:" << school << endl;
	cout << "salary:" << salary << endl;
	cout << "\033[31;1mStudent_assistantµÄinfo\033[0m" << endl;

};