#include <iostream>
#include <iomanip>
using namespace std; 

void addRightDigit(int chis)
{
	int d; 
	for (int i = 1; i <= 2; i++)
	{
		cout << "������� �����, ������ ������ ��������: "; cin >> d;
		chis *= 10; 
		chis += d;
		cout << "������������ ����� �����: " << chis<<'\n';
	}
}

int main()
{
	setlocale(LC_ALL, "ru"); 
	int nach; 
	cout << "������� �����: "; cin >> nach; 
	addRightDigit(nach);
	system("pause");
	return 0;
}