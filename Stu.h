#pragma once
#include<cstring>
#include<iostream>
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
	CStu(int num=0, int a=0, char n=("",100), char c= ("", 100), char s= ("", 100), char p= ("", 100), char bp= ("", 100),int bd=0)
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
		if (!cin.good()) {
			cout << "学号不符合格式，";
			return 0;
		}
		else if (a.stu_Num > 2018099999 || a.stu_Num < 2014000001) {
			cout << "学号不符合格式，";
			return 0;
		}
		return 1;
	}

	//定义函数，检查姓名是否包含数字
	int checkName(CStu a) 
	{                              
		if (containNum(a.stu_Name)) {
			cout << "姓名不符合格式，请重新输入：";
			cin >> a.stu_Name;
		}
		return 0;
	}

	//定义函数，检查班级格式
	int checkClass(CStu a)
	{                             
		if ((!containNum(a.stu_Class) )|| AllisNum(a.stu_Class)) {
			cin.ignore(1000, '\n');
			cout << "班级不符合格式，请重新输入：";
			cin >> a.stu_Class;
		}
		return 0;
	}

	//定义函数，检查年龄范围
	int checkAge(CStu a) 
	{
		if (a.stu_Age < 0 || a.stu_Age>99) {
			cout << "年龄不符合格式，请重新输入：";
			cin >> a.stu_Age;
		}
		return 0;
	}

	//定义函数，检查生日格式
	int checkBrithDay(CStu a) 
	{
		if (a.stu_BrithDay<19000000 || a.stu_BrithDay>20180000) {
			cout << "生日不符合格式，请重新输入：";
			cin >> a.stu_BrithDay;
		}
		return 0;
	}

	//定义录入信息函数
	void addstuInfo(CStu a) 
	{                           
		for (; 1;) {
			cout << "请输入学生学号:";
			cin.ignore(10000, '\n');
			cin >> a.stu_Num;
			if (checkNum(a)) {
				break;
			}
		}
		cout << "请输入学生姓名:" ;
		cin >> a.stu_Name;
		checkName(a);
		cout << "请输入学生班级:";
		cin.ignore(1000, '\n');
		cin >> a.stu_Class;
		checkClass(a);
		cout << "请输入学生年龄:";
		cin.ignore(1000, '\n');
		cin >> a.stu_Age;
		checkAge(a);
		cout << "请输入学生生日（YYYYMMDD,共8位）:";
		cin.ignore(1000, '\n');
		cin >> a.stu_BrithDay;
		checkBrithDay(a);
		cout << "请输入学生性别：";
		cin >> a.stu_Sex;
		cout << "请输入学生籍贯：";
		cin.ignore(1000, '\n');
		cin >> a.stu_BrithPlace;
		cout << "请输入学生手机号：";
		cin.ignore(1000, '\n');
		cin >> a.stu_Phone;
		cout << "录入学生信息成功！" << endl;
	}
};