#pragma once
#include"Student.h"
#include"Person.h"
#include"Assistant.h"
using namespace std;
class Student_assistant :
	public Student, public Assistant {
public:
	Student_assistant(string name = "", string id = "",
		string sex = "",string major = "", 
		string grade = "", string school = "",
		double salary = 0);
	void print_info();
};