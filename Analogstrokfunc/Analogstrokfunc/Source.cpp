#include <string>
#include <iostream>
#include <ctype.h>

using namespace std;


int lengthString(char l);
/*char *reverseString(char *);
int balanceBrackets(char *);
int occurenceSubstring(char *, char *);
char *insertnString(char *, char *, int);
char *�utString(char *, int, int);*/

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "�������� ����� ������.\n������� ������: ";
	char l;
	cin>> l;
	lengthString(l);
	system("pause");
}

int lengthString(char l)
{
	char s = l;
	int k = 0;
	/*while (int(s) = 46 || int(s) != 33)
	{
		k++;
		cout << "������ ����������  " << k << " ��������\n";
	}
	cout << "������ ����������  "<< k<<" ��������\n";*/
	cout << int(s);
	return 0;
}
