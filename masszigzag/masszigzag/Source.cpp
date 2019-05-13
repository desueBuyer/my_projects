#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int n;
	cout << "¬ведите размер матрицы NxN: "; cin >> n;
	int** p1 = new int*[n];
	int** p2 = new int*[n];
	for (int i = 1; i <= n; i++)
	{
		p1 = new int*[n];
		p2 = new int*[n];
	}

}