#pragma once
#include <iostream>
using namespace std;
#include <string.h>
class Ucesnik
{
protected:
	int redniBr,poeniPublike;
	char* imePrez;
public:
	Ucesnik();
	Ucesnik(int, char*, int);
	virtual ~Ucesnik();
	virtual void prikaz(ostream&);
	virtual int racunajPoeni() = 0;
	virtual int pomocnoOsoblje()=0;//broj pomocnog osoblja
	virtual int getRedniBr();
	virtual bool jelProsao()=0;
	virtual int GetPoeniziri()=0;
};

