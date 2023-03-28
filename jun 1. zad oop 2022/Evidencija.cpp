#include "Evidencija.h"

Evidencija::Evidencija()
{
	tren = n = 0;
	takmicari = nullptr;
}
Evidencija::Evidencija(int n)
{
	tren = 0;
	this->n = n;
	takmicari = new Ucesnik * [n];
}

void Evidencija::prikaz(ostream& out)
{
	for (int i = 0; i < tren; i++)
		takmicari[i]->prikaz(out);
}

void Evidencija::dodaj(Ucesnik* u)
{
	if (tren < n)
		takmicari[tren++] = u;
}

void Evidencija::brisi(int rb)
{
	int i = 0;
	while (i < tren && takmicari[i]->getRedniBr() != rb)
		i++;
	delete takmicari[i];
	for (int j = i; j< tren - 1; j++)
		takmicari[j] = takmicari[j + 1];
	tren--;
}

int Evidencija::nadjiSrednjuVr()
{
	int i,srednja=0;
	for (i = 0; i < tren; i++)
	{
		if (takmicari[i]->jelProsao() == 1)
			srednja += takmicari[i]->racunajPoeni();
	}
	return srednja / i;
}

int Evidencija::maxPoenaZiri()
{
	int i,max = 0;
	for (i = 1; i < tren; i++)
	{
		if (takmicari[i]->GetPoeniziri() > takmicari[max]->GetPoeniziri())
			max = i;
	}
	return takmicari[i]->getRedniBr();
}
void Evidencija::sortiraj()
{
	int i, j,max,pom;
	for (j = 0; j < n - 1; j++)
	{
		max = j;
		for (i = j + 1; i < n; i++)
			if (takmicari[max]->pomocnoOsoblje() < takmicari[i]->pomocnoOsoblje())
				max = i;
		Ucesnik* pom = takmicari[j];
		takmicari[j] = takmicari[max];
		takmicari[max] = pom;
	}
}

Evidencija::~Evidencija()
{
	if (takmicari != nullptr)
	{
		for (int i = 0; i < tren; i++)
			delete takmicari[i];
		delete[]takmicari;
	}
}