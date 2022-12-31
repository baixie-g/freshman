#include"clock.h"
#include<fstream>
#define FILENAME "LIST.txt"
#include <windows.h>
using namespace std;

#pragma warning(disable:4996)
#define MAX 5



void showMENU()
{
	cout << "____________________" << endl;
	cout << "1���������" << endl;
	cout << "2����ʾ��������" << endl;
	cout << "3��ɾ������" << endl;
	cout << "4����������" << endl;
	cout << "5���޸�����" << endl;
	cout << "6���������" << endl;
	cout << "0���˳�" << endl;
	cout << "--------------------" << endl;
}
struct mission
{
	string mission;
	int start;
	int ddl;
	int difficulty;
	bool remind;
	string code;
};
struct list
{
	struct mission missionArray[MAX];

	int Size;

};


void addM(list* list)
{
	//�ж��Ƿ�������
	if (list->Size == MAX)
	{
		cout << "�����������������" << endl;
		return;
	}
	else
	{
		//�������
		string mission;
		cout << "����������Ϣ" << endl;
		cin >> mission;
		list->missionArray[list->Size].mission = mission;



		//int start;
		//cout << "���뿪ʼʱ��" << endl;
		//cin >> mission;
		//list->missionArray[list->Size].mission = mission;


		//int ddl;
		//cout << "�������ʱ��" << endl;
		//cin >> mission;
		//list->missionArray[list->Size].mission = mission;



		int difficulty;
		cout << "���������Ѷ�" << endl;

		while (true)
		{
			cin >> difficulty;
			if (difficulty <= 5 && difficulty >= 0)
			{
				list->missionArray[list->Size].difficulty = difficulty;
				break;
			}
			else
			{
				cout << "����������������Ѷ�" << endl;
			}

		}


		cout << "���������" << endl;
		string code;
		cin >> code;
		list->missionArray[list->Size].code = code;


		//bool remind;
		//cout << "����ʣ������" << endl;
		//cin >> remind;
		//list->missionArray[list->Size].remind = remind;


		list->Size++;

		cout << "��ӳɹ�" << endl;//��
		Sleep(1000);
		system("cls");
	}

}



void showMSSION(list* list)
{
	if (list->Size == 0)
	{
		cout << "��ȥ������" << endl;
	}
	else
	{
		for (int i = 0; i < list->Size; i++)
		{
			cout << "�������" << list->missionArray[i].code << "\t";
			cout << "������" << list->missionArray[i].mission << "\t";
			cout << "ʣ��������" << list->missionArray[i].remind << "\t";
			cout << "�Ѷ�" << (list->missionArray[i].difficulty <= 3 ? "����" : "����") << "\t";
			cout << "��ʼ����" << list->missionArray[i].start << "\t";
			cout << "��ֹ����" << list->missionArray[i].ddl << endl;
		}
	}
	system("pause");
	system("cls");
}


int isExist(list* list, string code)
{
	for (int i = 0; i < list->Size; i++)
	{
		if (list->missionArray[i].code == code)
		{
			return i;
		}
	}
	return -1;
}


void deleteA(list* A)
{
	cout << "����ɾ������" << endl;

	string code;
	cin >> code;

	int existin = isExist(A, code);
	if (existin != -1)
	{
		for (int i = existin; i < A->Size; i++)
		{
			A->missionArray[i] = A->missionArray[i + 1];
		}
		A->Size--;
		cout << "ɾ���ɹ�";
	}
	else
	{
		cout << "���޴������㲻��©�˰�";
	}
	system("pause");
	system("cls");
}
void deleteALL(list* list)
{
	cout << "ȷ�������������" << endl;
	cout << "  yes     ---ȷ��" << endl;
	cout << "anything  ---ȡ��" << endl;

}


void findA(list* list)
{
	cout << "��������" << endl;
	string code;
	cin >> code;

	int existin = isExist(list, code);

	if (existin != -1)
	{
		cout << "�������" << list->missionArray[existin].code << "\t";
		cout << "������" << list->missionArray[existin].mission << "\t";
		cout << "ʣ��������" << list->missionArray[existin].remind << "\t";
		cout << "�Ѷ�" << (list->missionArray[existin].difficulty <= 3 ? "����" : "����") << "\t";
		cout << "��ʼ����" << list->missionArray[existin].start << "\t";
		cout << "��ֹ����" << list->missionArray[existin].ddl << endl;
	}
	else
	{
		cout << "�㲻��©�˰ɣ�" << endl;
	}
	system("pause");
	system("cls");
}


void modifyA(list* list)
{
	cout << "�����޸��������" << endl;
	string code;
	cin >> code;

	int existin = isExist(list, code);

	if (existin != -1)
	{
		string mission;
		cout << list->missionArray[existin].mission << endl;
		cout << "����������Ϣ" << endl;
		cin >> mission;
		list->missionArray[existin].mission = mission;



		//int start;
		//cout << "���뿪ʼʱ��" << endl;
		//cin >> mission;
		//list->missionArray[list->Size].mission = mission;


		//int ddl;
		//cout << "�������ʱ��" << endl;
		//cin >> mission;
		//list->missionArray[list->Size].mission = mission;



		int difficulty;
		cout << list->missionArray[existin].difficulty << endl;
		cout << "���������Ѷ�" << endl;

		while (true)
		{
			cin >> difficulty;
			if (difficulty <= 5 && difficulty >= 0)
			{
				list->missionArray[existin].difficulty = difficulty;
				break;
			}
			else
			{
				cout << "����������������Ѷ�" << endl;
			}

		}


		cout << list->missionArray[existin].code << endl;
		cout << "���������" << endl;
		string code;
		cin >> code;
		list->missionArray[existin].code = code;


		//bool remind;
		//cout << "����" << endl;
		//cin >> mission;
		//list->missionArray[list->Size].mission = mission;



		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "�㲻��©�˰�" << endl;
	}

}

void cleanall(list* list)
{
	list->Size = 0;
	cout << "�Ѿ�����ˣ�����ƭ�Լ�Ŷ" << endl;
	system("pause");
	system("cls");
}


void save(list* list)
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < list->Size; i++)
	{
		ofs << list->missionArray[i].code << " "
			<< list->missionArray[i].mission << " "
			<< list->missionArray[i].difficulty << endl;
		/*ofs << list->missionArray[i].code << " "
			<< list->missionArray[i].mission << " "
			<< list->missionArray[i].remind << " "
			<< list->missionArray[i].difficulty << " " << endl;*/
			/*ofs << "�������" << list->missionArray[i].code << "\t"
				<< "������" << list->missionArray[i].mission << "\t"
				<< "ʣ��������" << list->missionArray[i].remind << "\t"
				<< "�Ѷ�" << (list->missionArray[i].difficulty <= 3 ? "����" : "����") << "\t"
				<< "��ʼ����" << list->missionArray[i].start << "\t"
				<< "��ֹ����" << list->missionArray[i].ddl << endl;*/
	}

	ofs.close();

}
void open(list* list)
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "��ӭ��ʼʹ�ã�����Ϊ��" << endl;
		list->Size = 0;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "��ӭ����������Ϊ�ա�" << endl;
		list->Size = 0;
		ifs.close();
		return;
	}
	cout << "��ʼ���ָ�����ϵͳ����������" << endl;
	string code;
	string mission;
	int diffi;
	int remind;
	int size = 0;
	while (ifs >> code && ifs >> mission && ifs >> diffi)
		//while (ifs >> code && ifs >> mission && ifs >> remind && ifs >> diffi)
	{
		if (size)
		{
			list->missionArray[size].code = code;
			list->missionArray[size].mission = mission;
			//list->missionArray[size].remind = remind;
			list->missionArray[size].difficulty = diffi;
			size++;
		}
		else
		{
			list->missionArray[size].code = ch + code;
			list->missionArray[size].mission = mission;
			//list->missionArray[size].remind = remind;
			list->missionArray[size].difficulty = diffi;
			size++;
		}

	}
	cout << size;
	list->Size = size;
	ifs.close();

}
//void NEWaddM(list* A, string code, string mission, int diffi, int remind)
//{
//
//}

//
//int main()
//{
//	
//
//
//	tm info;
//	time_t now = time(NULL);
//	cout << "=" << (int)now << endl;
//	info = *localtime(&now);
//	int year = info.tm_year + 1900;
//	int month = info.tm_mon + 1;
//	int day = info.tm_mday;
//	int hour = info.tm_hour;
//	int minute = info.tm_min;
//	int second = info.tm_sec;
//	cout << year << year << endl;
//	cout << month << month << endl;
//	cout << day << day << endl;
//	cout << hour << hour << endl;
//	cout << minute << minute << endl;
//	cout << second << second << endl;
//}
int main()
{



	//����ͨѶ¼�ṹ�����
	list A;
	A.Size = 0;
	open(&A);


	int a = 1;
	while (a)
	{
		int select = 0;
		showMENU();
		cin >> select;
		switch (select)
		{
		case 1://���
			addM(&A);
			break;
		case 2://��ʾ
			showMSSION(&A);
			break;
		case 3://ɾ��
		{
			/*cout << "����code" << endl;
			string code;
			cin >> code;
			if (isExist(&A, code) == -1)
			{
				cout << "none" << endl;
			}
			else
			{
				cout << "get" << endl;
			}*/


			deleteA(&A);
		}

		break;
		case 4://����
			findA(&A);
			break;
		case 5://�޸�
			modifyA(&A);
			break;
		case 6://���
			break;
		case 0://�˳�
		{
			cout << "�Һú����˽�������" << endl;
			save(&A);
			system("pause");
			a--;
		}

		break;
		};

	}

}


