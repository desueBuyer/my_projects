#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	srand(time(NULL));
	const int n= 25;
	vector<float> v, c, d; float a[n], b[n], h;
	for (int i = 0; i <n; i++)
	{
		a[i] = ((float)rand() / RAND_MAX) *10 ;
		v.push_back(a[i]);
		b[i]= ((float)rand() / RAND_MAX) * 10;
		c.push_back(b[i]);
	}
	cout << "\nVector V:\n";
	for (int i = 0; i <n; i++)
	{
		cout << fixed<< setprecision(3)<< v[i] << setw(6);
	}
	cout << "\nVector C:\n";
	for (int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(3) << c[i] << setw(6);
	}
	cout << '\n';
	for (int i = 0; i < n; i++)
	{
		h = v[i] + c[i];
		d.push_back(h);
	}
	cout << "\nVector V:\n";
	for (int i = 0; i < n; i++)
	{
		cout << fixed << setprecision(3) << d[i] <<'\t';
	}
	cout << '\n';
	system("pause");
}