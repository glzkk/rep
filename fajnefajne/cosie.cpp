#include <iostream>
#include <vector>
#include "funkcje.h"
using namespace std;
int main()
{
    int rozmiar;
    int tablicaStatyczna[5];
    cout << "Podaj rozmiar tablicy dynamicznej: ";
    cin >> rozmiar;
    int *tablicaDynamiczna = new int[rozmiar];
    wypelnijTabliceDynamiczna(tablicaDynamiczna, rozmiar);
    wypiszTabliceDynamiczna(tablicaDynamiczna, rozmiar);
    cout << minTablicaDynamiczna(tablicaDynamiczna, rozmiar) << endl;
    cout << maxTablicaDynamiczna(tablicaDynamiczna, rozmiar) << endl;
    vector<int> wektor;
    wypelnijWektor(wektor);
    wypiszWektor(wektor);
    cout << minWektor(wektor) << endl;
    cout << maxWektor(wektor) << endl;
    wypelnijTabliceStatyczna(tablicaStatyczna, 5);
    wypiszTabliceStatyczna(tablicaStatyczna, 5);
    cout << minTablicaStatyczna(tablicaStatyczna, 5);
    cout << endl;
    cout << maxTablicaStatyczna(tablicaStatyczna, 5);

    return 0;
}