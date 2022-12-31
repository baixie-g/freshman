#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // 创建一个映射来存储联系人的名字和电话号码
    map<string, string> phonebook;

    // 添加一些联系人
    phonebook["John"] = "555-555-5555";
    phonebook["Jane"] = "555-555-1234";
    phonebook["Bob"] = "555-555-9876";

    // 获取用户输入的名字
    cout << "Enter a name to look up: ";
    string name;
    cin >> name;

    // 查找联系人并输出电话号码
    if (phonebook.count(name) > 0)
    {
        cout << name << "'s phone number is " << phonebook[name] << endl;
    }
    else
    {
        cout << "Sorry, there is no phone number for " << name << endl;
    }

    return 0;
}