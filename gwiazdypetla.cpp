#include <iostream>
using namespace std;
int main()
{

    char gwiazdka;
    cout << "Podaj znak a ja go wipisze 15 razy";
    cin >> gwiazdka;

    for (int i = 1; i <= 15; i++) // i jest zmienną lokalną pętli for
    {
        cout << gwiazdka;
    }

    {
        int i = 1;
        while (i <= 15)
        {
            i++;
            cout << gwiazdka;
        }
    }

    {
        int i = 1;
        do
        {
            i++;
            cout << gwiazdka;
        } while (i <= 15);
    }
    return 0;
}