#include <iostream>
using namespace std;

class Osoba
{
    int id;
    string imie;

public:
    static int liczbaInstancji;
    Osoba()
    {
        /*   id = 0;
          imie = ""; */
        liczbaInstancji++;
    }
    Osoba(int idP, string imieP) : Osoba::Osoba()
    {
        id = idP;
        imie = imieP;
        /* liczbaInstancji++; */
    }
    // delegowanie konstruktora
    // po : jest lista inicjalizacyjna
    Osoba(const Osoba &czlowiek) : Osoba::Osoba()
    {
        id = czlowiek.id;
        imie = czlowiek.imie;
        /* liczbaInstancji++; */
    }
    void przywitanie(string imieP)
    {
        if (imie.length() > 0)
            cout << "Cześć " << imieP << " mam na imię " << imie << endl;
        else
            cout << "Brak danych" << endl;
    }
};
int Osoba::liczbaInstancji = 0;
int main()
{
    Osoba osoba1;
    string imie;
    int id;
    cout << "Zrobimy osobe\n";
    cout << "Podaj imie dla tej osoby ";
    cin >> imie;
    cout << "Podaj id dla tej osoby";
    cin >> id;
    Osoba osoba2(id, imie);
    cout << "Osoba 3 będzie taka jak 2 BOTAK\n";
    Osoba osoba3(osoba2);
    cout << "Każda osoba się przywita \n Podaj swoje imię ";
    cin >> imie;
    cout << "Osoba 1 ";
    osoba1.przywitanie(imie);
    cout << "Osoba 2 ";
    osoba2.przywitanie(imie);
    cout << "Osoba 3 ";
    osoba3.przywitanie(imie);
    cout << Osoba::liczbaInstancji << " tyle jest instancji";
    return 0;
}
/*
Obiekty mozemy inicjalizowac tez tak:
Pracownik pracownik2 {2, "Adam", "Nowak"};
Pracownik::Pracownik():
id {-1},
imie {"Imię domyślne"},
nazwisko {"Nazwisko domyślne"}
Konstruktor kopiujący:
// Definicja konstruktora kopiującego:
Prostokat::Prostokat(const Prostokat& wzorzec) {
bok1 = wzorzec.bok1;
bok2 = wzorzec.bok2;
}
Wykorzystanie konstruktora kopiującefgo.
Prostokat p3(p1);*/