
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

struct samochod
{
    string marka;
    int rokProdukcji;
    int przebieg;
    string rodzajPaliwa;
};

// Funkcja zapisująca bazę danych do pliku
void zapiszBazeDoPliku(samochod* baza, int rozmiar)
{
    ofstream plik("baza.txt");
    if (plik.is_open())
    {
        for (int i = 0; i < rozmiar; ++i)
        {
            plik << baza[i].marka << " " << baza[i].rokProdukcji << " " << baza[i].przebieg << " " << baza[i].rodzajPaliwa << endl;
        }
        plik.close();
        cout << "Baza danych została zapisana do pliku." << endl;
    }
    else
    {
        cout << "Nie udało się otworzyć pliku do zapisu." << endl;
    }
}

// Funkcja odczytująca bazę danych z pliku
samochod* odczytajBazeZPliku(int& rozmiar)
{
    ifstream plik("baza.txt");
    samochod* baza = nullptr;
    if (plik.is_open())
    {
        rozmiar = 0;
        string marka;
        int rokProdukcji, przebieg;
        string rodzajPaliwa;
        while (plik >> marka >> rokProdukcji >> przebieg >> rodzajPaliwa)
        {
            samochod* temp = new samochod[rozmiar + 1];
            for (int i = 0; i < rozmiar; ++i)
            {
                temp[i] = baza[i];
            }
            temp[rozmiar].marka = marka;
            temp[rozmiar].rokProdukcji = rokProdukcji;
            temp[rozmiar].przebieg = przebieg;
            temp[rozmiar].rodzajPaliwa = rodzajPaliwa;
            delete[] baza;
            baza = temp;
            ++rozmiar;
        }
        plik.close();
        cout << "Baza danych została wczytana z pliku." << endl;
    }
    else
    {
        cout << "Nie udało się otworzyć pliku do odczytu." << endl;
    }
    return baza;
}

// Funkcja dodająca samochód do bazy
void dodajSamochod(samochod*& baza, int& rozmiar)
{
    samochod nowySamochod;
    cout << "Podaj markę samochodu: ";
    cin >> nowySamochod.marka;
    cout << "Podaj rok produkcji: ";
    cin >> nowySamochod.rokProdukcji;
    cout << "Podaj przebieg: ";
    cin >> nowySamochod.przebieg;
    cout << "Podaj rodzaj paliwa: ";
    cin >> nowySamochod.rodzajPaliwa;

    samochod* temp = new samochod[rozmiar + 1];
    for (int i = 0; i < rozmiar; ++i)
    {
        temp[i] = baza[i];
    }
    temp[rozmiar] = nowySamochod;
    delete[] baza;
    baza = temp;
    ++rozmiar;

    // Zapisanie bazy danych do pliku po dodaniu nowego samochodu
    zapiszBazeDoPliku(baza, rozmiar);
}

// Funkcja przeszukująca bazę danych po marce, przebiegu, rodzaju paliwa lub roku produkcji
void przeszukajBaze(samochod* baza, int rozmiar)
{
    string kryterium;
    cout << "Podaj kryterium wyszukiwania (marka, przebieg, rodzajPaliwa, rokProdukcji): ";
    cin >> kryterium;

    if (kryterium == "marka" || kryterium == "przebieg" || kryterium == "rodzajPaliwa" || kryterium == "rokProdukcji")
    {
        string wartosc;
        cout << "Podaj wartość kryterium: ";
        cin >> wartosc;

        for (int i = 0; i < rozmiar; ++i)
        {
            if (kryterium == "marka" && baza[i].marka == wartosc)
            {
                cout << "Samochód " << i + 1 << ": " << baza[i].marka << " " << baza[i].rokProdukcji << " " << baza[i].przebieg << " " << baza[i].rodzajPaliwa << endl;
            }
            else if (kryterium == "przebieg" && to_string(baza[i].przebieg) == wartosc)
            {
                cout << "Samochód " << i + 1 << ": " << baza[i].marka << " " << baza[i].rokProdukcji << " " << baza[i].przebieg << " " << baza[i].rodzajPaliwa << endl;
            }
            else if (kryterium == "rodzajPaliwa" && baza[i].rodzajPaliwa == wartosc)
            {
                cout << "Samochód " << i + 1 << ": " << baza[i].marka << " " << baza[i].rokProdukcji << " " << baza[i].przebieg << " " << baza[i].rodzajPaliwa << endl;
            }
            else if (kryterium == "rokProdukcji" && to_string(baza[i].rokProdukcji) == wartosc)
            {
                cout << "Samochód " << i + 1 << ": " << baza[i].marka << " " << baza[i].rokProdukcji << " " << baza[i].przebieg << " " << baza[i].rodzajPaliwa << endl;
            }
        }
    }
    else
    {
        cout << "Niepoprawne kryterium wyszukiwania." << endl;
    }
}

int main()
{
    int rozmiar = 0;
    samochod* baza = odczytajBazeZPliku(rozmiar);

    char wybor;
    do
    {
        cout << "Menu:" << endl;
        cout << "1. Dodaj samochód do bazy" << endl;
        cout << "2. Przeszukaj bazę danych" << endl;
        cout << "3. Wyjście" << endl;
        cout << "Wybierz opcję: ";
        cin >> wybor;

        switch (wybor)
        {
        case '1':
            dodajSamochod(baza, rozmiar);
            break;
        case '2':
            przeszukajBaze(baza, rozmiar);
            break;
        case '3':
            cout << "Zamykanie programu." << endl;
            break;
        default:
            cout << "Niepoprawny wybór. Spróbuj ponownie." << endl;
            break;
        }
    } while (wybor != '3');

    delete[] baza;

    return 0;
}
