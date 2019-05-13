#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, kol;
	cout << "Введите число: ";
	cin >> n;
	cout << "Введите количество цыфр, которые показать: ";
	cin >> kol;
	while (n < pow(10, (kol-1)))
	{
		cout << "Введно некорректное число. Введите количество цыфр, которые показать: ";
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
	cout << "Полученное число: " << n;
	system("pause");
	return 0;
}