#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <fstream>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "ru");
	int otv , *p1, *p2, r_p1 = 1, r_p2=2;
	string *s1, *s2;
	p1 = new int[r_p1];
	s1 = new string[r_p1];
	cout << "Имя: "; 
	cin >> s1[0];
	cout << "Возраст: ";
	cin >> p1[0];
	cout << "Элементы структуры объекта Р :" << s1[0] << '\t' << p1[0]<<endl;
	cout << "Внести еще данные — 1, выход — 0:"; 
	cin >> otv;
	/*ofstream txt;
	txt.open("Bazap.txt", ios_base::app);
	txt<< "Элементы структуры объекта Р :" << s1[0] << '\t' << p1[0] << endl;
	txt.close();*/
	while (otv == 1)
	{
		p2 = new int[r_p2];
		s2 = new string[r_p2];
		if (r_p1 = 1)
		{
			s2[0] = s1[0];
			p2[0] = p1[0];
		}
		else
		{
			for (int i = 0; i <r_p1; i++)
			{
				p2[i] = p1[i];
				s2[i] = s1[i];
			}
		}
		r_p1++;
		delete[]p1;
		delete[]s1;
		p1 = new int[r_p1];
		s1 = new string[r_p1];
		cout << "Имя: "; cin >> s2[r_p1];
		cout << "Возраст: "; cin >> p2[r_p1];
		for (int i = 1; i <= r_p2; i++)
		{
			cout << i << "-е элементы  структуры  объекта Р:" << p2[i] << '\n' << s2[i];
			p1[i] = p2[i];
			s1[i] = s2[i];
		}
		r_p2++;
		delete[]p2;
		delete[]s2;
	}
	system("pause");
	return 0;
}