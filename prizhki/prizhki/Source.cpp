#include <iostream>

using namespace std;

int main()
{
	const int n = 5, k = 3;
	float rez[n][k]; int num = 1, max = 0;
	for (int i = 1; i <= n; i++)
	{
		cout << "���������� " << i << "-�� ����������: ";
		for (int j = 1; j <= k; j++)
		{
			cin >> rez[i][j];
		}
	}
	cout << "������ ��������� � �����������: ";
	while (num)
}