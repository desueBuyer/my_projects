#include <iostream>
#include "prizm.h"
using namespace std;

int main(int argv, char* argc[])
{
	setlocale(LC_ALL, "ru");
	prizm prizm;
	int i, k = 0;
	while (k==0)
	{
		cout << "Сделайте выбор: \n0-выход; 1 - показать высоту призмы\n2 - gказать количество боковых граней 3 - показать площадь основания;\n4 - показать длину сторон призмы; 5 - показать объем призмы;\n6 - установить высоту призмы; 7 - установить длину сторон призмы;\n8 - установить количество граней; 9 - задать площадь основания\n<<";
		cin >> i;
		switch (i)
		{
		case 0:
		{
			k++;
			continue;
		}
		case 1:
		{
			prizm.getH_prizm();
			continue;
		}
		case 2:
		{
			prizm.getK_storon();
			continue;
		}
		case 3:
		{
			prizm.getS_osn();
			continue;
		}
		case 4: 
		{
			prizm.getDlin();
			continue;
		}
		case 5:
		{
			prizm.V();
			continue;
		}
		case 6:
		{
			float h;
			cout << ":=";
			cin >> h;
			prizm.setH_prizm(h);
			continue;
		}
		case 7:
		{
			float dlin;
			cout << ":=";
			cin >> dlin;
			prizm.setDlin(dlin);
			continue;
		}
		case 8:
		{
			int K;
			cout << ":=";
			cin >> K;
			prizm.setK_storon(K);
			continue;
		}
		case 9:
		{
			float S;
			cout << ":=";
			cin >> S;
			prizm.setS_osn(S);
			continue;
		}
		}
	}
	cout << "До свидания!!!\n";
	system("pause");
}