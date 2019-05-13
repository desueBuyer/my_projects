#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

#include "Rabotnik.h"

    void Rabotnik::setRab( int r_zp, int t_exp, int t_time, string t_name)
	{
		s_name = t_name;
		h_zp = r_zp;
		hours = t_time;
		EXP = t_exp;
		o_zp = hours * h_zp;
		if (EXP < 1)
			prem = 0;
		else if (EXP < 3 && EXP>=1)
			prem = o_zp * 0.05;
		else if (EXP >= 3 && EXP < 5)
			prem = o_zp * 0.08;
		else if (EXP >=5)
			prem = o_zp * 0.15;
	}
	void Rabotnik::getRab()
	{
		cout << s_name << "\n���� ������ ����������: " << EXP << "\n��������� ������ ����������: " << h_zp << "\n����������� ����� ����������: " << hours <<"\n���������� ����� ��������: "<<o_zp<<"\n������ ����������: " << prem << endl;
		ofstream text;
		text.open("Rab.txt", ios_base::app);
		text << s_name << "\n���� ������ ����������: " << EXP << "\n��������� ������ ����������: " << h_zp << "\n����������� ����� ����������: " << hours << "\n���������� ����� ��������: " << o_zp << "\n������ ����������: " << prem << endl;
		text.close();
		cout << "���� ����������� ������ � ���� Rab.txt\n"; 
	}
