#include <iostream>
#include "for.h"

int podschet(int a, int b, int sum)
{
	sum = (a%b) ? (sum++) : (sum);
	return sum;
}