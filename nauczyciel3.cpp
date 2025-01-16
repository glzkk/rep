// GRUPA A
//  W klasie bazowej jedna wlasność ma
//  być dostępna w programie bezposrednio,a druga  nie, ale ma być dostępna w klasie pochodnej poprzez nazwę.W klasie pochodnej odziedziczone własności mają być protected.Wyedytuj wszystkie wlasnosci klasy pochodnej w programie głównym.
#include <iostream>
using namespace std;

class Pracownik
{
protected:

    string nazwisko{};

public:
    string imie{};

    Pracownik(string Imie, string Nazwisko) : imie(Imie), nazwisko(Nazwisko) {}

     void setNazwisko(string pNazwisko)
    {
        nazwisko = pNazwisko;
    }

    void setImie(string pImie)
    {
        imie = pImie;
    }


};

class Pracownik2 : protected Pracownik
{
public:

    Pracownik2(string Imie, string Nazwisko) : Pracownik(Imie, Nazwisko) {}

    void display() 
    {
        cout << "nazwsiko : " << nazwisko << endl;
        cout << "imie : " << imie << endl;
    }
     void setNazwisko(string pNazwisko)
    {
        Pracownik::setNazwisko(pNazwisko);
    }
    void setImie(string pImie)
    {
        Pracownik::setImie(pImie);
    }
   
};

int main()
{
    Pracownik2 Pracownik2("jacek","ko");

    Pracownik2.display();

    Pracownik2.setNazwisko("fajny");

    Pracownik2.setImie("ziomek2");

    Pracownik2.display();

    return 0;
}