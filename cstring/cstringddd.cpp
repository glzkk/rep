#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char imie_nazwisko[50];
    char drugie_imie[30];

    cout << "Podaj imie i nazwisko: ";
    cin.getline(imie_nazwisko, 50);

    cout << "Podaj drugie imie: ";
    cin.getline(drugie_imie, 30);

    char *pozycja_spacji = strchr(imie_nazwisko, ' ');

    if (pozycja_spacji != 0)
    {
        int i=0;
        char pierwsze_imie[30];
       while (imie_nazwisko[i] != ' ' && imie_nazwisko[i]) 
        {
            pierwsze_imie[i] = imie_nazwisko[i];
            i++;
        }
        char wynik[100];
        strcpy(wynik, pierwsze_imie);
        strcat(wynik, " ");
        strcat(wynik, drugie_imie);
        strcat(wynik, pozycja_spacji);

        cout << "Wynik: " << wynik << endl;
    }
    return 0;
}