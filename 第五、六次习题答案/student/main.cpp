#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

int main()
{
	//���Թ��캯������������
	Student s1;
	s1.setinfo("2017010001","����",90,89,88);
	s1.showinfo();
	Student s2("2017010002","����",100,90,80);
	s2.showinfo();
	s2.setinfo("2017010002","��С��",99,89,79);
	s2.showinfo();

	Student s[5]={
					Student("2017010001","����",90,89,88),
					Student("2017010002","����",92,90,80),
					Student("2017010003","��С",99,89,79),
					Student("2017010004","������",95,88,89),
					Student("2017010005","����",92,84,76)
				};


	int max = s[0].total();
	for(int i = 1;i<5;i++)
		if(s[i].total()>max)
			max = s[i].total();
	cout<<max<<endl;

	char id[11];
	cout<<"������ѧ�ţ�";
	cin>>id;

	for(int i = 0; i<5; i++)
		if(strcmp(id,s[i].getid()) == 0)
			s[i].showinfo();

	return 0;
}
