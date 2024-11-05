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
	cout << "¬ведите id\n";
	cin >> st.id;
	cout << "¬ведите f\n";
	cin >> st.f;
	cout << "¬ведите i\n";
	cin >> st.i;
	cout << "¬ведите o\n";
	cin >> st.o;
	cout << "¬ведите pol\n";
	cin >> st.pol;
	cout << "¬ведите age\n";
	cin >> st.vozr;
	cout << "¬ведите rost\n";
	cin >> st.rost;
	fout.open("file.txt", ios::app);
	fout << st.id << " " << st.f << " " 
	<< st.i << " " << st.o << " "
	<< st.pol << " " << st.vozr << " " 
	<< st.rost << endl;
}