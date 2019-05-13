#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	char s[100], sym, sym2; int max = 0, max1 = 0, dlin, k = 1;;
	cout << "Введите вашу строку: ";
	gets_s(s);
	dlin=strlen(s);
	for (int i = 1; i <=dlin; i++)
	{
		max1 = 0;
		for (int j = 1; j <= dlin; j++)
		{
			if (s[i] == s[j])
			{
				max1++;
				sym2 = s[i];
			}
		}
		if (max1 > max)
		{
			sym = sym2;
			max = max1;
		}
	}
	cout << "В данной строке чаще всего встречается " << sym << ". Встречается " << max << " раз.";
	system("pause");
	return 0;
}