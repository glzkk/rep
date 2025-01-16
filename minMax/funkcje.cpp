#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
int rozmiar;
void wypelnij(int tablicaDoWypełnienia[], int liczbaElementowTablicy)
{
    cout << "podaj rozmiar";
    cin >> liczbaElementowTablicy;
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        srand((i + 1) * time(NULL));
        tablicaDoWypełnienia[i] = rand() % 11;
    }
}
void wypisz(int tablicaDoWypisania[], int liczbaElementowTablicy)
{
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << tablicaDoWypisania[i] << " ";
    }
}
void sortowanieRosnaco(int tablicaPrzeszukiwana[], int liczbaElementowTablicy)
{
    int temp;
    int minimalny;
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        minimalny = tablicaPrzeszukiwana[i];
        for (int j = i; j < liczbaElementowTablicy; j++)
        {
            if (tablicaPrzeszukiwana[j] < minimalny)
            {
                temp = minimalny;
                minimalny = tablicaPrzeszukiwana[j];
                tablicaPrzeszukiwana[i] = minimalny;
                tablicaPrzeszukiwana[j] = temp;
            }
        }
    }
}
void wypelnijwektor(int wektorDoWypelnienia[], int liczbaElementowWektora)
{

    std::srand(unsigned(std::time(nullptr)));
    std::vector<int> v(1000);
    std::generate(v.begin(), v.end(), std::rand);

    // {
    //    vector<int> myVector(10);
    // srand((unsigned)time(NULL));
    // int a = rand() % 20 + 1; //1 to 20
    // for (int i =0; i < a; i++){
    //         int b = rand() % 20 + 1;
    //         myVector.push_back(b);
    //         cout << myVector[b] << endl;
    //     }
    // }
}
void wypiszWektor(int wektorDoWypisania[], int liczbaElementowWektora)
{
     for (int i = 0; i < liczbaElementowWektora; i++)
    {
        cout << wektorDoWypisania[i] << " ";
    }
}