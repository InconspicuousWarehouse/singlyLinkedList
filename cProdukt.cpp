#include "cProdukt.h"
#include<vector>
#include<iostream>
#include<sstream>

using namespace std;

cProdukt::cProdukt(int L, string N, int C, float P, string U, float V)
{
    mLp=L; mName=N; mCount=C; mPrice=P; mUnit=U; mVat=V;
}
cProdukt::~cProdukt()
{
}
void cProdukt::Pokaz()
{
    cout <<"Numer katalogowy produktu: "<<mLp<<endl<<"Nazwa produktu: "<<mName<<endl<<"Ilosc produktu np. w magazynie: "<< mCount
    <<endl<<"Cena produktu: "<< mPrice <<" "<< mUnit<<endl<<"VAT: "<<mVat<<"%"<<endl<<endl;
}
ostream & operator << (ostream &pWyjscie, cProdukt &pProdukt)
{
    return pWyjscie << pProdukt.feedback();
}
string cProdukt::feedback()
{
    string wyjscie;
    stringstream additionalString;
    additionalString<<"Numer katalogowy produktu: "<<mLp<<endl<<"Nazwa produktu: "<<mName<<endl<<"Ilosc produktu np. w magazynie: "<< mCount
    <<endl<<"Cena produktu: "<< mPrice <<" "<< mUnit<<endl<<"VAT: "<<mVat<<"%"<<endl<<endl;
    wyjscie=additionalString.str();
    return wyjscie;
}
