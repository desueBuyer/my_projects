#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, kol;
	cout << "������� �����: ";
	cin >> n;
	cout << "������� ���������� ����, ������� ��������: ";
	cin >> kol;
	while (n < pow(10, (kol-1)))
	{
		cout << "������ ������������ �����. ������� ���������� ����, ������� ��������: ";
		cin >> kol;
	}
	if (kol<3)
	{
		for (int i = 0; i <= kol; i++)
		{
			n /= 10;
		}
	}
	else
	for (int i = 1; i <= kol; i++)
	{
		n /= 10;
	}
	cout << "���������� �����: " << n;
	system("pause");
	return 0;
}