// �̳�1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CDate
{
protected:
	int year;
	int month;
	int day;
public:
	CDate();
	CDate(int ty, int tm, int td);
	void display();
	~CDate();
};
CDate::CDate()
{
	year = 2017;
	month = 12;
	day = 1;
	cout << "����Ĭ�Ϲ��캯��" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::CDate(int ty, int tm, int td)
{
	year = ty;
	month = tm;
	day = td;
	cout << "���๹�캯��" << year << "��" << month << "��" << day << "��" << endl;
}
void CDate::display()
{
	cout << "����display" << year << "��" << month << "��" << day << "��" << endl;
}
CDate::~CDate(void)
{
	cout << "������������" << year << "��" << month << "��" << day << "��" << endl;
}
class CMydate :public CDate
{
public:
	CMydate(int ty, int tm, int td)
	{
		year = ty;
		month = tm;
		day = td;
		cout << "ԭ���๹�캯��" << year << "��" << month << "��" << day << "��" << endl;
	}
	~CMydate()
	{
		cout << "ԭ�������캯��" << year << "��" << month << "��" << day << "��" << endl;
	}
};
int main()
{
	CMydate omydatel(2018, 5, 21);
	omydatel.display();
	return 0;
}