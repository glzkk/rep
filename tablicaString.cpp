#include <iostream>
#include <string>
using namespace std;

int main()
{
    string napisOdUzytkownika = "kurczaczek i krowa";
    char znakDoZnalezienia;
    int licznikOdWystapien = 0;
    int licznikOdWystapien2 = 0;

    cout << "Podaj znak do znalezienia: ";
    cin >> znakDoZnalezienia;

    for (int i = 0; i < 20; i++)
    {
        if (napisOdUzytkownika[i] == znakDoZnalezienia)
        {
            licznikOdWystapien++;
        }
    }
       for (char napisOdUzytkownika2 : napisOdUzytkownika) {
        if (napisOdUzytkownika2 == znakDoZnalezienia) {
            licznikOdWystapien2++;
        }
    }

    cout << "Znak wystapil: '" << znakDoZnalezienia << "' " << licznikOdWystapien << endl;
    cout << "Znak wystapil: '" << znakDoZnalezienia << "' " << licznikOdWystapien2 << endl;

    return 0;
}       
