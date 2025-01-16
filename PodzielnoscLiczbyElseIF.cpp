#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cout << "podaj liczbe a powiem ci czy jest podzielna przez 2 lub 3" << endl;
    cin >> liczba;
    cout << "liczba = " << liczba << endl;

    if (liczba % 2 == 0)
    {

        cout << "liczba jest podzielna przez 2" << endl;
    }
    else if (liczba % 3 == 0)
    {
        cout << "liczba podzielna przez 3" << endl;
    }
    else
    {

        cout << "liczba nie jest podzielna przez 3 ani 2" << endl;
    }

    return 0;
}