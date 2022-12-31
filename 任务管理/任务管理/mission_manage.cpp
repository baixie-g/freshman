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
	cout << "1、添加任务" << endl;
	cout << "2、显示所有任务" << endl;
	cout << "3、删除任务" << endl;
	cout << "4、查找任务" << endl;
	cout << "5、修改任务" << endl;
	cout << "6、清空任务" << endl;
	cout << "0、退出" << endl;
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
	//判断是否到上限了
	if (list->Size == MAX)
	{
		cout << "任务数已满，请完成" << endl;
		return;
	}
	else
	{
		//添加数据
		string mission;
		cout << "输入任务信息" << endl;
		cin >> mission;
		list->missionArray[list->Size].mission = mission;



		//int start;
		//cout << "输入开始时间" << endl;
		//cin >> mission;
		//list->missionArray[list->Size].mission = mission;


		//int ddl;
		//cout << "输入结束时间" << endl;
		//cin >> mission;
		//list->missionArray[list->Size].mission = mission;



		int difficulty;
		cout << "输入任务难度" << endl;

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
				cout << "输入错误，重新输入难度" << endl;
			}

		}


		cout << "请输入代号" << endl;
		string code;
		cin >> code;
		list->missionArray[list->Size].code = code;


		//bool remind;
		//cout << "输入剩余天数" << endl;
		//cin >> remind;
		//list->missionArray[list->Size].remind = remind;


		list->Size++;

		cout << "添加成功" << endl;//绿
		Sleep(1000);
		system("cls");
	}

}



void showMSSION(list* list)
{
	if (list->Size == 0)
	{
		cout << "快去找任务" << endl;
	}
	else
	{
		for (int i = 0; i < list->Size; i++)
		{
			cout << "任务代号" << list->missionArray[i].code << "\t";
			cout << "任务是" << list->missionArray[i].mission << "\t";
			cout << "剩余天数？" << list->missionArray[i].remind << "\t";
			cout << "难度" << (list->missionArray[i].difficulty <= 3 ? "还行" : "棘手") << "\t";
			cout << "开始日期" << list->missionArray[i].start << "\t";
			cout << "截止日期" << list->missionArray[i].ddl << endl;
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
	cout << "输入删除任务" << endl;

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
		cout << "删除成功";
	}
	else
	{
		cout << "查无此任务，你不会漏了吧";
	}
	system("pause");
	system("cls");
}
void deleteALL(list* list)
{
	cout << "确定清空所有任务？" << endl;
	cout << "  yes     ---确定" << endl;
	cout << "anything  ---取消" << endl;

}


void findA(list* list)
{
	cout << "查找任务" << endl;
	string code;
	cin >> code;

	int existin = isExist(list, code);

	if (existin != -1)
	{
		cout << "任务代号" << list->missionArray[existin].code << "\t";
		cout << "任务是" << list->missionArray[existin].mission << "\t";
		cout << "剩余天数？" << list->missionArray[existin].remind << "\t";
		cout << "难度" << (list->missionArray[existin].difficulty <= 3 ? "还行" : "棘手") << "\t";
		cout << "开始日期" << list->missionArray[existin].start << "\t";
		cout << "截止日期" << list->missionArray[existin].ddl << endl;
	}
	else
	{
		cout << "你不会漏了吧？" << endl;
	}
	system("pause");
	system("cls");
}


void modifyA(list* list)
{
	cout << "输入修改任务代码" << endl;
	string code;
	cin >> code;

	int existin = isExist(list, code);

	if (existin != -1)
	{
		string mission;
		cout << list->missionArray[existin].mission << endl;
		cout << "输入任务信息" << endl;
		cin >> mission;
		list->missionArray[existin].mission = mission;



		//int start;
		//cout << "输入开始时间" << endl;
		//cin >> mission;
		//list->missionArray[list->Size].mission = mission;


		//int ddl;
		//cout << "输入结束时间" << endl;
		//cin >> mission;
		//list->missionArray[list->Size].mission = mission;



		int difficulty;
		cout << list->missionArray[existin].difficulty << endl;
		cout << "输入任务难度" << endl;

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
				cout << "输入错误，重新输入难度" << endl;
			}

		}


		cout << list->missionArray[existin].code << endl;
		cout << "请输入代号" << endl;
		string code;
		cin >> code;
		list->missionArray[existin].code = code;


		//bool remind;
		//cout << "输入" << endl;
		//cin >> mission;
		//list->missionArray[list->Size].mission = mission;



		cout << "修改成功" << endl;
	}
	else
	{
		cout << "你不会漏了吧" << endl;
	}

}

void cleanall(list* list)
{
	list->Size = 0;
	cout << "已经清空了，不能骗自己哦" << endl;
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
			/*ofs << "任务代号" << list->missionArray[i].code << "\t"
				<< "任务是" << list->missionArray[i].mission << "\t"
				<< "剩余天数？" << list->missionArray[i].remind << "\t"
				<< "难度" << (list->missionArray[i].difficulty <= 3 ? "还行" : "棘手") << "\t"
				<< "开始日期" << list->missionArray[i].start << "\t"
				<< "截止日期" << list->missionArray[i].ddl << endl;*/
	}

	ofs.close();

}
void open(list* list)
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "欢迎开始使用，任务为空" << endl;
		list->Size = 0;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "欢迎回来，任务为空。" << endl;
		list->Size = 0;
		ifs.close();
		return;
	}
	cout << "开始快乐干任务系统，启动！！" << endl;
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



	//创建通讯录结构体变量
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
		case 1://添加
			addM(&A);
			break;
		case 2://显示
			showMSSION(&A);
			break;
		case 3://删除
		{
			/*cout << "输入code" << endl;
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
		case 4://查找
			findA(&A);
			break;
		case 5://修改
			modifyA(&A);
			break;
		case 6://清空
			break;
		case 0://退出
		{
			cout << "我好好用了今天了呢" << endl;
			save(&A);
			system("pause");
			a--;
		}

		break;
		};

	}

}


