#include <iostream>
using namespace std;
// Definicja abstrakcyjnej klasy bazowej Osoba:
class Osoba
{
public:
    // Deklaracje zmiennych członkowskich:
    string imie;
    string nazwisko;
    /* UWAGA
     * Klasa abstrakcyjna może zawierać deklaracje zwykłych — instancyjnych zmiennych i metod członkowskich.
     */
    // Deklaracja metody abstrakcyjnej — funkcji czysto wirtualnej:
    virtual void wyswietlDane() = 0;
};
// Definicja klasy pochodnej Lekarz:
class Lekarz : public Osoba
{
public:
    string specjalizacja;
    Lekarz() {};
    Lekarz(string imieP, string nazwiskoP, string specjalizacjaP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        specjalizacja = specjalizacjaP;
    }
    // Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
    void wyswietlDane()
    {
        cout << imie << "," << nazwisko << "," << specjalizacja << endl;
    }
    /* UWAGA
     * Metoda abstrakcyjna zadeklarowana w bazowej klasie abstrakcyjnej powinna zostać zdefiniowana
     * w jej klasie pochodnej.
     */
};
// Definicja klasy pochodnej Ordynator:
class Ordynator : public Lekarz
{
public:
    string oddzial;
    Ordynator() {};
    Ordynator(string imieP, string nazwiskoP, string specjalizacjaP, string oddzialP)
    {
        imie = imieP;
        nazwisko = nazwiskoP;
        specjalizacja = specjalizacjaP;
        oddzial = oddzialP;
    }

    // Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
    void wyswietlDane()
    {
        cout << imie << "," << nazwisko << "," << specjalizacja << "," << oddzial << endl;
    }
};
int main()
{
    Osoba *osoba = new Lekarz("Jan", "Kowalski", "Kardiologia");
    cout << "DANE LekarzA:" << endl;
    osoba->wyswietlDane();
    cout << endl;
    cout << "dane ordynatora" << endl;
    Osoba *osoba1 = new Ordynator("Krzysiek", "Krzysiu", "Ratownik", "wewnentrzny");
    osoba1->wyswietlDane();
    cout << endl;
    Osoba *osoba3 = new Lekarz("michal", "fa", "costam");
    cout << "DANE LekarzA2:" << endl;
    osoba3->wyswietlDane();

    return 0;
}