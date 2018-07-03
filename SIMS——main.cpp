
#include "stdafx.h"
#include <iomanip>
#include<iostream>
#include<fstream>
#include"stu.h"
using namespace std;



int main()
{
	cout << "********************欢迎使用学生信息管理系统！********************" << endl;
	cout << "*                                                                *" << endl;
	cout << "*                                                                *" << endl;
	cout << "*-------------------请输入\"数字+回车\"选择操作--------------------*" << endl;
	cout << "*                        1)添加学生信息                          *" << endl;
	cout << "*                        2)修改学生信息                          *" << endl;
	cout << "*                        3)查询学生信息                          *" << endl;
	cout << "*                        4)删除学生信息                          *" << endl;
	cout << "*                          5)退出系统                            *" << endl;
	cout << "******************************************************************" << endl;
	int a = 0;
	cin >> a;
	CStu s;
	switch (a)
	{
	case 1:
		s.addstuInfo(s);
		break;

	default:
		break;
	}
	system("pause");
    return 0;
}

