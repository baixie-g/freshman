#ifndef ASSISTANT_H_INCLUDED
#define ASSISTANT_H_INCLUDED
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    string id;
    string sex;
public:
    Person(string name="",string id="",string sex="" );
    void print_info();
};

class Student: virtual public Person
{
protected:
    string major,grade;
public:

    Student(string name="",string id="",string sex="",string major="",string grade="");
    void print_info();
};

class Assistant:  virtual public Person
{
protected:
    string school;
    double salary;
public:
    Assistant(string name="",string id="",string sex="",string school="",double salary=0);
    void print_info();
};

class Student_assistant: public Student, public Assistant
{
public:
    Student_assistant(string name="",string id="",string sex="",string major="",string grade="",string school="",double salary=0);
    void print_info();
};




#endif // ASSISTANT_H_INCLUDED
