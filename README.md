# Lista Jednokierunkowa

Projekt ten zawiera implementację struktury danych listy jednokierunkowej w języku C++. Głównym celem projektu jest doskonalenie umiejętności programistycznych poprzez praktyczną implementację tej struktury.
Znajdziesz tu różne koncepcje, takie jak dziedziczenie, przeciążanie operatorów oraz nadpisywanie metod, które zostały wykorzystane w celu doskonalenia umiejętności programowania obiektowego.

## Klasy:

### cBaza

Klasa reprezentująca listę jednokierunkową. Zapewnia metody do dodawania i wyświetlania elementów na liście.

### cProdukt

Klasa reprezentująca produkt. Zawiera informacje takie jak numer katalogowy, nazwa, ilość, cena, jednostka i VAT.

### cWarzywo

Klasa reprezentująca warzywo, która dziedziczy po klasie `cProdukt`. Dodaje metodę do uzupełniania koloru warzywa i nadpisuje metodę `Pokaz()` w celu wyświetlenia koloru.

### cWezel

Klasa reprezentująca węzeł w liście jednokierunkowej. Zawiera obiekt klasy `cProdukt` lub wartość całkowitą.
