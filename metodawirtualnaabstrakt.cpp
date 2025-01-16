#include <iostream>
using namespace std;

// Klasa abstrakcyjna
class Zwierze
{
public:
    virtual void dzwiek() =0; // Metoda czysto wirtualna
};

class Zwierz
{
public:
    virtual void dzwieczek() =0;
};

// Klasa dziedzicząca Pies
class Pies : public Zwierze, public Zwierz
{
public:
    void dzwiek()
    {
        cout << "Hau Hau!" << endl;
    }
    void dzwieczek()
    {
        cout<< "AWOOO!!!!!!"<<endl;
    }
};

// Klasa dziedzicząca Kot
class Kot : public Zwierze
{
public:
    void dzwiek()
    {
        cout << "Miau Miau!" << endl;
    }
};

// Funkcja wykorzystująca polimorfizm
void wydajDzwiek(Zwierze *zwierze)
{
    zwierze->dzwiek();
}
void wydajDzwieczek(Zwierz *zwierz)
{
    zwierz->dzwieczek();
}

int main()
{
    Pies pies;
    Kot kot;

    // Wywołanie metod dzwiek
    wydajDzwiek(&pies); // powinno wyświetlić: Hau Hau!
    wydajDzwieczek(&pies);
    wydajDzwiek(&kot);  // powinno wyświetlić: Miau Miau!

    return 0;
}