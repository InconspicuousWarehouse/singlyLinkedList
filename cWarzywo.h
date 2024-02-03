#ifndef UNTITLED_CWARZYWO_H
#define UNTITLED_CWARZYWO_H
#include "cProdukt.h"
#include<iostream>

class cWarzywo :public cProdukt
{
private:
    std::string mKolor[20];
public:
    cWarzywo(int L= 10000 ,std::string N="Marchewka " , int C=300, float P=200, std::string U="USD ", float V=12);
    ~cWarzywo();

};

#endif //UNTITLED_CWARZYWO_H
