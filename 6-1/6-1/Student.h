#pragma once
#include"Person.h"
using namespace std;
class Student:virtual public Person
{
protected:
	string major, grade;
public:
	Student(string name = "", string id = "", string sex = "",
		    string major = "", string grade = "");
	string get_major();
	string get_grade();
	void print_info();
};