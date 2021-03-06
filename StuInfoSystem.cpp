﻿// StuInfoSystem.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iomanip>
#include<iostream>
#include<fstream>
#include"stu.h"
using namespace std;

//定义函数，查询行数
int checkfileline()
{
	fstream file;
	file.open("D:\\student.txt", ios::in);
	char c;
	int linecnt = 0;
	while (file.get(c))
	{
		if (c == '\n')
			linecnt++;

	}
	file.close();
	return linecnt;
}

//定义载入信息函数
CStu s[100];
int loadInfo() {
	fstream file;
	file.open("D:\\student.txt", ios::in);
	/*int n = 0;
	const int *p = &n;*/
	for (int i = 0; i < checkfileline(); i++)
	{
		file >> s[i].stu_Num >> s[i].stu_Name >> s[i].stu_Sex >> s[i].stu_Class >> s[i].stu_Age
			>> s[i].stu_BrithDay >> s[i].stu_BrithPlace >> s[i].stu_Phone;
		
	}
	file.close();
	return 1;
}

//定义查询信息函数
void inquiryInfo() {
	cout << "请选择查询项：" << endl;
l2: cout << "1.学号 2.姓名 3.性别 4.班级 5.年龄 6.生日 7.籍贯 8.电话" << endl;
	int a = 0;
	cin >> a;
	switch (a)
	{
	case 1: {
		cout << "请输入学号:";
		int b = 0;
		cin >> b;
		for (int i = 0; i < checkfileline(); i++) {
			if (s[i].stu_Num == b) {
				cout << "学号" << s[i].stu_Num << "姓名" << s[i].stu_Name << "班级" << s[i].stu_Class << "年龄" << s[i].stu_Age << "性别 " << s[i].stu_Sex << endl;
				cout << "手机号" << s[i].stu_Phone << "籍贯" << s[i].stu_BrithPlace << "生日" << s[i].stu_BrithDay << endl;
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	case 2: {
		cout << "请输入姓名:";
		string b = "";
		cin >> b;
		for (int i = 0; i < checkfileline(); i++) {
			if (s[i].stu_Name == b) {
				cout << "学号" << s[i].stu_Num << "姓名" << s[i].stu_Name << "班级" << s[i].stu_Class << "年龄" << s[i].stu_Age << "性别 " << s[i].stu_Sex << endl;
				cout << "手机号" << s[i].stu_Phone << "籍贯" << s[i].stu_BrithPlace << "生日" << s[i].stu_BrithDay << endl;
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	case 3: {
		cout << "请输入性别:";
		string b = "";
		cin >> b;
		for (int i = 0; i < checkfileline(); i++) {
			if (s[i].stu_Sex == b) {
				cout << "学号" << s[i].stu_Num << "姓名" << s[i].stu_Name << "班级" << s[i].stu_Class << "年龄" << s[i].stu_Age << "性别 " << s[i].stu_Sex << endl;
				cout << "手机号" << s[i].stu_Phone << "籍贯" << s[i].stu_BrithPlace << "生日" << s[i].stu_BrithDay << endl;
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	case 4: {
		cout << "请输入班级:";
		string b = "";
		cin >> b;
		for (int i = 0; i < checkfileline(); i++) {
			if (s[i].stu_Class == b) {
				cout << "学号" << s[i].stu_Num << "姓名" << s[i].stu_Name << "班级" << s[i].stu_Class << "年龄" << s[i].stu_Age << "性别 " << s[i].stu_Sex << endl;
				cout << "手机号" << s[i].stu_Phone << "籍贯" << s[i].stu_BrithPlace << "生日" << s[i].stu_BrithDay << endl;
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	case 5: {
		cout << "请输入年龄:";
		int b = 0;
		cin >> b;
		for (int i = 0; i < checkfileline(); i++) {
			if (s[i].stu_Age == b) {
				cout << "学号" << s[i].stu_Num << "姓名" << s[i].stu_Name << "班级" << s[i].stu_Class << "年龄" << s[i].stu_Age << "性别 " << s[i].stu_Sex << endl;
				cout << "手机号" << s[i].stu_Phone << "籍贯" << s[i].stu_BrithPlace << "生日" << s[i].stu_BrithDay << endl;
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	case 6: {
		cout << "请输入生日:";
		int b = 0;
		cin >> b;
		for (int i = 0; i < checkfileline(); i++) {
			if (s[i].stu_BrithDay == b) {
				cout << "学号" << s[i].stu_Num << "姓名" << s[i].stu_Name << "班级" << s[i].stu_Class << "年龄" << s[i].stu_Age << "性别 " << s[i].stu_Sex << endl;
				cout << "手机号" << s[i].stu_Phone << "籍贯" << s[i].stu_BrithPlace << "生日" << s[i].stu_BrithDay << endl;
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	case 7: {
		cout << "请输入籍贯:";
		string b = "";
		cin >> b;
		for (int i = 0; i < checkfileline(); i++) {
			if (s[i].stu_BrithPlace == b) {
				cout << "学号" << s[i].stu_Num << "姓名" << s[i].stu_Name << "班级" << s[i].stu_Class << "年龄" << s[i].stu_Age << "性别 " << s[i].stu_Sex << endl;
				cout << "手机号" << s[i].stu_Phone << "籍贯" << s[i].stu_BrithPlace << "生日" << s[i].stu_BrithDay << endl;
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	case 8: {
		cout << "请输入手机号:";
		string b = "";
		cin >> b;
		for (int i = 0; i < checkfileline(); i++) {
			if (s[i].stu_Phone == b) {
				cout << "学号" << s[i].stu_Num << "姓名" << s[i].stu_Name << "班级" << s[i].stu_Class << "年龄" << s[i].stu_Age << "性别 " << s[i].stu_Sex << endl;
				cout << "手机号" << s[i].stu_Phone << "籍贯" << s[i].stu_BrithPlace << "生日" << s[i].stu_BrithDay << endl;
				break;
			}
			else {
				continue;
			}
		}
		break;
	}
	default:
		cout << "输入错误，请重新选择！" << endl;
		goto l2;
		break;
	}
	
}

void Modify_password()
{
	int o = 0;
	string temp;
	int number;
	fstream file;
l3:	cout << "请输入学号:" << endl;
	cin >> number;
	loadInfo();
	for (int i = 0; i < checkfileline(); i++)
	{
		if (s[i].stu_Num == number)
		{
			cout << "请输入密码:" << endl;
			cin >> temp;
			if (temp == "000000")
			{
				string  xmm, smm;
				cout << "首次登陆需修改密码，请输入新密码:" << endl;
				cin >> xmm;
				while (xmm != smm) {
					cout << "请确认密码:" << endl;
					cin >> smm;
				}
				file << s[i].stu_Num << s[i].stu_Name << s[i].stu_Class << s[i].stu_Age << s[i].stu_Sex
					<< s[i].stu_Phone << s[i].stu_BrithPlace << s[i].stu_BrithDay << s[i].stu_Password;
				goto l3;
			}
			else if (temp == s[i].stu_Password) {
				break;
			}
			else {
				cout << "对不起，您输入密码错误,";
				o++;
				if (o > 3)
				{
					cout << "错误次数过多，系统即将退出!" << endl;
					exit(0);
				}
				else
				{
					cout << "请重新输入密码：" << endl;
				}
			}
		}
		/*else if () {
			cout << "该用户不存在！" << endl;
			goto l3;
		}*/
		else {
			continue;
		}
	}
}


int main()
{
	cout << "**********************欢迎使用学生信息管理系统*********************" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*   您好！                                                        *" << endl;
	cout << "*   Hello!                                                        *" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*                  欢迎您使用学生信息管理系统 ！                  *" << endl;
	cout << "*        Welcome to the Student information management system!    *" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*                             请登录                              *" << endl;
	cout << "*                         Please sign in                          *" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*******************************************************************" << endl;
	Modify_password();
l1:	system("cls");
	cout << "**********************欢迎使用学生信息管理系统*********************" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*-------------------请输入\"数字+回车\"选择操作---------------------*" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*                                                                 *" << endl;
	cout << "*                        1)添加学生信息                           *" << endl;
	cout << "*                        2)修改学生信息                           *" << endl;
	cout << "*                        3)查询学生信息                           *" << endl;
	cout << "*                        4)删除学生信息                           *" << endl;
	cout << "*                          5)退出系统                             *" << endl; 
	cout << "*                                                                 *" << endl;
	cout << "******************************************************************" << endl;
	int a = 0;
	cin >> a;
	switch (a)
	{
	case 1:
	{	
		for (; 1;) {
			CStu s;
			int a = 0;
			s.addstuInfo(s);
			cout << "输入“1+回车”继续输入，输入“2+回车”返回主菜单" << endl;
			cin >> a;
			if (a == 1) {
				continue;
			}
			else if (a == 2) {
				goto l1;
			}
		}
		break;
	}
	case 2:
	case 3:
	{
		for (; 1;) {
			system("cls");
			cout << "********************欢迎使用学生信息管理系统！********************" << endl;
			cout << "*                                                                *" << endl;
			cout << "*                                                                *" << endl;
			cout << "*---------------------------当前位置-----------------------------*" << endl;
			cout << "*                                                                *" << endl;
			cout << "*                                                                *" << endl;
			cout << "*                         查询学生信息                           *" << endl;
			cout << "*                                                                *" << endl;
			cout << "*                                                                *" << endl;
			cout << "******************************************************************" << endl;
			loadInfo();
			inquiryInfo();
			cout << "输入“1+回车”继续查询，输入“2+回车”返回主菜单" << endl;
			cin >> a;
			if (a == 1) {
				continue;
			}
			else if (a == 2) {
				goto l1;
			}
		}
		break;
	}
	default:

		break;
	}
	system("pause");
    return 0;
}
//设置全局变量控制数组输出大小  
void Delete(CStu s[])//删除函数
{
	system("cls");
	int n = checkfileline();
	int a=0,i=0,j;
	cout << "请输入需要删除学生的学号" << endl;
	cin >> a;
	while ((s[i].stu_Num - a) != 0 && i < n)i++;
	if (i == n)
	{
		cout << "对不起，无法查到该学生" << endl; 
	}
	else 
	{
		for (j = i; j < n - 1; j++)
		{
			s[j].stu_Num=s[j+1].stu_Num;
			s[j].stu_Age= s[j+1].stu_Age;
			s[j].stu_Name= s[j+1].stu_Name;
			s[j].stu_Class = s[j + 1].stu_Class;
			s[j].stu_Sex = s[j + 1].stu_Sex;
			s[j].stu_Phone = s[j + 1].stu_Phone;
			s[j].stu_BrithPlace = s[j + 1].stu_BrithPlace;
			s[j].stu_BrithDay = s[j + 1].stu_BrithDay;
			s[j].stu_password = s[j + 1].stu_password;
			
		}
		cout << "该用户删除成功" << endl;
	}	
}
//修改函数
void Modify(CStu a[])
{
	system("cls");
	int n = checkfileline();
	int x=0,i=0,j;
	cout << "请输入需要修改学生的学号" << endl;
	cin >> x;
	while ((s[i].stu_Num - x) != 0 && i < n)i++;
	if (i == n)
	{
		cout << "对不起，无法查到该学生" << endl; 
	}
	else 
	{
		cout << "该生信息为："<<endl;
		cout << "学号" << s[i].stu_Num << "姓名" << s[i].stu_Name << "班级" << s[i].stu_Class << "年龄" << s[i].stu_Age << "性别 " << s[i].stu_Sex << endl;
		cout << "手机号" << s[i].stu_Phone << "籍贯" << s[i].stu_BrithPlace << "生日" << s[i].stu_BrithDay << endl;
l2:		cout << "请选择要修改的信息："<< endl;
		cout << "1.学号 2.姓名 3.性别 4.班级 5.年龄 6.生日 7.籍贯 8.电话" << endl;
	int k = 0;
	cin >> k;
	switch (k)
	{
	case 1: {
		for (; 1;) {
				cout << "请输入学生学号:";
				cin >> a[i].stu_Num;
				if (checkNum(a[i])) {
					break;
				}
			}
		break;
	}
	case 2: {
		for (; 1;) {
			cout << "请输入学生姓名:";
			cin >> a.stu_Name;
			if (checkName(a)) {
				break;
			}
		}
		}
		break;
	}
	case 3: {
		for (; 1;) {
			cout << "请输入学生性别：";
			cin >> a.stu_Sex;
			if (checkSex(a)) {
				break;
			}
		}
		break;
	}
	case 4: {
		for (; 1;) {
			cout << "请输入学生班级:";
			cin >> a.stu_Class;
			if (checkClass(a)) {
				break;
			}
		}
		break;
	}
	case 5: {
		for (; 1;) {
			cout << "请输入学生年龄:";
			cin >> a.stu_Age;
			if (checkAge(a)) {
				break;
			}
		}
		break;
	}
	case 6: {
		for (; 1;) {
			cout << "请输入学生生日（YYYYMMDD,共8位）:";
			cin >> a.stu_BrithDay;
			if (checkBrithDay(a)) {
				break;
			}
		}
		break;
	}
	case 7: {
		cout << "请输入学生籍贯：";
		cin >> a.stu_BrithPlace;
		break;
	}
	case 8: {
		for (; 1;) {
			cout << "请输入学生手机号：";
			cin >> a.stu_Phone;
			if (checkPhone(a)) {
				break;
			}
		}
		break;
	}
	default:
		cout << "输入错误，请重新选择！" << endl;
goto l2;
		break;
	}
		cout << "该用户删除成功" << endl;
	}	
}

