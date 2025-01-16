#include <iostream>
#include <string>

using namespace std;

class Osoba
{
private:
    int id;
    string imie;
    static int liczbaObiektow;

public:
    Osoba()
    {
        id = 0;
        imie = "";
        liczbaObiektow++;
    }

    Osoba(int nId, string nImie)
    {
        id = nId;
        imie = nImie;
        // liczbaObiektow++;
    }

    static int getLiczbaObiektow()
    {
        return liczbaObiektow;
    }

    void wypiszImie(string argument) 
    {
        if (imie.empty())
        {
            cout << "brak dantych" << endl;
        }
        else
        {
            cout << "czesc " << argument << ", mam na imie " << imie << endl;
        }
    }
};

int Osoba::liczbaObiektow = 0;

int main()
{

    Osoba osoba1;

    Osoba osoba2(1, "Jan");

    string argument;
    cout << "podaj swoej imie ";
    cin >> argument;

    osoba1.wypiszImie(argument);
    osoba2.wypiszImie(argument);

    cout << "liczba obiektow wystepujacych " << Osoba::getLiczbaObiektow() << endl;

    return 0;
}