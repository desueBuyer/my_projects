#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;

class Rabotnik
{
private:
	int exp, h_zp, hours, o_zp, EXP; double prem; string s_name;
public:
	void setRab(int, int,  int,  string);
	void getRab();
};