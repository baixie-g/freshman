#include"Student.h"
#include<iostream>
Student::Student(string name, string id, string sex, 
	             string major, string grade)
:Person(name,id,sex)
{
	this->major = major;
	this->grade = grade;
};
string Student::get_major() { return major; };
string Student::get_grade() { return grade; };
void Student::print_info() {
	cout << "name:" << name << endl;
	cout << "id:" << id << endl;
	cout << "sex:" << sex << endl;
	cout << "major:" << major << endl;
	cout << "grade:" << grade << endl;
	cout << "\033[31;1mstudent×ÓÀàinfo\033[0m"<< endl;
};