#include "Glumac.h"
Glumac::Glumac(int rb, char* ime, int pp, int brR, int ideja, int izvodjenje): Ucesnik(rb, ime, pp)
{
	brRekvizita = brR;
	poeniIdeja = ideja;
	poeniIzv = izvodjenje;
}

Glumac::Glumac() : Ucesnik()
{
	brRekvizita = poeniIdeja = poeniIzv = 0;
}

Glumac::~Glumac() { }

void Glumac::prikaz(ostream& out)
{
	out << "Glumac: broj rekvizita,poeni za ideju,poeni za izvodjenje) = ( ";
	out << brRekvizita << ", " << poeniIdeja << ", " << poeniIzv << " )" << endl;
	Ucesnik::prikaz(out);
	out << endl;
}

int Glumac::racunajPoeni()
{
	return poeniIdeja + poeniIzv + poeniPublike;
}

int Glumac::pomocnoOsoblje()
{
	return brRekvizita / 2;
}
bool Glumac::jelProsao()
{
	if ((poeniIdeja + poeniIzv) > 50)
	{
		int vr = Glumac::racunajPoeni();
		if (vr > 100)
			return 1;
		// else return 0;
	}
	return 0;
}
int Glumac::GetPoeniziri()
{
	return poeniIzv + poeniIdeja;
}