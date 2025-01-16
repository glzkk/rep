#include <iostream>
#include <string>

class Bazowa {
public:
    int dostepna; // dostępna publicznie

protected:
    int ukryta; // dostępna tylko w klasie Bazowa i jej pochodnych

public:
    // Konstruktor z parametrami
    Bazowa(int dostepna, int ukryta) : dostepna(dostepna), ukryta(ukryta) {
        std::cout << "Wywołano konstruktor z parametrami klasy Bazowa\n";
    }

    // Konstruktor kopiujący
    Bazowa(Bazowa& innaBazowa) : dostepna(innaBazowa.dostepna), ukryta(innaBazowa.ukryta) {
        std::cout << "Wywołano konstruktor kopiujący klasy Bazowa\n";
    }
};

class Pochodna : protected Bazowa {
public:
    // Konstruktor z parametrami, delegujący do konstruktora klasy bazowej
    Pochodna(int dostepna, int ukryta) : Bazowa(dostepna, ukryta) {
        std::cout << "Wywołano konstruktor z parametrami klasy Pochodna\n";
    }

    // Konstruktor kopiujący
    Pochodna(Pochodna& innaPochodna) : Bazowa(innaPochodna) {
        std::cout << "Wywołano konstruktor kopiujący klasy Pochodna\n";
    }

    // Funkcja do edytowania własności w klasie pochodnej
    void edytuj(int nowaDostepna, int nowaUkryta) {
        dostepna = nowaDostepna;
        ukryta = nowaUkryta;
    }

    // Funkcja do wyświetlania danych
    void wyswietl() {
        std::cout << "Dostepna: " << dostepna << ", Ukryta: " << ukryta << '\n';
    }
};

int main() {
    // Tworzenie obiektu pochodnego
    Pochodna obj(5, 10);
    obj.wyswietl();

    // Edycja własności obiektu pochodnego
    obj.edytuj(15, 20);
    std::cout << "Po edycji:\n";
    obj.wyswietl();