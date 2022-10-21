#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include "Header.h"
using namespace std;

void search_by_company(const char* a)
{
	ifstream in;
	in.open("File.txt");
	cout << "Vse chto naIIIli:\n";
	const int size = 256;
	char buf[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Companiya:";
		if (strstr(buf, check))
			if (strstr(buf, a))
			{
				cout << "\n";
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void search_by_name(const char* a)
{
	ifstream in;
	in.open("File.txt");
	cout << "Vse chto naIIIli:\n";
	const int size = 256;
	char buf[size] = {};
	char buf_check[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Companiya:";
		const char check2[] = "Imya:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, a))
			{
				cout << "\n";
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void search_by_address(const char* a)
{
	ifstream in;
	in.open("File.txt");
	cout << "Vse chto naIIIli:\n";
	const int size = 256;
	char buf[size] = {};
	char buf_check[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Compania:";
		const char check2[] = "Adres:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, a))
			{
				cout << "\n";
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void search_by_type(const char* a)
{
	ifstream in;
	in.open("File.txt");
	cout << "Vse chto naIIIli:\n";
	const int size = 256;
	char buf[size] = {};
	char buf_check[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Compania:";
		const char check2[] = "Tip:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, a))
			{
				cout << "\n";
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void search_by_num(int a)
{
	ifstream in;
	in.open("File.txt");
	cout << "Vse chto naIIIli:\n";
	const int size = 256;
	char buf[size] = {};
	char buf_check[size] = {};
	char buf_num[size] = {};
	sprintf(buf_num, "%d", a);
	do
	{
		in.getline(buf, size);
		const char check[] = "Compania:";
		const char check2[] = "Nomer:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, buf_num))
			{
				cout << "\n";
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void PrintFile()
{
	ifstream in;
	in.open("File.txt");
	const int size = 256;
	char buf[size] = {};
	do
	{
		in.getline(buf, size);
		cout << buf << endl;
	} while (in);
}