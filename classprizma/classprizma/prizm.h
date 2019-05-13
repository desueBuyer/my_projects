#pragma once
class prizm
{
private:
	float s_osn=0,
		dl_storon=0,
		h_prizm=0,
		v_prizm=0;
	int k_storon=4;
public:

	void setDlin(float);
	void setK_storon(int);
	void setS_osn(float);
	void setH_prizm(float);
	void getDlin();
	void getS_osn();
	void getH_prizm();
	void getK_storon();
	void V();
};