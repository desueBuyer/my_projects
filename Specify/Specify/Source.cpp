#include <iostream>

using namespace std;

int main()
{
	char c;
	unsigned char cu;
	int i;
	unsigned int iu;
	short int is;
	short iis;
	unsigned short isu;
	unsigned short iisu;
	long int il;
	long iil;
	unsigned long int ilu;
	unsigned long iilu;
	float f;
	double d;
	long double dl;
	cout << "\n char=" << sizeof(c)
		<< "\n unsigned char=" << sizeof(cu)
		<< "\n int=" << sizeof(i)
		<< "\n unsigned int=" << sizeof(iu)
		<< "\n short=" << sizeof(is)
		<< "\n unsigned short=" << sizeof(isu)
		<< "\n long=" << sizeof(il)
		<< "\n unsigned long=" << sizeof(ilu)
		<< "\n float=" << sizeof(f)
		<< "\n dounle=" << sizeof(d)
		<< "\n long double=" << sizeof(dl);
	system("pause");
}