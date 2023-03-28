#include "Ucesnik.h"

Ucesnik::Ucesnik()
{
	redniBr = poeniPublike= 0;
	imePrez = nullptr;

}
Ucesnik::Ucesnik(int rb, char* ime, int pp)
{
	redniBr = rb;
	imePrez = new char[strlen(ime) + 1];
	strcpy(imePrez, ime);
	poeniPublike = pp;
}

Ucesnik::~Ucesnik()
{
	if (imePrez != nullptr)
		delete[]imePrez;
	imePrez = nullptr;
}
void Ucesnik::prikaz(ostream& out)
{
	out << "redni broj: " << redniBr << " , ime i prezime:  " << imePrez << " , poeni publike: " << poeniPublike << endl;
}
int Ucesnik::getRedniBr()
{
	return redniBr;
}