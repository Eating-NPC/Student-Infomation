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

	//���庯��������ַ������Ƿ��������
	bool containNum(char a) 
	{
		string str;
		str = a;
		int c = 1;
		for (unsigned int i = 0; i < str.size(); i++) {
			int tmp = (int)str[i];
			if (tmp >= 48 && tmp <= 57) {     //��ASCII����
				return c;
			}
			else {
				continue;
			}
		}
		c = 0;
		return c;
	}

	//���庯��������ַ������Ƿ�ȫΪ����
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
		string str;
		str = a.stu_Sex;
		char* p= const_cast<char*>(str.c_str());
		if (strcmp(p,"��") || strcmp(p, "Ů")) {
			return 1;
		}
		else {
			cout << "�Ա𲻷��ϸ�ʽ��";
			return 0;
		}
	}

	/*���庯��������ֻ���*/
	int checkPhone(CStu a) 
	{
		string str;
		str = a.stu_Phone;
		const char* p = str.data();
		if (!AllisNum(a.stu_Phone)) {
			cout << "�ֻ��Ų����ϸ�ʽ��";
			return 0;
		}
		else if(str.length() != 11){
			cout << "�ֻ��Ų����ϸ�ʽ��";
			/*cout << strlen(a.stu_Sex);*/
			return 0;
		}
		return 1;
	}

	//����¼����Ϣ����
	void addstuInfo(CStu a) 
	{    
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
		cout << "������ѧ���༶:";
		cin.ignore(1000, '\n');
		cin >> a.stu_Class;
		checkClass(a);
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
			cin.ignore(1000, '\n');
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
		cin.ignore(1000, '\n');
		cin >> a.stu_BrithPlace;
		//¼���ֻ���
		for (; 1;) {
			cout << "������ѧ���ֻ��ţ�";
			cin.ignore(1000, '\n');
			cin >> a.stu_Phone;
			if (checkPhone(a)) {
				break;
			}
		}
		cout << "¼��ѧ����Ϣ�ɹ���" << endl;
	}

	//�����ļ����溯��
	void SaveInfo(CStu a) {
		fstream output_stream;
		output_stream.open("D:\\temp.txt", ios::out | ios::app);
		output_stream << a.stu_Num << " " << a.stu_Name << " " << a.stu_Class << " " << a.stu_Sex << " " << a.stu_Age << " " << a.stu_BrithDay << " " << a.stu_BrithPlace << " " << a.checkPhone << endl;
		cout << "ѧ����Ϣ����ɹ���";
	}
};