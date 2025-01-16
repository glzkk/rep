#include <iostream>
using namespace std;
struct czas
{
    int dni;
    int miesiace;
    int lata;
};
void obliczanieCzasu(int czasWdniach, czas &czas)
{
    int czaslata = 0;
    int czasmiesiace = 0;
    int czasdni = 0;
    czaslata = czasWdniach / 360;
    czasWdniach = czasWdniach % 360;
    czasmiesiace = czasWdniach / 30;
    czasWdniach = czasWdniach % 30;
    czasdni = czasWdniach;
    cout << "lata: " << czaslata << endl;
    cout << "miesiace: " << czasmiesiace << endl;
    cout << "dni: " << czasdni << endl;
    //     czas.dni = czasdni;
    //     czas.miesiace = czasmiesiace;
    //     czas.lata = czaslata;
}
void dodajCzas(czas &nowyCzas, czas &staryCzas)
{
    int czaslata = 0;
    int czasmiesiace = 0;
    int czasdni = 0;
    czaslata = staryCzas.lata + nowyCzas.lata;
    czasmiesiace = staryCzas.miesiace + nowyCzas.miesiace;
    czasdni = staryCzas.dni + nowyCzas.dni;
    if (czasdni > 59)
    {
        czasmiesiace += czasdni / 60;
        czasdni = czasdni % 60;
    }
    if (czasmiesiace > 59)
    {
        czaslata += czasmiesiace / 60;
        czasmiesiace = czasmiesiace % 60;
    }
    if (czaslata > 23)
    {

        czaslata = czaslata % 24;
    }
    nowyCzas.dni = czasdni;
    nowyCzas.miesiace = czasmiesiace;
    nowyCzas.lata = czaslata;
}
void wypisz(czas timex)
{
    cout << timex.dni << endl;
    cout << timex.miesiace << endl;
    cout << timex.lata << endl;
}
int main()
{
    int dniOdUzytkownika;
    // czas staryCzas{59, 59, 23},
    czas nowyCzas;
    cout << "podaj ilosc dni a ja powiem ile jest dni,miesc,lat";
    cin >> dniOdUzytkownika;
    obliczanieCzasu(dniOdUzytkownika, nowyCzas);
    // dodajCzas(nowyCzas, staryCzas);
    // wypisz(nowyCzas);
    return 0;
}