#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char pierwsze[60];
    char drugie[60];

    cout << "podaj Ala Ma: ";
    cin.getline(pierwsze, 60);

    cout << "podaj Dom boba: ";
    cin.getline(drugie, 60);

    // Extract the first word from the first input
    char napis2[30] = "";
    int i = 0;
    while (pierwsze[i] != ' ' && pierwsze[i] != '\0') {
        napis2[i] = pierwsze[i];
        i++;
    }
    napis2[i] = '\0';

    // Extract the first word from the second input
    char napis3[30] = "";
    int j = 0;
    while (drugie[j] != ' ' && drugie[j] != '\0') {
        napis3[j] = drugie[j];
        j++;
    }
    napis3[j] = '\0';

    // Extract the last part (after space) of the first input
    char nazwisko_pierwsze[60] = "";
    char* ptr1 = strchr(pierwsze, ' ');
    if (ptr1) {
        strcpy(nazwisko_pierwsze, ptr1 + 1);
    }

    // Extract the last part (after space) of the second input
    char nazwisko_drugie[60] = "";
    char* ptr2 = strchr(drugie, ' ');
    if (ptr2) {
        strcpy(nazwisko_drugie, ptr2 + 1);
    }

    // Combine the parts in the desired order
    char wynik[120] = "";
    strcat(wynik, nazwisko_drugie); // boba
    strcat(wynik, " "); 
    strcat(wynik, nazwisko_pierwsze); // ma
    strcat(wynik, " ");
    strcat(wynik, napis3); // dom
    strcat(wynik, " ");
    strcat(wynik, napis2); // ala

    cout << "Wynik= " << wynik << endl;

    return 0;
}
