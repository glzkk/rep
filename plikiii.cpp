#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Dane {
    string imie;
    int wiek;
};

void dodaj(int liczbaRekordow) {
    fstream plik;
    plik.open("spr.txt", ios::in | ios::out | ios::app);
    if (plik.good()) {
        Dane nowyrekord;
        for (int i = 0; i < liczbaRekordow; i++) {
            cout << "daj imie:" << endl;
            cin >> nowyrekord.imie;
            cout << "daj wiek:" << endl;
            cin >> nowyrekord.wiek;
            plik << nowyrekord.imie << " " << nowyrekord.wiek << endl;
        }
    }
    plik.close();
}

void wyswietlwszystko() {
    fstream plik;
    plik.open("spr.txt", ios::in);
    if (plik.good()) {
        Dane rekord;
        while (plik >> rekord.imie >> rekord.wiek) {
            cout << "imie: " << rekord.imie << " wiek: " << rekord.wiek << endl;
        }
    }
    plik.close();
}

void wyswietl(string szukaneImie, int szukanywiek) {
    fstream plik;
    plik.open("spr.txt", ios::in);
    if (plik.good()) {
        Dane rekord;
        bool znaleziono = false;
        while (plik >> rekord.imie >> rekord.wiek) {
            if (rekord.imie == szukaneImie || rekord.wiek == szukanywiek) {
                cout << "rekordy znalezione:" << endl;
                cout << "imie: " << rekord.imie << " wiek: " << rekord.wiek << endl;
                znaleziono = true;
            }
        }
        if (!znaleziono) {
            cout << "nie ma nic" << endl;
        }
    }
    plik.close();
}

int main() {
    int ile;
    cout << "ile ma byc tych rekordow:" << endl;
    cin >> ile;
    dodaj(ile);

    cout << "wszystkie rekordy:" << endl;
    wyswietlwszystko();

    string szukaneimie;
    int szukanywiek;
    cout << "Podaj imie i wiek: " << endl;
    cin >> szukaneimie >> szukanywiek;
    wyswietl(szukaneimie, szukanywiek);

    return 0;
}