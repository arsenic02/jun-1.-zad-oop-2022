#include "Evidencija.h"
#include <fstream>
void main()
{
	ofstream izlaz("takmicenje.txt");
	Evidencija* e1 = new Evidencija(6);
	for (int i = 0; i < 3; i++)
	{
		Ucesnik* t1 = new Glumac(i+1, (char*)"Pera Peric", rand() % 101, rand() % 20, rand() % 51, rand() % 51);
		Ucesnik* t2 = new Pevac(2*i, (char*)"Mira Miric", rand() % 101, rand() % 12, rand() % 6, rand() % 101,(char*)"Zal");
		e1->dodaj(t1);
		e1->dodaj(t2);
	}
	e1->prikaz(cout);
	cout << endl << endl;
	e1->brisi(3);
	cout << "Nakon brisanja, evidencija izgleda: " << endl<<endl;
	e1->prikaz(cout);
	cout << endl << endl;
	cout << "Srednja vrednost ukupnog broja poena svih ucesnika : " << e1->nadjiSrednjuVr() << endl<<endl;
	cout << "Ucesnik sa max poena je: " << e1->maxPoenaZiri() << endl << endl;//prikazuje se njegov redni broj 
	e1->sortiraj();
	e1->prikaz(izlaz);
	izlaz.close();
	e1->prikaz(cout);
	delete e1;


}