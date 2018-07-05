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

	//���庯��������ַ������Ƿ��������
	bool containNum(string a) 
	{
		for (unsigned int i = 0; i < a.size(); i++) {
			int tmp = (int)a[i];
			if (tmp >= 48 && tmp <= 57) {     //��ASCII����
				return 1;
			}
			else {
				continue;
			}
		}
		return 0;
	}

	//���庯��������ַ������Ƿ�ȫΪ����
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

	//���庯�������ѧ�Ÿ�ʽ
	int checkNum(CStu a) 
	{              
		if (!cin) {                                                           
			cout << "ѧ�Ų����ϸ�ʽ��";
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			return 0;
		}
		else if (a.stu_Num > 2018099999 || a.stu_Num < 2014000001) {
			cout << "ѧ�Ų����ϸ�ʽ��";
			return 0;
		}
		return 1;
	}

	//���庯�������������ʽ
	int checkName(CStu a) 
	{                              
		if (containNum(a.stu_Name)) {
			cout << "���������ϸ�ʽ��";
			return 0;
		}
		return 1;
	}

	//���庯�������༶��ʽ
	int checkClass(CStu a)
	{                             
		if ((!containNum(a.stu_Class) )|| AllisNum(a.stu_Class)) {
			cin.ignore(1000, '\n');
			cout << "�༶�����ϸ�ʽ��";
			return 0;
		}
		return 1;
	}

	//���庯����������䷶Χ
	int checkAge(CStu a) 
	{
		if (!cin) {
			cout << "���䲻���ϸ�ʽ��";
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			return 0;
		}
		else if (a.stu_Age < 0 || a.stu_Age>99) {
			cout << "���䲻���ϸ�ʽ��";
			return 0;
		}
		return 1;
	}

	//���庯����������ո�ʽ
	int checkBrithDay(CStu a) 
	{
		if (!cin) {
			cout << "���ղ����ϸ�ʽ��";
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			return 0;
		}
		else if (a.stu_BrithDay<19000000 || a.stu_BrithDay>20180000) {
			cout << "���ղ����ϸ�ʽ��";
			return 0;
		}
		return 1;
	}

	//���庯��������Ա�
	int checkSex(CStu a) 
	{
		if (a.stu_Sex!="��" && a.stu_Sex != "Ů") {
			cout << "�Ա𲻷��ϸ�ʽ��";
			return 0;
		}
		return 1;
	}

	//���庯��������ֻ���
	int checkPhone(CStu a) 
	{
		string str = a.stu_Phone;
		if (!AllisNum(a.stu_Phone)) {
			cout << "�ֻ��Ų����ϸ�ʽ��";
			return 0;
		}
		else if(str.size() != 11){
			cout << "�ֻ��Ų����ϸ�ʽ��";
			return 0;
		}
		return 1;
	}

	//���屣����Ϣ����
	int saveInfo(CStu a) {
		fstream output_stream;
		output_stream.open("D:\\student.txt", ios::out | ios::app);
		output_stream << a.stu_Num << " " << a.stu_Name << " " << a.stu_Sex << " " << a.stu_Class << " " << a.stu_Age << " " << a.stu_BrithDay << " " << a.stu_BrithPlace << " " << a.stu_Phone << endl;
		return 1;
	}
	//����¼����Ϣ����
	void addstuInfo(CStu a) 
	{   
		system("cls");
		cout << "********************��ӭʹ��ѧ����Ϣ����ϵͳ��********************" << endl;
		cout << "*                                                                *" << endl;
		cout << "*                                                                *" << endl;
		cout << "*---------------------------��ǰλ��-----------------------------*" << endl;
		cout << "*                                                                *" << endl;
		cout << "*                                                                *" << endl;
		cout << "*                         ���ѧ����Ϣ                           *" << endl;
		cout << "*                                                                *" << endl;
		cout << "*                                                                *" << endl;
		cout << "******************************************************************" << endl;
		//¼��ѧ��
		for (; 1;) {
			cout << "������ѧ��ѧ��:";
			cin >> a.stu_Num;
			if (checkNum(a)) {
				break;
			}
		}
		//¼������
		for (; 1;) {
			cout << "������ѧ������:";
			cin >> a.stu_Name;
			if (checkName(a)) {
				break;
			}
		}
		//¼��༶
		for (; 1;) {
			cout << "������ѧ���༶:";
			cin >> a.stu_Class;
			if (checkClass(a)) {
				break;
			}
		}
		
		//¼������
		for (; 1;) {
			cout << "������ѧ������:";
			cin >> a.stu_Age;
			if (checkAge(a)) {
				break;
			}
		}
		//¼������
		for (; 1;) {
			cout << "������ѧ�����գ�YYYYMMDD,��8λ��:";
			cin >> a.stu_BrithDay;
			if (checkBrithDay(a)) {
				break;
			}
		}
		//¼���Ա�
		for (; 1;) {
			cout << "������ѧ���Ա�";
			cin >> a.stu_Sex;
			if (checkSex(a)) {
				break;
			}
		}
		//¼�뼮��
		cout << "������ѧ�����᣺";
		cin >> a.stu_BrithPlace;
		//¼���ֻ���
		for (; 1;) {
			cout << "������ѧ���ֻ��ţ�";
			cin >> a.stu_Phone;
			if (checkPhone(a)) {
				break;
			}
		}
		if (saveInfo(a)) {
			cout << "¼��ѧ����Ϣ�ɹ���" << endl;
		}
	}

	
};