#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "ru");
	int *p = new int[1];
	int *p1;
	int a = 0, size=0;
	while (a >= 0)
	{
		cout << "¬ведите число: ";
		cin >> a;
		if (a<0)
		{
			break;
		}
		if (size == 0)
		{
			p[size] = a;
			cout << p[size]<<endl;
			size++;
		}
		else
		{
			p1 = new int[size + 1];
			for (int j = 0; j < size; j++)
			{
				p1[j] = p[j];
			}
			p1[size] = a;
			delete p;
			p = new int[size + 1];
			for (int i = 0; i < (size + 1); i++)
			{
				p[i] = p1[i];
				cout << p[i] << '\t';
			}
			delete []p1;
			size++;
			cout << endl;
		}
	}
	delete[]p;
	system("pause");
	return 0;
}
