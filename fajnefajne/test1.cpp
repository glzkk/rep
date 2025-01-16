#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct struktura
{
    int wiek;
    
};

void wypelnijUzytkownika(struktura *tablicaDoWypełnienia, int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << "Podaj wiek" << endl;
        cin >> tablicaDoWypełnienia[i].wiek;
       
        
    }
}

void wypiszStrukture(struktura *tablicaDoWypisania, int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i].wiek << "";
      
        cout << endl;
    }
}

void znajdz(struktura *osoby,int liczbaELementowTablicy,int podanyWiek)
{
    for (int i=0; i < liczbaELementowTablicy; i++)
    {
        if(osoby[i].wiek==podanyWiek)
        {
            cout <<"taki wiek:"<< osoby[i].wiek<<endl;
            
        }
    }
}
// void znajdzPoWieku(struktura *osoby, int dlugosc, int podanyWiek)
// {
//     for (int i = 0; i < dlugosc; i++)
//     {
//         if (osoby[i].wiek == podanyWiek)
//         {
//             cout << osoby[i].wiek << " ";
//             cout << osoby[i].imie << endl;
//         }
//     }
// }
// void znajdzPoImieniu(struktura *osoby, int dlugosc, int podaneImie)
// {
//     for (int i = 0; i < dlugosc; i++)
//     {
//         if (osoby[i].imie == podaneImie)
//         {
//             cout << osoby[i].wiek << " ";
//             cout << osoby[i].imie << endl;
//         }
//     }
// }
int main()

{
    int wielkoscTablicy;
    int podanyWiek;
    char podaneImie;
    cout << "Podaj wielkosc tablicy: " << endl;
    cin >> wielkoscTablicy;
    struktura *dynamicznaTablica = new struktura[wielkoscTablicy];
    wypelnijUzytkownika(dynamicznaTablica, wielkoscTablicy);
    wypiszStrukture(dynamicznaTablica, wielkoscTablicy);
    znajdz(dynamicznaTablica,wielkoscTablicy,podanyWiek);

  
    return 0;
}