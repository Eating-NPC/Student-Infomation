#pragma once
#include<string.h>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class CStu
{
public:
	int stu_Num;
	int stu_Age;
	string stu_Name;
	string stu_Class;
	string stu_Sex;
	string stu_Phone;
	string stu_BrithPlace;
	int stu_BrithDay;
	string stu_pwd;
	CStu(int num=0, int a=0, string n="", string c= "", string s= "", string p= "", string bp= "",int bd=0,string pwd="")
	{
		stu_Num = num;
		stu_Age = a;
		stu_Name = n;
		stu_Class = c;
		stu_Sex = s;
		stu_Phone = p;
		stu_BrithPlace = bp;
		stu_BrithDay = bd;
		stu_pwd = pwd;
	}

	//定义函数，检查字符串中是否包含数字
	bool containNum(string a) 
	{
		for (unsigned int i = 0; i < a.size(); i++) {
			int tmp = (int)a[i];
			if (tmp >= 48 && tmp <= 57) {     //按ASCII码检查
				return 1;
			}
			else {
				continue;
			}
		}
		return 0;
	}

	//定义函数，检查字符串中是否全为数字
	bool AllisNum(string str)
	{
		for (unsigned int i = 0; i < str.size(); i++)
		{
			int tmp = (int)str[i];
			if (tmp >= 48 && tmp <= 57)
			{
				continue;
			}
			else
			{
				return 0;
			}
		}
		return 1;
	}

	//定义函数，检查学号格式
	int checkNum(CStu a) 
	{              
		if (!cin) {                                                           
			cout << "学号不符合格式，";
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			return 0;
		}
		else if (a.stu_Num > 2018099999 || a.stu_Num < 2014000001) {
			cout << "学号不符合格式，";
			return 0;
		}
		return 1;
	}

	//定义函数，检查姓名格式
	int checkName(CStu a) 
	{                              
		if (containNum(a.stu_Name)) {
			cout << "姓名不符合格式，";
			return 0;
		}
		return 1;
	}

	//定义函数，检查班级格式
	int checkClass(CStu a)
	{                             
		if ((!containNum(a.stu_Class) )|| AllisNum(a.stu_Class)) {
			cin.ignore(1000, '\n');
			cout << "班级不符合格式，";
			return 0;
		}
		return 1;
	}

	//定义函数，检查年龄范围
	int checkAge(CStu a) 
	{
		if (!cin) {
			cout << "年龄不符合格式，";
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			return 0;
		}
		else if (a.stu_Age < 0 || a.stu_Age>99) {
			cout << "年龄不符合格式，";
			return 0;
		}
		return 1;
	}

	//定义函数，检查生日格式
	int checkBrithDay(CStu a) 
	{
		if (!cin) {
			cout << "生日不符合格式，";
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			return 0;
		}
		else if (a.stu_BrithDay<19000000 || a.stu_BrithDay>20180000) {
			cout << "生日不符合格式，";
			return 0;
		}
		return 1;
	}

	//定义函数，检查性别
	int checkSex(CStu a) 
	{
		if (a.stu_Sex!="男" && a.stu_Sex != "女") {
			cout << "性别不符合格式，";
			return 0;
		}
		return 1;
	}

	//定义函数，检查手机号
	int checkPhone(CStu a) 
	{
		string str = a.stu_Phone;
		if (!AllisNum(a.stu_Phone)) {
			cout << "手机号不符合格式，";
			return 0;
		}
		else if(str.size() != 11){
			cout << "手机号不符合格式，";
			return 0;
		}
		return 1;
	}

	//定义保存信息函数
	int saveInfo(CStu a) {
		fstream output_stream;
		output_stream.open("D:\\student.txt", ios::out | ios::app);
		output_stream << a.stu_Num << " " << a.stu_Name << " " << a.stu_Sex << " " << a.stu_Class << " " << a.stu_Age << " " << a.stu_BrithDay << " " << a.stu_BrithPlace << " " << a.stu_Phone << endl;
		return 1;
	}
	//定义录入信息函数
	void addstuInfo(CStu a) 
	{   
		system("cls");
		cout << "********************欢迎使用学生信息管理系统！********************" << endl;
		cout << "*                                                                *" << endl;
		cout << "*                                                                *" << endl;
		cout << "*---------------------------当前位置-----------------------------*" << endl;
		cout << "*                                                                *" << endl;
		cout << "*                                                                *" << endl;
		cout << "*                         添加学生信息                           *" << endl;
		cout << "*                                                                *" << endl;
		cout << "*                                                                *" << endl;
		cout << "******************************************************************" << endl;
		//录入学号
		for (; 1;) {
			cout << "请输入学生学号:";
			cin >> a.stu_Num;
			if (checkNum(a)) {
				break;
			}
		}
		//录入姓名
		for (; 1;) {
			cout << "请输入学生姓名:";
			cin >> a.stu_Name;
			if (checkName(a)) {
				break;
			}
		}
		//录入班级
		for (; 1;) {
			cout << "请输入学生班级:";
			cin >> a.stu_Class;
			if (checkClass(a)) {
				break;
			}
		}
		
		//录入年龄
		for (; 1;) {
			cout << "请输入学生年龄:";
			cin >> a.stu_Age;
			if (checkAge(a)) {
				break;
			}
		}
		//录入生日
		for (; 1;) {
			cout << "请输入学生生日（YYYYMMDD,共8位）:";
			cin >> a.stu_BrithDay;
			if (checkBrithDay(a)) {
				break;
			}
		}
		//录入性别
		for (; 1;) {
			cout << "请输入学生性别：";
			cin >> a.stu_Sex;
			if (checkSex(a)) {
				break;
			}
		}
		//录入籍贯
		cout << "请输入学生籍贯：";
		cin >> a.stu_BrithPlace;
		//录入手机号
		for (; 1;) {
			cout << "请输入学生手机号：";
			cin >> a.stu_Phone;
			if (checkPhone(a)) {
				break;
			}
		}
		if (saveInfo(a)) {
			cout << "录入学生信息成功！" << endl;
		}
	}

	
};