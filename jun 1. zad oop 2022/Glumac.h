#pragma once
#include "Ucesnik.h"
class Glumac: public Ucesnik
{
private:
	int brRekvizita, poeniIdeja, poeniIzv;//poeni zirija za ideju i za izvodjenje
public:
	Glumac();
	Glumac(int rb, char* ime, int pp, int brR, int ideja, int izvodjenje);
	~Glumac();
	void prikaz(ostream&);
	int racunajPoeni();
	int pomocnoOsoblje();
	bool jelProsao();
	int GetPoeniziri();
};

