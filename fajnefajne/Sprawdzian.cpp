#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct struktura
{
    int wiek;
    string imie;
};

void wypelnijUzytkownika(struktura *tablicaDoWypełnienia, int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << "Podaj wiek" << endl;
        cin >> tablicaDoWypełnienia[i].wiek;
        cout << "podaj imie" << endl;
        cin >> tablicaDoWypełnienia[i].imie;
    }
}

void wypiszStrukture(struktura *tablicaDoWypisania, int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i].wiek << "";
        cout << tablicaDoWypisania[i].imie << "";
        cout << endl;
    }
}

void znajdz(struktura *osoby, int dlugosc, int podanyWiek, string podaneImie)
{
    bool znaleziono = false;
    for (int i = 0; i < dlugosc; i++)
    {
        if ((osoby[i].wiek == podanyWiek) && (osoby[i].imie == (podaneImie)))
        {
            cout << osoby[i].wiek << endl;
            cout << osoby[i].imie << endl;
            bool znaleziono = true;
        }
    }
    if (!znaleziono)
    {
        cout << "blad" << endl;
    }
}

int main()

{
    int wielkoscTablicy;
    int podanyWiek;
    string podaneImie;
    int SzukanyWiek;
    string SzukaneImie;
    cout << "Podaj wielkosc tablicy: " << endl;
    cin >> wielkoscTablicy;
    cout << "Podaj wiek" << endl;
    cin >> SzukanyWiek;
    cout << "Podaj imie" << endl;
    cin >> SzukaneImie;
    struktura *dynamicznaTablica = new struktura[wielkoscTablicy];
    wypelnijUzytkownika(dynamicznaTablica, wielkoscTablicy);
    // wypiszStrukture(dynamicznaTablica, wielkoscTablicy);
    znajdz(dynamicznaTablica, wielkoscTablicy, SzukanyWiek, SzukaneImie);

    return 0;
}