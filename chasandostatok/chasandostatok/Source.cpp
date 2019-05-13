#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	/*int chis, del, chas;
	cout << "¬ведите делимое: ";
	cin >> chis;
	cout << "¬ведите делитель: ";
	cin >> del;
	chas = 0;
	if ((chis > 0) && (del>0))
	{
		while ((chis - del) > 0)
		{
			chis -= del;
			chas++;
		}
	}
	else
		if (chis > 0 && del < 0)
		{
			while ((chis - abs(del)) >=0)
			{
				chis -= abs(del);
				chas--;
			}
		}
		else 
			if (chis < 0 && del < 0)
			{
				while ((abs(chis) - abs(del)) >=0)
				{
					chis += abs(del);
					chas++;
				}
			}
			else
				if (chis < 0 && del > 0)
				{
					while ((abs(chis) - abs(del)) >=0)
					{
						chis+= del;
						chas--;
					}
				}

	cout << "„астное: " << chas << '\n' << "ќстаток: " << chis<<'\n';*/
	char s; int n = 119;
	s = 0;
	cout << s << endl;
	s = (char)n;
	cout << s << endl;
	n -= 3;
	s = (char)n;
	cout << s;
	system("pause");
	return 0;
}