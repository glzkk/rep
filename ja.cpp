#include <iostream>
using namespace std;
// Definicja klasy Auto:
class Auto {
public:
string marka;
string model;
int rokProdukcji;
float cena;
int numerRejestracyjny;
void wyswietlDane() {
cout << "Marka " << marka << endl;
cout << "model: " << model << endl;
cout << "rokProdukcji " << rokProdukcji << endl;
cout << "  cena " << cena << endl;
cout << "   numerRejestracyjny " << numerRejestracyjny << endl;
void lepszeAuto();
}
};

Auto *pobierzDane(Auto*);
void wyswietlDane(const Auto*);
// PROGRAM GŁÓWNY
int main() {

Auto *w_Auto = new Auto();
w_Auto = pobierzDane(w_Auto);
// Prezentacja danych Autoa na ekranie monitora:
wyswietlDane(w_Auto);
// Usunięcie obiektu wskazywanego przez wskaźnik w_Auto:
delete w_Auto;
return 0;
}
// Definicje funkcji zewnętrznych:
Auto* pobierzDane(Auto *w_p) {
cout << "marka = "; cin >> w_p->marka;
cout << "model = "; cin >> w_p->model;
cout << "rokProdukcji = "; cin >> w_p->rokProdukcji;
cout << "cena = "; cin >> w_p->cena;
cout << "numerRejestracyjny = "; cin >> w_p->numerRejestracyjny;
return w_p;
}
void wyswietlDane(const Auto *w_p) {

cout << "marka = "  <<w_p->marka<< endl;
cout << "model = "  <<w_p->model<< endl;
cout << "rokProdukcji = " << w_p->rokProdukcji<< endl;
cout << "cena = " << w_p->cena<< endl;
cout << "numerRejestracyjny = " << w_p->numerRejestracyjny<< endl;
}