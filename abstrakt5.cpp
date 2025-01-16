
#include <iostream>
#include <cmath>
using namespace std;

// Abstrakcyjna klasa bazowa
class Figura {
public:
    virtual double obliczPole() const = 0;  // Funkcja czysto wirtualna
    virtual ~Figura() {}  // Wirtualny destruktor
};

// Klasa Prostokąt dziedziczy po klasie Figura
class Prostokat : public Figura {
private:
    double szerokosc;
    double wysokosc;

public:
    Prostokat(double s, double w) : szerokosc(s), wysokosc(w) {}

    double obliczPole() const override {
        return szerokosc * wysokosc;
    }
};

// Klasa Kolo dziedziczy po klasie Figura
class Kolo : public Figura {
private:
    double promien;

public:
    Kolo(double r) : promien(r) {}

    double obliczPole() const override {
        return 3.14 * promien * promien;  // M_PI to stała z biblioteki cmath
    }
};

int main() {
    // Tablica wskaźników do obiektów klasy Figura
    Figura* figury[4];

    // Tworzenie obiektów i przypisywanie ich do tablicy
    figury[0] = new Prostokat(5.0, 3.0); // Prostokąt
    figury[1] = new Kolo(4.0);           // Koło
    figury[2] = new Prostokat(7.0, 2.0); // Prostokąt
    figury[3] = new Kolo(6.0);           // Koło

    // Iterowanie po tablicy i wyświetlanie wyników
    for (int i = 0; i < 4; ++i) {
        cout << "Pole figury " << i + 1 << ": " << figury[i]->obliczPole() << endl;
    }

    // Usuwanie obiektów i czyszczenie pamięci
    for (int i = 0; i < 4; ++i) {
        delete figury[i];
    }

    return 0;
}