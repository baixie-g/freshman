#include "assistant.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person(string name,string id,string sex )
{
    this->name = name;
    this->id = id;
    this->sex = sex;
}
void Person::print_info()
{
    cout<<name<<" "<<id<<" "<<sex<<" ";
}


Student::Student(string name,string id,string sex,string major,string grade):Person(name,id,sex)
{
    this->major = major;
    this->grade = grade;
}
void Student::print_info()
{
    Person::print_info();
    cout<<major<<" "<<grade<<endl;
}

Assistant::Assistant(string name,string id,string sex,string school,double salary):Person(name,id,sex)
{
    this->school = school;
    this->salary = salary;
}
void Assistant::print_info()
{
    Person::print_info();
    cout<<school<<" "<<salary<<endl;
}
Student_assistant::Student_assistant(string name,string id,string sex,string major,string grade,string school,double salary):Person(name,id,sex),Student("xxx","yyy","zzz",major,grade),Assistant("aaa","bbb","ccc",school,salary)
//注意，本类中的name,id,sex已由Person类构造函数初始化，所以Student 、Assistant构造函数中的name、id和sex的实参已经无关紧要了，胡乱给也不影响，但必须给
{

}
void Student_assistant::print_info()
{
    Person::print_info();
    cout<<major<<" "<<grade<<" "<<school<<" "<<salary<<endl;
}

