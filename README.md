# Lista Jednokierunkowa

Projekt ten zawiera implementację struktury danych listy jednokierunkowej w języku C++. Głównym celem projektu jest praktyczna implementacja tej struktury.
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

***

# Singly Linked List
This project contains an implementation of a singly linked list data structure in C++. The main goal of the project is a practical implementation of this structure.
You will find various concepts here, such as inheritance, operator overloading, and method overriding, which have been used to enhance object-oriented programming skills.

## Classes:
### cBaza
Class representing a singly linked list. It provides methods for adding and displaying elements in the list.

### cProdukt
Class representing a product. It includes information such as catalog number, name, quantity, price, unit, and VAT.

### cWarzywo
Class representing a vegetable, which inherits from the cProduct class. It adds a method for specifying the color of the vegetable and overrides the 'Pokaz()' method to display the color.

### cWezel
Class representing a node in the singly linked list. It contains an object of the cProduct class or an integer value.
