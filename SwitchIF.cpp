#include <iostream>
using namespace std;
int main()
{
    int wiek;
    cout << "Podaj ile masz lat" << endl;
    cin >> wiek;
    switch (wiek)
    {
    case 7:
        cout << "Jestes w 1 klasie podstawowki";
        break;
    case 8:
        cout << "Jestes w 2 klasie podstawowki";
        break;
    case 9:
        cout << "Jestes w 3 klasie podstawowki";
        break;
    case 10:
        cout << "Jestes w 4 klasie podstawowki";
        break;
    case 11:
        cout << "Jestes w 5 klasie podstawowki";
        break;
    case 12:
        cout << "Jestes w 6 klasie podstawowki";
        break;
     case 13:
        cout << "Jestes w 7 klasie podstawowki";
        break;

     case 14:
     cout << "Jestes w 8 klasie podstawowki";
     break;
   

    default:
        cout << "Nie jestes w podstawowce";
        break;
    }

    return 0;