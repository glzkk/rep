using namespace std;
#include <string>
#include <fstream>
#include <iostream>

int main()
{
    string napisOdUsera;
    int liczbaWystapien = 0;
    char literaOdUsera;
    cout << "dowej napis\n";
    cin >> napisOdUsera;
    cout << "dowej litere";
    cin >> literaOdUsera;
    for (char iterator : napisOdUsera)
    {
        if (iterator == literaOdUsera)
        {
            liczbaWystapien++;
        }
    }
    cout << liczbaWystapien;
    for (short i = 0; i < napisOdUsera.length(); i++)
    {
        if (napisOdUsera[i] == literaOdUsera)
        {
            liczbaWystapien++;
        }
    }
    for (size_t i = 0; napisOdUsera[i] != '\0'; i++)
    {
        if (napisOdUsera[i] == literaOdUsera)
        {
            liczbaWystapien++;
        }
    }
    int i = 0;
    while (napisOdUsera[i] != '\0')
    {
        if (napisOdUsera[i] == literaOdUsera)
        {
            liczbaWystapien++;
        }
        i++;
    }
}