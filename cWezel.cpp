#include "cProdukt.h"
#include "cWezel.h"

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
