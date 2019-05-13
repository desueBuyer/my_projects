#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n, numstr, kstr;
	srand(time_t(NULL));
	cout << "¬ведите размер массива nxn: ";
	cin >> n;
	int** mass = new int*[n];
	for (int i = 1; i <= n; i++)
		mass[i] = new int[n];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			mass[i][j] = rand() % 10;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << mass[i][j] << setw(4);
		}
		cout << '\n';
	}
	cout << "¬ведите количесво столбцов дл€ обнулени€: ";
	cin >> kstr;
	if (kstr == n)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
				mass[i][j] = 0;
		}
	}
	else 
		for (int t = 1; t <= kstr; t++)
		{
			cout << "¬ведите номер " << t << " столбца дл€ обнулени€:";
			cin >> numstr;
			while (numstr >= n && numstr < 0)
			{
				cout << "¬веден некоррекный номер. ¬ведите номер " << t << " столбца дл€ обнулени€:";
				cin >> numstr;
			}
			for (int j = 1; j <= n; j++)
				mass[j][numstr] = 0;
		}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << mass[i][j] << setw(4);
		}
		cout << '\n';
	}
	system("pause");
	return 0;
}