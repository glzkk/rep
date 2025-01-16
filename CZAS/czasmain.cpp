#include <iostream>
using namespace std;

void oblicznieZlitrow(int podaneLitry)
{
    int litry = 0;
    int galon = 0;    // jeden galon to 5 litrow
    int wanny = 0;    // 1 wanna to 200 litrow
    int cysterny = 0; // 1 cysterna to 1000 litrow
    cysterny = podaneLitry / 1000;
    podaneLitry = podaneLitry % 1000;
    wanny = podaneLitry / 200;
    podaneLitry = podaneLitry % 200;
    galon = podaneLitry / 5;
    podaneLitry = podaneLitry % 5;
    litry = podaneLitry;
    cout << "cysterny:" << cysterny << endl;
    cout << "wanny:" << wanny << endl;
    cout << "galony:" << galon << endl;
    cout << "litry:" << litry << endl;
}

int main()
{
    int litryOdUzytkownika = 0;
    cout << "podaj ile litrow";
    cin >> litryOdUzytkownika;
    oblicznieZlitrow(litryOdUzytkownika);
    return 0;
}