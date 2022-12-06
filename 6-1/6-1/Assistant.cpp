#include"Assistant.h"
#include<iostream>
Assistant::Assistant(string name, string id, string sex,
	string school, double salary)
	:Person(name, id, sex)
{
	this->school = school;
	this->salary = salary;
};
void Assistant::print_info() {
	cout << "name:" << name << endl;
	cout << "id:" << id << endl;
	cout << "sex:" << sex << endl;
	cout << "school:" << school << endl;
	cout << "salary:" << salary << endl;
	cout << "\033[31;1mAssistantµÄinfo\033[0m" << endl;
};