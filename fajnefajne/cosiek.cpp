#include <iostream>
#include <vector>
using namespace std;
void wypelnijTabliceStatyczna(int tablica[], int rozmiar)
{

    for (int i = 0; i < rozmiar; i++)
    {
        cout << "podej " << 1 + i << " element tablicy\n";
        cin >> tablica[i];
    }
}
void wypelnijTabliceDynamiczna(int *tablica, int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        cout << "podej " << 1 + i << " element tablicy\n";
        cin >> tablica[i];
    }
}
void wypiszTabliceStatyczna(int tablica[], int rozmiar)
{

    for (int i = 0; i < rozmiar; i++)
    {
        cout << 1 + i << " element tablicy to " << tablica[i] << endl;
    }
}
void wypiszTabliceDynamiczna(int *tablica, int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        cout << 1 + i << " element tablicy to " << tablica[i] << endl;
    }
}

void wypelnijWektor(vector<int> &wektor)
{
    int rozmiar;
    cout << "Podaj rozmiar wektora " << endl;
    cin >> rozmiar;
    wektor.resize(rozmiar);
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << "Podaj wartosc do wektora" << endl;
        cin >> wektor[i];
    }
}

void wypiszWektor(vector<int> &wektor)
{
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << 1 + i << " element wektora " << wektor[i] << endl;
    }
}

int minTablicaStatyczna(int tablica[], int rozmiar)
{
    int min = tablica[0];
    for (int i = 1; i < rozmiar; i++)
    {
        if (tablica[i] < min)
        {
            min = tablica[i];
        }
    }
    return min;
}
int minTablicaDynamiczna(int *tablica, int rozmiar)
{
    int min = tablica[0];
    for (int i = 1; i < rozmiar; i++)
    {
        if (min > tablica[i])
        {
            min = tablica[i];
        }
    }
    return min;
}
int minWektor(vector<int> &wektor)
{
    int min = wektor[0];
    for (int i = 1; i < wektor.size(); i++)
    {
        if (min > wektor[i])
        {
            min = wektor[i];
        }
    }
    return min;
}
int maxTablicaStatyczna(int tablica[], int rozmiar)
{
    int max = tablica[0];
    for (int i = 1; i < rozmiar; i++)
    {
        if (tablica[i] > max)
        {
            max = tablica[i];
        }
    }
    return max;
}
int maxTablicaDynamiczna(int *tablica, int rozmiar)
{
    int max = tablica[0];
    for (int i = 1; i < rozmiar; i++)
    {
        if (max < tablica[i])
        {
            max = tablica[i];
        }
    }
    return max;
}
int maxWektor(vector<int> &wektor)
{
    int max = wektor[0];
    for (int i = 1; i < wektor.size(); i++)
    {
        if (max < wektor[i])
        {
            max = wektor[i];
        }
    }
    return max;
}