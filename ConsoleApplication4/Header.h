#pragma once
#include <iostream>
#include <string>
#include<windows.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include"Header.h"
using namespace std;

struct Student
{ int id{}; 
string f{};
string i{}; 
string o{};
char pol{}; 
int vozr{};
float rost{}; 
};
void fout_(Student st)
{	ofstream fout;
fout.open("student.txt", ios::app);
fout << st.f << " " << st.i << " "
<< st.o << " " << st.pol << " "
<< st.vozr << " " << st.rost << endl;
fout.close();
}
void cout_(Student st) {
	ofstream fout;
	cout << "������� id\n";
	cin >> st.id;
	cout << "������� f\n";
	cin >> st.f;
	cout << "������� i\n";
	cin >> st.i;
	cout << "������� o\n";
	cin >> st.o;
	cout << "������� pol\n";
	cin >> st.pol;
	cout << "������� age\n";
	cin >> st.vozr;
	cout << "������� rost\n";
	cin >> st.rost;
	fout.open("file.txt", ios::app);
	fout << st.id << " " << st.f << " " 
	<< st.i << " " << st.o << " "
	<< st.pol << " " << st.vozr << " " 
	<< st.rost << endl;
}