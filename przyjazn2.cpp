#include <iostream>
#define _USE_MATH_DEFINES // w celu użycia stałej M_PI, która nie jest zdefiniowana w standardowym C/C++
#include <cmath>
using namespace std;
// Definicja klasy walec:
class Dane {
// Deklaracja prywatnej zmiennej członkowskiej:
double _r;
int wysokosc;
public:
// Prototypy publicznych funkcji dostępowych:
void setpromien(double); // setter
double getpromien(); // getter
void setWysokosc(int); // setter
double getWysokosc(); // getter
friend class Cylinder;

};
class Cylinder : public Dane{
double volume();


};
class Stozek{

};
// Definicje metod klasy walec:
void Dane::setpromien(double r) {
_r = r;
}
void Dane::setWysokosc(int wysokoscH){
    int wysokosc=wysokoscH;
}
void volume(double _r,int wysokosc){
   return 2 * M_PI * walec._r * (walec._r+walec.wysokosc);
}
void Cylinder::volume()
{
    cout << "Wywołanie metody obliczObjetosc() zdefiniowanej w klasie Cone"
         << endl;
    cout << "Objetosc: " << objetosc << endl;
}
// double Dane::getwalec() {
// return _r;
// }
// Definicja klasy Kolo:
// class Kolo {
// /* UWAGA
// * Klasa Kolo jest klasą zaprzyjaźnioną klasy walec.
// */
// public:
// double pole(Dane);
// double obwod(Dane);
// };
// Definicje metod klasy Kolo:
// double Kolo::pole(Dane walec) {
// return M_PI * walec._r * walec._r;
/* UWAGA
* W ciele funkcji członkowskiej pole() należącej do klasy Kolo, która jest „przyjacielem” klasy walec,
* wykorzystano prywatną zmienną członkowską _r zdefiniowaną w klasie walec.
*/
// }

// double Kolo::obwod(walec walec) {
// return 2 * M_PI * walec._r;
/* UWAGA
* Metoda obwod() z klasy Kolo, będącej „przyjacielem” klasy walec, wykorzystuje prywatną zmienną
* członkowską _r zdefiniowaną w klasie walec.
*/
// Definicja klasy Kula, która jest zaprzyjaźniona z klasą walec:
// class Kula {
// public:
// double objetosc(Dane);
// double pole(Dane);
// };
// // Definicje metod klasy Kula:
// double Kula::objetosc(walec walec) {
// return double(4)/double(3) * M_PI * walec._r * walec._r * walec._r;
// void volume(Dane){
//     return 2 * M_PI * walec._r * (walec._r+walec.wysokosc);
// }
/* UWAGA
* W treści funkcji członkowskiej objetosc() należącej do klasy Kula (która jest „przyjacielem” klasy walec)
* wykorzystano prywatną zmienną członkowską _r zdefiniowaną w klasie walec.
*/
// }
// double Kula::pole(walec walec) {
// return 4 * M_PI * walec._r * walec._r;
// }

int main() {
// Utworzenie obiektu walec jako instancji klasy walec:
Dane *pointer;
Cylinder cylinder1;
pointer=&cylinder1;
pointer->volume();
walec.setpromien(1); // wywołanie metody instancyjnej klasy walec
walec.setWysokosc(5);
cout << "Pole koła wynosi: " << walec.volume(walec) << endl;
cout << "Obwód koła wynosi: " << kolo.obwod(walec) << endl;
walec.setwalec(2); // wywołanie metody instancyjnej klasy walec
cout << "Objętość kuli wynosi: " << kula.objetosc(walec) << endl;
cout << "Pole powierzchni kuli wynosi: " << kula.pole(walec) << endl;


return 0;
}

//    void setRokWydania(int rok_wydaniaN)
//     {
//         rok_wydania = rok_wydaniaN;
//     }
//     string getTytul()
//     {
//         return tytul;
//     }
//     string getAutor()
//     {
//         return autor;
//     }
//     int getRokWydania()
//     {
//         return rok_wydania;
//     }