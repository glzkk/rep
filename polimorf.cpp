#include <iostream>
#include <math.h>
using namespace std;

class Block
{
public:
    int objetosc = 0;
    virtual void obliczObjetosc();
    
};
class Cuboid : public Block
{
public:
    int szerokosc = 5;
    int dlugosc = 4;
    int dlugosc2 = 2;
    void obliczObjetosc();
};
class Cylinder : public Block
{
public:
    float promien = 3;
    float wysokosc = 4;
    void obliczObjetosc();
};
class Cone : public Block
{
public:
    float pi=3.141592653589793;
    void obliczObjetosc();
};
void Block::obliczObjetosc()
{
    cout << "Wywołanie metody obliczObjetosc() zdefiniowanej w klasie Block"
         << endl;
    cout << "Objetosc: " << objetosc << endl;
}
void Cuboid::obliczObjetosc()
{
    cout << "Wywołanie metody obliczObjetosc() zdefiniowanej w klasie Cuboid"
         << endl;
    int obwodCuboid=szerokosc*dlugosc*dlugosc2;

    cout << "szerokosc: " << szerokosc << endl;
    cout << "dlugosc" << dlugosc << endl;
    cout << "wysokosc" << dlugosc2 << endl;
    cout << "objetosc tego : "<<obwodCuboid<<endl;
}
void Cylinder::obliczObjetosc()
{
    cout << "Wywołanie metody obliczObjetosc() zdefiniowanej w klasie Cylinder"
         << endl;
    
    cout << "promien" << promien << endl;
    float obwodCylinder=3.14*promien*promien*wysokosc;
    cout << obwodCylinder<<endl;

}
void Cone::obliczObjetosc()
{
    cout << "Wywołanie metody obliczObjetosc() zdefiniowanej w klasie Cone"
         << endl;
    cout << "Objetosc: " << objetosc << endl;
}

int main()
{
    Block *pointer;
    Cuboid cuboid1;
    // Przypisanie wskaźnikowi w_pracownik adresu obiektu pracownik1:
    pointer = &cuboid1;
    // Nadanie wartości zmiennym członkowskim obiektu pracownik1:
    pointer->objetosc = 5;
    // w_pracownik->cuboid = "Kowalski";//nazwiska nie ma w klasie bazowej Block i wskażnik go nie obsłuży
    // Wywołanie metody obliczObjetosc():
    pointer->obliczObjetosc(); // zostaje wywołana metoda z klasy bazowej Pracownik
    cout << endl;
    Cylinder cylinder1;
    pointer=&cylinder1;
    pointer->obliczObjetosc();
    cout<<endl;
    // Utworzenie obiektu pracownik2 jako instancji klasy //Nauczyciel:
    // Nauczyciel pracownik2;
    // pointer = &pracownik2;
    // pointer->obliczObjetosc(); //:(  z klasy Pracownik  :(.
    return 0;
}