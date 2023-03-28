#include "Pevac.h"

Pevac::Pevac(int rb, char* ime, int pp, int bi, int bv, int pmz,char* song): Ucesnik(rb, ime, pp)
{
	brInstr = bi;
	brVokala = bv;
	poeniMuzZiri = pmz;
	pesma = new char[strlen(song) + 1];
	strcpy(pesma, song);
}

Pevac::Pevac() :Ucesnik()
{
	brInstr = brVokala = poeniMuzZiri = 0;
	pesma = nullptr;
}

Pevac::~Pevac()
{
	if (pesma != nullptr)
		delete[]pesma;
	pesma = nullptr;
}
int Pevac::racunajPoeni()
{
	return poeniPublike + poeniMuzZiri;
}
int Pevac::pomocnoOsoblje()
{
	return brVokala + brInstr;
}

bool Pevac::jelProsao()
{
	if ((poeniMuzZiri) > 50)
	{
		int vr = Pevac::racunajPoeni();
		if (vr > 100)
			return 1;
		// else return 0;
	}
	return 0;
}
int Pevac::GetPoeniziri()
{
	return poeniMuzZiri;
}

void Pevac::prikaz(ostream& out)
{
	out << "Pevac -> (Broj instr.,broj vokala,poeni muz. zirija,pesma) = ( ";
	out << brInstr << " , " << brVokala << " , " << poeniMuzZiri << " , " << pesma << " )" << endl ;
	Ucesnik::prikaz(out);
	out << endl;
}
