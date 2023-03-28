#pragma once
#include "Ucesnik.h"
class Pevac: public Ucesnik
{
private:
	char* pesma;
	int brInstr,brVokala,poeniMuzZiri;
public:
	Pevac();
	Pevac(int rb, char* ime, int pp, int bi, int bv, int pmz,char* song);
	~Pevac();
	int racunajPoeni();
	int pomocnoOsoblje();
	bool jelProsao();
	int GetPoeniziri();
	void prikaz(ostream&);
};

