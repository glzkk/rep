#include <iostream>
using namespace std;
#include "funkcje.h"

int main()
{
    int tablicaTestowa[10];
    wypelnij(tablicaTestowa, 10);
    wypisz(tablicaTestowa, 10);
    cout << endl;
    sortowanieRosnaco(tablicaTestowa, 10);
    wypisz(tablicaTestowa, 10);
    vector <int> wektorTestowy[10];
    wypelnijwektor(wektorTestowy,10);
    wypiszWektor(wektorTestowy,10);
    return 0;
}