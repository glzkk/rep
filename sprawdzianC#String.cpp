// // pobierz dwa dwuczłonowe napisy i zamień głowę pierwszego z ogonem drugiego. Przykład:
// // we:Ala ma
// //       dom boba
// // wy:boba ma
// //       dom Ala
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     char pierwszyElement[50];
//     char drugiElement[30];

//     cout << "Podaj pierwzsy element: ";
//     cin.getline(pierwszyElement, 50);

//     cout << "Podaj drugi element: ";
//     cin.getline(drugiElement, 30);

//     char *pozycja_spacji = strchr(pierwszyElement, ' ');

//     if (pozycja_spacji != 0)
//     {
//         int i = 0;
//         char pierwsze_imie[30];
//         // while (pierwszyElement[i] != ' ' && pierwszyElement[i])
//         // {
//         //     pierwsze_imie[i] = pierwszyElement[i];
//         //     i++;
//         // }
//         char wynik[100];
//         strcpy(wynik, drugiElement);
//         // strcat(wynik, drugiElement);
//         strcat(wynik, " ");
//         strcat(wynik, pierwszyElement);
//         // strcat(wynik, pozycja_spacji);

//         cout << "Wynik: " << wynik << endl;
//     }
//     return 0;
// }
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     char imieiNazwisko[40];
//     char drugieImie[30];

//     cout << "Podaj imię i nazwisko oddzielone spacją: ";
//     cin.getline(imieiNazwisko, 40);

//     cout << "Podaj drugie imię: ";
//     cin.getline(drugieImie, 30);

//     char napis1[40];
//     strcpy(napis1, strchr(drugieImie, ' '));

//     char napis2[30];
//     strcpy(napis2, strcat(imieiNazwisko, napis1));

//     char napis3[50];

//     for (int i = 0; imieiNazwisko[i] != ' '; i++)
//     {
//         napis3[i] = imieiNazwisko[i];
//     }
//     strcat(napis3, " ");
//     strcat(napis3, napis2);

//     cout << napis3;

//     return 0;
// }
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

    
    char napis2[30];
    for (int i = 0; pierwsze[i] != ' '; i++)
    {
        napis2[i] = pierwsze[i];
    }

    strcat(napis2, " ");

    // cout<<napis2<<endl;
    char napis3[30];
    for (int i = 0; drugie[i] != ' '; i++)
    {
        napis3[i] = drugie[i];
    }

    strcat(napis3, " ");

    // cout<<napis3<<endl;
    // cout<<strcat(napis3,napis2);
 
    //  strcat(napis3, napis2);
    //  cout<<napis3;
    // char napis2[30];
    // strcat(napis2, " "); //"C++, "
    // strcat(napis2, pierwsze);//"C++, Java"
    char nazwisko_pierwsze[60];
    strcpy(nazwisko_pierwsze, strchr(pierwsze, ' '));

    char nazwisko_drugie[60];
    strcpy(nazwisko_drugie, strchr(drugie, ' '));

    char nowe_imie1[60];
    // strcat(drugie, nowe_imie1);//"C++, Java"
    strcpy(nowe_imie1, nazwisko_pierwsze);
    // strcpy(nowe_imie1, nazwisko_pierwsze);
    // strcat(nowe_imie1, " ");
    strcat(nowe_imie1, pierwsze);

    char nowe_imie2[60];
    strcpy(nowe_imie2, nazwisko_drugie); // boba ma 

    // strcat(nowe_imie2, drugie); // Dodaj imię z drugiego imienia


    cout << "Wynik= " << nowe_imie2 << " " << strcat(napis3,napis2) << endl;

    return 0;
}