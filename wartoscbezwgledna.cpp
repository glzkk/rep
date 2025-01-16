#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cout << "podaj liczbę a ja podam wartosc bezwgledna" << endl;
    cin >> liczba;
    cout << "Liczba = " << liczba << endl;

    // Zastosowanie instrukcji warunkowych:
    if (liczba > 0){
        cout<<"wartosc bezwgledna z " << liczba <<" to:"<< liczba<< endl;
    }
    if (liczba < 0){
        cout << "wartosc bezwgledna z " << liczba << " to: " << liczba * (-1) << endl; // do ifa przyklejona jest tylko następna instrukcja
    }
    if (liczba == 0)
    {
        cout << "wartosc bezwgledna 0 to: " << liczba << endl;
    }

    return 0;
}