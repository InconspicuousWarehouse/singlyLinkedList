#ifndef UNTITLED_CWEZEL_H
#define UNTITLED_CWEZEL_H
#include "cProdukt.h"
#include<iostream>

class cWezel {
public:
    //Dodawanie Produktu
    cWezel* NastepnyWezel;
    cProdukt NowyProdukt;
    cWezel(cProdukt);

    cWezel* NastepnyWezelINT;
    int NowyProduktINT;
    cWezel(int);
    ~cWezel();
};

#endif //UNTITLED_CWEZEL_H
