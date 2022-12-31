#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // ����һ��ӳ�����洢��ϵ�˵����ֺ͵绰����
    map<string, string> phonebook;

    // ���һЩ��ϵ��
    phonebook["John"] = "555-555-5555";
    phonebook["Jane"] = "555-555-1234";
    phonebook["Bob"] = "555-555-9876";

    // ��ȡ�û����������
    cout << "Enter a name to look up: ";
    string name;
    cin >> name;

    // ������ϵ�˲�����绰����
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