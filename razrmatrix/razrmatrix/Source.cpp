#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int a, b, a1, b1, var, otv=1;
	cout << "Введите размеры первой матрицы.\nСтроки: ";
	cin >> a;
	cout << "Столбцы: ";
	cin >> b;
	int** p1 = new int*[a];
	for (int i = 1; i <= a; i++)
	{
		p1[i] = new int[b];
	}
	cout << "Первая матрица:\n";
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (rand() % 10 > 2)
				p1[i][j] = 0;
			else
				p1[i][j] = rand() % 10;
			cout << p1[i][j] << setw(3);
		}
		cout << '\n';
	}
	cout << "Введите размеры второй матрицы.\nСтроки: ";
	cin >> a1;
	cout << "Столбцы: ";
	cin >> b1;
	int** p2 = new int*[a1];
	for (int i = 1; i <= a1; i++)
	{
		p2[i] = new int[b1];
	}
	cout << "Вторая матрица:\n";
	for (int i = 1; i <= a1; i++)
	{
		for (int j = 1; j <= b1; j++)
		{
			if (rand() % 10 > 2)
				p2[i][j] = 0;
			else
				p2[i][j] = rand() % 10;
			cout << p2[i][j] << setw(3);
		}
		cout << '\n';
	}

	while (otv == 1)
	{
		cout << "Какую операцию вы ходите произвести?\n1.Сложение матриц.\n2.Вычитание матриц.\n";
		cin >> var;
		switch (var)
		{
		case 1:
		{
			if (a == a1 && b == b1)
			{
				cout << "Массив, полученный сложением: \n";
				int** c = new int*[a];
				for (int i = 1; i <= a; i++)
				{
					c[i] = new int[b];
				}
				for (int i = 1; i <= a; i++)
				{
					for (int j = 1; j <= b; j++)
					{
						c[i][j] = p1[i][j] + p2[i][j];
						cout << c[i][j] << setw(4);
					}
					cout << endl;
				}
			}
			else
				cout << "Массивы разных порядков, поэтому сложение матриц невозможно.";
			break;
		}
		/*case 2:
		{
			if (a == b1)
			{
				int** c = new int*[a];
				for (int i = 1; i <= a; i++)
				{
					c[i] = new int[b];
				}
				for (int i = 1; i <= a; i++)
				{
					for (int j = 1; j <= b; j++)
					{

					}
				}
			}
		}
		}*/
		
		}
		cout << "Повторить операцию? 1 - ДА. 2 -НЕТ.";
		cin >> otv;
	}
system("pause");
		return 0;
}
