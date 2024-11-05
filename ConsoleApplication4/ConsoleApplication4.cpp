#include <iostream>
#include <string>
#include<windows.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include"Header.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ofstream fout;
    ifstream fin;
    Student Ivan = {1, "Фёдоров", "Иван", "Васильевич", 'м', 17, 1.65};
    Student Anna = {2, "Смирнова", "Анна", "Фёдоровна", 'ж', 18, 1.79};
    fout_(Ivan);
    cout_(Ivan);
    fout_(Anna);
    cout_(Anna);
    Student Kiril;
    cout_(Kiril);
    
    
}