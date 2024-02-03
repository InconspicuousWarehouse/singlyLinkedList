#include "../headers/cProdukt.h"
#include "../headers/cWezel.h"

//Dodawanie Produktu
cWezel::cWezel(cProdukt WyslanyProdukt)
{
    NastepnyWezel= nullptr;
    NowyProdukt = WyslanyProdukt;
}
cWezel::cWezel(int I)
{
    NastepnyWezelINT= nullptr;
    NowyProduktINT = I;
}
cWezel::~cWezel() {

}
