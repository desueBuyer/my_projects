#include <iostream>
#include "test.h"
using namespace std;



int main(int argc, char* argv[])
{ 
	setlocale(LC_ALL, "ru");
	test objCpp(5, 10, 1019);
	objCpp.message();
	objCpp.r_data();
	system("pause");
	return 0;
}