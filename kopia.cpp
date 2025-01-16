/* Napisz program pozwalający obliczyć pola powierzchni i obwody pomieszczeń w mieszkaniu.
Załóż, że każde z pomieszczeń ma kształt prostokąta, a ich liczba wynosi 4.
Wykorzystaj zdefiniowaną samodzielnie klasę Prostokat. Obiekty odpowiadające poszczególnym pomieszczeniom w mieszkaniu utwórz i zainicjuj wartościami domyślnymi
z użyciem konstruktora kopiującego. */
#include <iostream>
using namespace std;

class Pokoj
{
public:
    float dlugosc, szerokosc;
    float pole()
    {
        return (float)dlugosc * szerokosc;
    }
    float obwod()
    {
        return (float)2 * dlugosc + 2 * szerokosc;
    }
    Pokoj()
    {
    }
    Pokoj(const Pokoj *pokoj)
    {
        dlugosc = pokoj->dlugosc;
        szerokosc = pokoj->szerokosc;
    }
    void display()
    {
        cout << "Szerokosc " << szerokosc << " dlugosc " << dlugosc << endl;
        cout << obwod() << " obwod" << endl;
        cout << pole() << " pole" << endl;
    }
};

int main()
{
    Pokoj pokoj1;
    cout << "Podaj dlugosc ";
    cin >> pokoj1.dlugosc;
    cout << "Podaj szerokosc ";
    cin >> pokoj1.szerokosc;
    Pokoj pokoj2(pokoj1), pokoj3(pokoj1), pokoj4(pokoj1);
    pokoj4.display();
    return 0;
}