#include <iostream>

using namespace std;

int main()
{
	double i, j;
	cout << "enter double: "; cin >> i;
	cout << "enter another double: "; cin >> j;
	cout << "i>j is " << (i > j) << endl;
	cout << "i<j is " << (i < j) << endl;
	cout << "i>=j is " << (i >= j) << endl;
	cout << "i<=j is " << (i <= j) << endl;
	cout << "i==j is " << (i == j) << endl;
	cout << "i!=j is " << (i != j) << endl;
	cout << "i&&j is " << (i && j) << endl;
	cout << "i||j is " << (i || j) << endl;
	cout << "(i<10)&&(j<10) is " << ((i<10)&& (j<10)) << endl;
	system("pause");
}