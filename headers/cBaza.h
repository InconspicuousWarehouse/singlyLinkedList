#ifndef UNTITLED_CBAZA_H
#define UNTITLED_CBAZA_H
#include "cProdukt.h"
#include "cWezel.h"
#include<iostream>
#include<vector>
#include <fstream>

class cBaza
{
private:
    std::vector <int> mIntTabela;
    std::fstream file;
    std::string text = "";
    std::string filename;
    cBaza *produkt;
public:
    cBaza();
    ~cBaza();
    cWezel* PierwszyWsk;
    void Dodaj(cProdukt );
    void Pokaz();

    void operator + (cProdukt &p);

    cWezel* PierwszyWskINT;
    void dodajInt(int);
    void PokazINT();
    friend std::ostream & operator << (std::ostream &wyjscie, cBaza &baza);
};

#endif //UNTITLED_CBAZA_H
