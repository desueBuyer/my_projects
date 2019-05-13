#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "¬ведите N: ";
	cin >> n;
	string* s = new string[n];
	for (int i = 0; i <n; i++)
		getline(cin, s[i]);
	for (int i = 0; i <n; i++)
		cout << s[i] << endl;
	system("pause");
}