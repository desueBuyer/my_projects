#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include "Rabotnik.h"

using namespace std;

int main(int argc, char* argv[])
{
	Rabotnik rab;
	setlocale(LC_ALL, "ru");
	int exp, h_zp, hours; string name;
	cout << "Имя: "; cin >> name;
	cout << "Опыт работы: "; cin >> exp;
	cout << "Почасовая зп: "; cin >> h_zp;
	cout << "Отработанные часы: "; cin >> hours;
	rab.setRab(h_zp, exp, hours, name);
	rab.getRab();
	system("pause");
	return 0;
}