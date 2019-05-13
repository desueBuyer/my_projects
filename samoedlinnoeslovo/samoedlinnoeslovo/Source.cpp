#include <iostream>
#include <cstring>
#include <cctype>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "ru");
	char s[1000], *s2, character;
	int dlin1;
	gets_s(s);
	int max = 0;
	int dlin = strlen(s);
	s2 = new char[dlin];
	int k = 1;
	for (int i = 1; i < dlin; i++)
	{
		character = s[i];
		if (isspace(character))
		{
			dlin1 = i - 1;
			if (dlin1 > max)
			{
				max = dlin1;
				delete[]s2;
				 s2 = new char[dlin1];
				for (int j=k; j<i; j++)
				{
					s2[j] = s[j];
				}
				k = i + 1;
			}
		}
	}
	cout << "Самое длинное слово состоит из " << max << " символов: "<<s2<<endl;
	
	system("pause");
	return 0;
}