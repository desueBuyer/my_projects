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
	cout << "���: "; cin >> name;
	cout << "���� ������: "; cin >> exp;
	cout << "��������� ��: "; cin >> h_zp;
	cout << "������������ ����: "; cin >> hours;
	rab.setRab(h_zp, exp, hours, name);
	rab.getRab();
	system("pause");
	return 0;
}