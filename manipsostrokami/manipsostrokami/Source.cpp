#include <iostream>
#include <cstring>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "ru");
	char s[100]; int var = 0, dlin, k = 1;;
	cout << "Введите вашу строку:\n";
	gets_s(s);
	dlin = strlen(s);
	char *c = new char[dlin];
	for (int i = 1; i < dlin; i++)
		c[i] = s[i];
	while (!(var == 6))
	{
	cout << "Для преобразования строки В ЗАГЛАВНЫЕ БУКВЫ нажмите : 1\nДля преобразования строки в нижний регистр нажмите : 2\nДля преобразования строки с Заглавной Буквы нажмите : 3\nДля преобразования строки в пЕРВЫЙ сИМВОЛ в нИЖНЕМ рЕГИСТРЕ нажмите : 4\nДля преобразования строки как в обычном предложении нажмите : 5\nДля выхода нажмите : 6\n";
	cout << "Выберите действие ";
	cin >> var;
	   switch (var)
	   {
	   case 1:
	   {
		   for (int i = 0; i < dlin; i++)
		   {
			   if ((int)s[i] < 123 && (int)s[i] > 96)
			   {
				   int kod = (int)s[i];
				   kod -= 32;
				   c[i] = (char)kod;
			   }
			   cout << c[i];
		   }
		   cout << endl;
		   break;
	   }
	   case 2:
	   {
		    for (int i = 0; i < dlin; i++)
		   {
			   if ((int)s[i] < 91 && (int)s[i] > 64)
			   {
				   int kod = (int)s[i];
				   kod += 32;
				   c[i] = (char)kod;
			   cout << c[i];
			   }
			   else cout << s[i];
		   }
		  cout<< endl;
		   break;
	   }
	   case 3:
	   {
		   for (int i = 0; i < dlin; i++)
		   {

			   if (i == 0)
			   {
				   if ((int)s[i] < 123 && (int)s[i] > 96)
				   {
					   int kod = (int)s[i];
					   kod -= 32;
					   c[i] = char(kod);
					   cout << c[i];
				   }
				   else cout << s[i];
			   }
			   else if (k == 0)
			   {
				   if ((int)s[i] < 123 && (int)s[i] > 96)
				   {
					   int kod = int(s[i]);
					   kod -= 32;
					   c[i] = char(kod);
					   cout << c[i];
					   k++;
				   }
			   }
			   else if ((int)s[i] == 32)
			   {
				   k = 0;
				   cout << s[i];
			   }
			   if (!(i == 0) && !(k == 0) && !((int)s[i] == 32))
				   cout << s[i];
		   }
		   cout << endl;
		   break;
	   }
	   case 4:
	   {
		   for (int i = 0; i < dlin; i++)
		   {

			   if (i == 0)
			   {
				   if ((int)s[i] < 91 && (int)s[i] > 64)
				   {
					   int kod = (int)s[i];
					   kod -= 32;
					   c[i] = char(kod);
					   cout << c[i];
				   }
				   else cout << s[i];
			   }
			   else if (k == 0)
			   {
				   if ((int)s[i] < 91 && (int)s[i] > 64)
				   {
					   int kod = int(s[i]);
					   kod += 32;
					   c[i] = char(kod);
					   cout << c[i];
					   k++;
				   }
				   else cout << s[i];
				   k++;
			   }
			   else if ((int)s[i] == 32)
			   {
				   k = 0;
				   cout << s[i];
			   }
			   else if ((int)s[i] < 123 && (int)s[i] > 96)
				   {
					   int kod = (int)s[i];
					   kod -= 32;
					   c[i] = char(kod);
					   cout << c[i];
				   }
		   }
		   cout << endl;
		   break;
	   }
	   case 5:
	   {
		   for (int i = 0; i < dlin; i++)
		   {
			   if (i == 0)
			   {
				   if (int(s[i]) > 96 && int(s[i]) < 123)
				   {
					   int kod = (int)s[i];
					   kod -= 32;
					   c[i] = char(kod);
					   cout << c[i];
				   }
			   }
			   else cout << s[i];
		   }
		   break;
	   }
	   }
	}
	system("pause");
	return 0;
}