#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i;
	
	cout << "type a number and 'Enter'" << endl;
	cin >> i;
	cout << ((i > 5) ? "Its gteater then 5\n" : ((i = 5) ? "Its equial  5\n" : "its less then 5\n"));
	cout << "type a number and 'Enter'" << endl;
	cin >> i;
	cout << ((i > 10) ? "i>10\n" : ((i > 5) ? "5<i<10\n" : "i<=5\n"));
	system("pause");
}