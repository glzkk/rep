// A
/*
W klasie bazowej jedna wlasność ma być dostępna w programie bezposrednio, a druga  nie, ale ma być dostępna w klasie pochodnej poprzez nazwę.
W klasie pochodnej odziedziczone własności mają być protected. Wyedytuj wszystkie wlasnosci klasy pochodnej w programie głównym.*/
#include <iostream>
using namespace std;

class Pracownik
{
protected:
    string nazwisko;

public:
    string imie;
    // Konstruktor klasy bazowej
    Pracownik(string noweImie, string noweNazwisko) : imie(noweImie), nazwisko(noweNazwisko) {}

    // Gettery dla pól prywatnych
    string getImie() const { return imie; }
    string getNazwisko() const { return nazwisko; }

    // Settery dla pól prywatnych
    void setImie(const string &noweImie) { imie = noweImie; }
    void setNazwisko(const string &noweNazwisko) { nazwisko = noweNazwisko; }

};

class PracownikInfo : public Pracownik
{
protected:
    // Konstruktor klasy pochodnej
    PracownikInfo(string noweImie, string noweNazwisko) : Pracownik(noweImie,noweNazwisko) {}
public:
    
    void setImie(const string &noweImie) { Pracownik::setImie(noweImie); }
    void setNazwisko(const string &noweNazwisko) { Pracownik::setNazwisko(noweNazwisko); }
};

int main()
{
    // Tworzenie obiektu klasy pochodnej
    // PracownikInfo pracownik("Pawel", "Kaczka");
    PracownikInfo pracownik("debil","debil2");
    // Wyświetlanie początkowych danych
    // pracownik.wyswietlDane();

    // Edytowanie danych
    pracownik.setImie("Hubert");
    pracownik.setNazwisko("Bambik");

    // Wyświetlanie zaktualizowanych danych
    

    return 0;
}

