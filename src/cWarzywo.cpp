#include "../headers/cWarzywo.h"
#include "../headers/cProdukt.h"
#include<iostream>

cWarzywo::cWarzywo(int L ,std::string N, int C, float P, std::string U, float V)
        :cProdukt(L, N, C, P, U, V)
{
}
cWarzywo::~cWarzywo()
{
}


