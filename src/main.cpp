#include "../headers/cProdukt.h"
#include "../headers/cWarzywo.h"
#include "../headers/cBaza.h"
#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
    // Tworzenie produkt
    cProdukt Obj1;
    cout<< "Przykladowy produkt: \n";
    Obj1.Pokaz();
    cout<< '\n';

    // Utowrzenie listy jednokierunkowej:
    cBaza p1;
    p1.Dodaj(Obj1);// Dodawanie Kolejnego prduktu:(tutaj kopja 1. produktu)
    cout << "################################################################"<< endl;

    // Wyswietlenie na 2 sposoby produktu z listy jednokierunkowej
    cout<<"Produkt dodany do listy jednokierunkowej, wyswietlany na 2 sposoby:\n"<< p1 << '\n';
    p1.Pokaz();
    cout << "################################################################"<< endl;

    cWarzywo Obj2;
    // Dodanie warzywa do listy jednokierunkow
    p1.Dodaj(Obj2);
    cout << "Lista jednokierunkowa z dodanymi produktami (przykladowy produkt i produkt dzidziczacy(tutaj Marchewka):\n";
    p1.Pokaz();
    cout << "################################################################"<< endl;

    p1+Obj2; //dolaczenie warzywa do listy jednokierunkowej - wykorzystanie przeciążonego operatora + dla klasy Baza
    cout << endl << "Warzywo dodane do listy jednokierunkowej:(na liscie juz byl przykladowy produkt oraz Marchewka i teraz dodajemy jeszcze jedna Marchewke)"
    << endl << p1;// Przeciążenie operatora <<, wyswietlenie dolaczonego warzywa do listy jednokierunkowej

    cBaza pInt; // Dodawanie Kolejnych Integer-ow:
    cout << "\nKilka cyfr dodanych na koniec listy jednokierunkowej:\n";
    pInt.dodajInt(5);
    pInt.dodajInt(7);
    pInt.dodajInt(9);
    pInt.PokazINT();

    cout << "Nacisnij dowolny klawisz, aby zakonczyc program...";
    getch();
    return 0;

}
