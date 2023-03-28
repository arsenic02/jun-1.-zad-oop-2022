#pragma once
#include "Glumac.h"
#include "Pevac.h"
class Evidencija
{
private:
	int tren, n;
	Ucesnik** takmicari;
public:
	Evidencija();
	Evidencija(int n);
	~Evidencija();
	void prikaz(ostream&);
	void dodaj(Ucesnik* u);
	void brisi(int rb);
	int nadjiSrednjuVr();
	int maxPoenaZiri();
	void sortiraj();//po broju pomocnog osoblja
	
};

