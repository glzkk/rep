#include <iostream>
using namespace std;
int reszta(int pierwszaliczba, unsigned int drugaliczba)
{
    int resztadziel =pierwszaliczba%drugaliczba;

    return resztadziel;
}
int main()
{
    int liczba1, wynik;
    unsigned int liczba2;
    cin >> liczba1;
    cin >> liczba2;

    cout << reszta(liczba1,liczba2)<<endl;
    cout << reszta(5,2)<<endl;
    cout << reszta(7,4)<<endl;

    return 0;
}