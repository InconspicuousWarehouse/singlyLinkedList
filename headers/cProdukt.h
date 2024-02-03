#ifndef CPRODUKT_H
#define CPRODUKT_H
#include<iostream>
#include<vector>

class cProdukt
{
private:
    std::string mName, mUnit;
    int mLp, mCount;
    float mPrice, mVat;
public:
    cProdukt(int= 66088 ,std::string="Przykladowy produkt " , int=500, float=20, std::string="PLN ", float=12);
    ~cProdukt();
    void Pokaz();
    virtual std::string feedback();

};

#endif // CPRODUKT_H