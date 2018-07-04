#pragma once
#include<string.h>
#include<cstring>
#include<iostream>
#include<fstream>
using namespace std;

class CStu
{
public:
	int stu_Num;
	int stu_Age;
	char stu_Name;
	char stu_Class;
	char stu_Sex;
	char stu_Phone;
	char stu_BrithPlace;
	int stu_BrithDay;
	CStu(int num=0, int a=0, char n=("",100), char c= ("", 100), char s= ' ', char p= ("", 100), char bp= ("", 100),int bd=0)
	{
		stu_Num = num;
		stu_Age = a;
		stu_Name = n;
		stu_Class = c;
		stu_Sex = s;
		stu_Phone = p;
		stu_BrithPlace = bp;
		stu_BrithDay = bd;
	}

	//定义函数，检查字符串中是否包含数字
	bool containNum(char a) 
	{
		string str;
		str = a;
		int c = 1;
		for (unsigned int i = 0; i < str.size(); i++) {
			int tmp = (int)str[i];
			if (tmp >= 48 && tmp <= 57) {     //按ASCII码检查
				return c;
			}
			else {
				continue;
			}
		}
		c = 0;
		return c;
	}

	//定义函数，检查字符串中是否全为数字
	bool AllisNum(char a)
	{
		string str;
		str = a;
		for (unsigned int i = 0; i < str.size(); i++)
		{
			int tmp = (int)str[i];
			if (tmp >= 48 && tmp <= 57)
			{
				continue;
			}
			else
			{
				return false;
			}
		}
		return true;
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
		string str;
		str = a.stu_Sex;
		char* p= const_cast<char*>(str.c_str());
		if (strcmp(p,"男") || strcmp(p, "女")) {
			return 1;
		}
		else {
			cout << "性别不符合格式，";
			return 0;
		}
	}

	/*定义函数，检查手机号*/
	int checkPhone(CStu a) 
	{
		string str;
		str = a.stu_Phone;
		const char* p = str.data();
		if (!AllisNum(a.stu_Phone)) {
			cout << "手机号不符合格式，";
			return 0;
		}
		else if(str.length() != 11){
			cout << "手机号不符合格式，";
			/*cout << strlen(a.stu_Sex);*/
			return 0;
		}
		return 1;
	}

	//定义录入信息函数
	void addstuInfo(CStu a) 
	{    
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
		cout << "请输入学生班级:";
		cin.ignore(1000, '\n');
		cin >> a.stu_Class;
		checkClass(a);
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
			cin.ignore(1000, '\n');
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
		cin.ignore(1000, '\n');
		cin >> a.stu_BrithPlace;
		//录入手机号
		for (; 1;) {
			cout << "请输入学生手机号：";
			cin.ignore(1000, '\n');
			cin >> a.stu_Phone;
			if (checkPhone(a)) {
				break;
			}
		}
		cout << "录入学生信息成功！" << endl;
	}

	//定义文件保存函数
	void SaveInfo(CStu a) {
		fstream output_stream;
		output_stream.open("D:\\temp.txt", ios::out | ios::app);
		output_stream << a.stu_Num << " " << a.stu_Name << " " << a.stu_Class << " " << a.stu_Sex << " " << a.stu_Age << " " << a.stu_BrithDay << " " << a.stu_BrithPlace << " " << a.checkPhone << endl;
		cout << "学生信息保存成功！";
	}
};