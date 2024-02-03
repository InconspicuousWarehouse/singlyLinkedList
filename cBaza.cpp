#include "cWezel.h"
#include "cBaza.h"
#include "cProdukt.h"
#include<vector>
#include<iostream>

using namespace std;
cBaza::cBaza()
{
    PierwszyWsk=nullptr;
    PierwszyWskINT=nullptr;// Konstruktor Integer-ów
}
cBaza::~cBaza()
{
    // Usunięcie wszystkich elementów z listy jednokierunkowej
    while (PierwszyWsk != nullptr) {
        cWezel* temp = PierwszyWsk;
        PierwszyWsk = PierwszyWsk->NastepnyWezel;
        delete temp;
    }
}
//Dodawanie Produktu
void cBaza::Dodaj(cProdukt Produkt)
{
    if (PierwszyWsk == nullptr)
    {
        PierwszyWsk = new cWezel(Produkt);
        return;
    }
    cWezel* PomocniczyWsk = PierwszyWsk;
    PierwszyWsk = new cWezel(Produkt);
    PierwszyWsk->NastepnyWezel = PomocniczyWsk;
}
void cBaza::Pokaz()
{
    for ( cWezel* wsk_i = PierwszyWsk; wsk_i != nullptr; wsk_i =wsk_i -> NastepnyWezel )
    {
        wsk_i->NowyProdukt.Pokaz();
    }
}
void cBaza::dodajInt(int n)// Dodawanie Integer-ów
{
    if (PierwszyWskINT == nullptr)
    {
        PierwszyWskINT = new cWezel(n);
        return;
    }
    cWezel* PomocniczyWskINT = PierwszyWskINT;
    PierwszyWskINT = new cWezel(n);
    PierwszyWskINT->NastepnyWezelINT = PomocniczyWskINT;
}
void cBaza::PokazINT()
{
    for ( cWezel* wsk_a = PierwszyWskINT; wsk_a != nullptr; wsk_a =wsk_a -> NastepnyWezelINT )
    {
        cout << wsk_a->NowyProduktINT << endl;
    }
}
////////////////////////// Przeciazanie operatorow //////////////////////////
ostream & operator<< (ostream &wyjscie2, cBaza &baza)
{
    string pomocString;
    cWezel *wsk_cWezel;
    wsk_cWezel = baza.PierwszyWsk;
    while (wsk_cWezel != nullptr)
    {
        pomocString = pomocString + wsk_cWezel->NowyProdukt.feedback();
        wsk_cWezel = wsk_cWezel->NastepnyWezel;
    }
    return wyjscie2 << pomocString;
}
void cBaza::operator+(cProdukt &p)
{
    Dodaj(p);
}



