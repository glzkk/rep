#include <iostream>
#include <string>
using namespace std;
class Osoba {
private:
    string imie;
    int wiek;

public:
    // Konstruktor domyślny delegowany do konstruktora z parametrami

    Osoba() : Osoba("Nieznane", 0) {
        cout << "Wywołano konstruktor domyślny\n";
    }

    // Konstruktor z parametrami
    Osoba(string imie, int wiek) : imie(imie), wiek(wiek) {
        cout << "Wywołano konstruktor z parametrami\n";
    }

    // Konstruktor kopiujący
    Osoba(Osoba& innaOsoba) : imie(innaOsoba.imie), wiek(innaOsoba.wiek) {
        cout << "Wywołano konstruktor kopiujący\n";
    }

    void dodajWiek(int dodatek) {
        wiek += dodatek;
    }
    // Funkcja do wyświetlania danych
    void wyswietl() {
        cout << "Imie: " << imie << ", Wiek: " << wiek << '\n';
    }

};


int main() {
    // Tworzenie obiektu za pomocą konstruktora domyślnego
    Osoba osoba1;
    osoba1.wyswietl();

    // Tworzenie obiektu za pomocą konstruktora z parametrami
    Osoba osoba2("Jan", 25);

    osoba2.wyswietl();

    // Tworzenie obiektu za pomocą konstruktora kopiującego
    Osoba osoba3 = osoba2;
    osoba3.wyswietl();

    return 0;
}