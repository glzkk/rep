#include <iostream>
#include <string>
using namespace std;
int powieksz(int liczba, int liczba1) // przeładowanie  (overloading) nazwy funkcji powinno
// pozwalać rozróżniać te same nazwy funkcji po rodzaju lub liczbie parametrów.
{
    return (liczba + liczba1);
};
int powieksz(int liczba2) // przeładowanie  (overloading) nazwy funkcji powinno
// pozwalać rozróżniać te same nazwy funkcji po rodzaju lub liczbie parametrów.
{
    liczba2++;
};
int powieksz(int liczbaUzytkownik1, int liczbaUzytkownik2, int liczbaUzytkownik3)
{
    cout << "podaj 1 liczbe ";
    cin >> liczbaUzytkownik1;
    cout << "podaj 2 liczbe";
    cin >> liczbaUzytkownik2;
    cout << "podaj 3 liczbe";
    cin >> liczbaUzytkownik3;
};

int liczba = 2;
int liczba1 = 2;
int liczba2 = 3;
int liczbaUzytkownik1;
int liczbaUzytkownik2;
int liczbaUzytkownik3;

int main()
{
    cout << endl
         << powieksz(liczba, liczba1) << endl;
    cout << endl
         << powieksz(liczba2) << endl;
    cout << endl
         << powieksz(liczbaUzytkownik1, liczbaUzytkownik2, liczbaUzytkownik3);
    return 0;
}