#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    vector<double> numerki;
    int suma = 0;
    for (int i = 0; i < 10; i++)
    {
        double liczbaLosowa = 11 + rand() % 9;
         double poPrzecinku = 0.1 + double(rand()) / RAND_MAX * 0.8;
      double randomowaLiczba = liczbaLosowa + poPrzecinku; 
        numerki.push_back(randomowaLiczba);
        suma += randomowaLiczba;
        // numerki.push_back(liczbaLosowa);
        // suma += liczbaLosowa;
    }

    int srednia = suma / 10;

    vector<double> sredniaRozna3;

    for (double liczbaLosowa : numerki)
    {
        if (liczbaLosowa - srednia <= 3)
        {
            sredniaRozna3.push_back(liczbaLosowa);
        }
    }

    ofstream wypisz("numerki.txt", ios::app);

    wypisz << "numerki" << endl;
    for (double liczbaLosowa : numerki)
    {
        wypisz << liczbaLosowa << endl;
    }

    wypisz << "srednia to: " << srednia << endl;
    wypisz << "srednia rozna -3 to:" << endl;
    for (double liczbaLosowa : sredniaRozna3)
    {
        wypisz << liczbaLosowa << endl;
    }

    wypisz.close();

    return 0;
}