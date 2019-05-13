#include <iostream>
#include "prizm.h"

using namespace std;


void prizm::setDlin(float dlin)
{
	dl_storon = dlin;
}
void prizm::setH_prizm(float H)
{
	h_prizm = H;
}
void prizm::setK_storon(int kol)
{
	k_storon = kol;
}
void prizm::setS_osn(float S)
{
	s_osn = S;
}
void prizm::getDlin()
{
	cout << ":=" << dl_storon<<endl;
}
void prizm::getH_prizm()
{
	cout << ":=" << h_prizm;
}
void prizm::getK_storon()
{
	cout << ":=" << k_storon << endl;;
}
void prizm::getS_osn()
{
	cout << ":=" << s_osn<<endl;
}
void prizm::V()
{
	v_prizm = s_osn * h_prizm;
	cout << "Îבתול ןנטחלû :=" << v_prizm<<endl;
}
