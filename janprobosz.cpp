#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pierwsze;
    string drugie;

    cout << "podaj imie nazwisko: ";
    getline(cin,pierwsze);

    cout << "podaj drugie: ";
    getline(cin,drugie);
 for (int i = 2; pierwsze[i] != ' '; i++)
    {
        drugie[i] = pierwsze[i];
    }
    cout<<drugie<<endl;
    // pierwsze.replace(4,10,drugie);
    // cout<<pierwsze<<endl;

    
    // char napis2[30];
    // for (int i = 0; pierwsze[i] != ' '; i++)
    // {
    //     napis2[i] = pierwsze[i];
    // }

    // strcat(napis2, " ");

    // cout<<napis2<<endl;
    // char napis3[30];
    // for (int i = 0; drugie[i] != ' '; i++)
    // {
    //     napis3[i] = drugie[i];
    // }

    // strcat(napis3, " ");

    // cout<<napis3<<endl;
    // cout<<strcat(napis3,napis2);
 
    //  strcat(napis3, napis2);
    //  cout<<napis3;
    // char napis2[30];
    // strcat(napis2, " "); //"C++, "
    // strcat(napis2, pierwsze);//"C++, Java"
    // char nazwisko_pierwsze[60];
    // strcpy(nazwisko_pierwsze, strchr(pierwsze, ' '));

    // char nazwisko_drugie[60];
    // strcpy(nazwisko_drugie, strchr(drugie, ' '));

    // char nowe_imie1;
    // // strcat(drugie, nowe_imie1);//"C++, Java"
    // strcpy(nowe_imie1, nazwisko_pierwsze);

    // strcpy(nowe_imie1, nazwisko_pierwsze);
    // strcat(nowe_imie1, " ");
    // strcat(nowe_imie1, pierwsze);
    // pierwsze.append(drugie);


    // char nowe_imie2[60];
    // strcpy(nowe_imie2, nazwisko_drugie); // boba ma 

    // strcat(nowe_imie2, drugie); // Dodaj imię z drugiego imienia


    // cout << "Wynik= " << pierwsze << " " << endl;

    return 0;
}