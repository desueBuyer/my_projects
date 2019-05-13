#include "Func.h"
#include <iostream>

using namespace std;

int func1(int a, char c)
{
	cout << "Name: func1\nVar: int a="<<a<<", int c="<<c<<"\nType: int\n";
	return 0;
}
void func2(float f) 
{
	cout << "Name: func2\nVar: float f="<<f<<"\nType: void\n";
	
}
char func3(char s, float b, int k)
{
	cout << "Name: func3\nVar: char s="<<s<<", float b="<<b<<", int k="<<k<<"\nType: char\n";
	return 0;
}
float func4()
{
	cout << "Name: func4\nVar: no var\nType: float\n";
	return 0;
}