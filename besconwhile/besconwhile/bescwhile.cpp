#include <string>
#include <vector>
#include <fstream>
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	vector<string> s;
	string line;
	ifstream in("bescwhile.cpp");
	while (getline(in, line))
		s.push_back(line);
	int i = s.size();
	int k = 1;
	while (!(k == RAND_MAX))
	{
		k = rand() % 18;
		switch (k)
		{
		case 1:
		{
			cout <<k<<'\t'<<s[k - 1] << endl;
			cout << "Включаем библиотеку\n";
			break;
		}
		case 2:
		{
			cout << k << '\t' <<s[k - 1] << endl;
			cout << "Включаем библиотеку\n";
			break;
		}
		case 3:
		{
			cout << k << '\t' <<s[k - 1] << endl;
			cout << "Включаем библиотеку\n";
			break;
		}
		case 4:
		{
			cout << k << '\t'<< s[k - 1] << endl;
			cout << "Включаем библиотеку\n";
			break;
		}
		case 5:
		{
			cout << k << '\t'<< s[k - 1] << endl;
			cout << "Включаем библиотеку\n";
			break;
		}
		case 6:
		{
			cout << k << '\t'<<s[k - 1] << endl;
			cout << "Вводим std\n";
			break;
		}
		case 7:
		{
			cout << k << '\t' <<s[k - 1] << endl;
			cout << "Идентификация функции main \n";
			break;
		}
		case 8:
		{
			k = RAND_MAX;
			break;
		}
		}
	}
	system("pause");
	return 0;
}