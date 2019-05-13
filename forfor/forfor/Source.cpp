#include <iostream>
#include "for.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n ;
	cout << "Введите число: "; cin >> n;
	for (int i = 2; i <= n; i++)
	{
		int sum = 0;
		for (int j = 1; j <= i; j++)
		{
			
			if (i%j == 0)
			{
				sum++;
			}
		}
		if (sum == 2)
		{
			cout << "Число " << i << "  является простым\n";
		}
	}
	system("pause");
}