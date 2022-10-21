#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Book
{
	string company;
	string imya;
	int nomer;
	string adres;
	string Tip;
	static int count;
public:
	Book()
	{
		company = imya = adres = Tip = "";
		nomer = 0;
	}
	Book(const char* d, const char* c, int num, const char* ax, const char* g)
	{
		company = d;
		imya = c;
		nomer = num;
		adres = ax;
		Tip = g;
		count++;
		Save();
	}
	void Init()
	{
		cout << "Companiya: ";
		cin >> company;
		cout << "imya: ";
		cin >> imya;
		cout << "nomer: ";
		cin >> nomer;
		cout << "Adres: ";
		cin >> adres;
		cout << "Tip: ";
		cin >> Tip;
		count++;
		Save();
	}
	void Save()
	{
		ofstream out;
		out.open("File.txt", ios::app);
		out << "\n" << count << "\n" << "Companiya: " << company
			<< "\n" << "imya: " << imya << "\n" << "nomer: "
			<< nomer << "\n" << "Adres: " << adres
			<< "\n" << "Tip: " << Tip << "\n";
		out.close();
	}
};

int Book::count = 0;