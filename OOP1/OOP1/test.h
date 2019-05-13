#include <iostream>
#ifndef TEST_H
#define TEST_H



using namespace std;

class test
{
private:
	int day, month, year;
public:
	test(int , int , int );
	void message();
	void data(int, int, int);
	void r_data();
};
#endif TEST_H