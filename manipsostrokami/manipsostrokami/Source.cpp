#include <iostream>
#include <cstring>

using namespace std; 

int main()
{
	setlocale(LC_ALL, "ru");
	char s[100]; int var = 0, dlin, k = 1;;
	cout << "������� ���� ������:\n";
	gets_s(s);
	dlin = strlen(s);
	char *c = new char[dlin];
	for (int i = 1; i < dlin; i++)
		c[i] = s[i];
	while (!(var == 6))
	{
	cout << "��� �������������� ������ � ��������� ����� ������� : 1\n��� �������������� ������ � ������ ������� ������� : 2\n��� �������������� ������ � ��������� ����� ������� : 3\n��� �������������� ������ � ������ ������ � ������ �������� ������� : 4\n��� �������������� ������ ��� � ������� ����������� ������� : 5\n��� ������ ������� : 6\n";
	cout << "�������� �������� ";
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