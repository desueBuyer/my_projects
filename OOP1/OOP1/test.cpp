#include <iostream>
using namespace std;
#include "test.h"

test::test(int r_date, int r_month, int r_year)
{
	data(r_date, r_month, r_year);
}
void test::message()
{
	cout << "Я ебал всех в рот\n Вот такой вот поворот\n";
}

void test::data(int r_day, int r_month, int r_year)
{
	day = r_day;
	month = r_month;
	year = r_year;
}

void test::r_data()
{
	cout << "Дата: " << day << "." << month << "." << year << endl;
}