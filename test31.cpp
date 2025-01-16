#include <iostream>
#include <cstring>
#include <string>
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
    
    char napis3[30];
    for (int i = 0; drugie[i] != ' '; i++)
    {
        napis3[i] = drugie[i];
    }

    strcat(napis3, " ");

    // cout<<drugie;

    char nazwisko_pierwsze[60];
    strcpy(nazwisko_pierwsze, strchr(pierwsze, ' '));

    char nazwisko_drugie[60];
    strcpy(nazwisko_drugie, strchr(drugie, ' '));

   char noweimie1[60];
    strcpy(noweimie1,strcat(nazwisko_drugie,nazwisko_pierwsze));
       cout<<noweimie1<<endl;
       char noweimie2[60];
       strcpy(noweimie2,strcat(napis3,napis2));
       cout<<noweimie2;


    return 0;
}