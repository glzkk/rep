#include <iostream>
using namespace std;
int main()
{
    int wiek;
    cout << "Podaj wiek a ja powiem ci ile jescze lat podstawoki ci zostalo" << endl;
    cin >> wiek;
    switch (wiek)
    {
    case 7:
        cout << "pierwsza klasa\n";

    case 8:
        cout << "Druga klasa\n";

    case 9:
        cout << "Trzecia klasa\n";

    case 10:
        cout << "Czwarta klasa\n";

    case 11:
        cout << "Piata klasa\n";

    case 12:
        cout << "Szosta klasa\n";

    case 13:
        cout << "Siodma klasa\n";

    case 14:
        cout << "Osma klasa\n";
        break;

    default:
        cout << "nie jestes w podstawowce";
        break;
    }
    return 0;
}