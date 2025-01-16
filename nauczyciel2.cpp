#include <iostream>
using namespace std;

class Pracownik
{
public:
    string imie;
    string nazwisko;
    Pracownik(string imie_p, string nazwisko_p) : imie{imie_p}, nazwisko{nazwisko_p} {}
};

class Dyrektor : public Pracownik
{
public:
    long long poziom_cwela;
    void display()
    {
        cout << "Imie " << imie << endl;
        cout << "Nazwisko " << nazwisko << endl;
        cout << "poziom cwela " << poziom_cwela << endl
             << endl;
    }
    Dyrektor(string imie_p, string nazwisko_p, int poziom_cz) : Pracownik(imie_p, nazwisko_p) { poziom_cwela = poziom_cz; }
};

class Nauczyciel : public Pracownik
{
public:
    long poziom_nieuka;
     void display()
    {
        cout << "Imie " << imie << endl;
        cout << "Nazwisko " << nazwisko << endl;
        cout << "poziom nieuka " << poziom_nieuka << endl
             << endl;
    }
    Nauczyciel(string imie_p, string nazwisko_p, int poziom) : Pracownik(imie_p, nazwisko_p) { poziom_nieuka = poziom; }
};

class Sekretarka : public Pracownik
{
public:
    int poziom_niekompetencji;
    void display()
    {
        cout << "Imie " << imie << endl;
        cout << "Nazwisko " << nazwisko << endl;
        cout << "poziom niekompetencji " << poziom_niekompetencji << endl
             << endl;
    }
    Sekretarka(string imie_p, string nazwisko_p, int poziom_cz) : Pracownik(imie_p, nazwisko_p) { poziom_niekompetencji = poziom_cz; }
};

class Wychowawca : public Nauczyciel
{
    int poziom_czlowieka;

public:
    void display()
    {
        cout << "Imie " << imie << endl;
        cout << "Nazwisko " << nazwisko << endl;
        cout << "poziom nieuka " << poziom_nieuka << endl;
        cout << "poziom czlowieka " << poziom_czlowieka << endl
             << endl;
    }
    Wychowawca(string imie_p, string nazwisko_p, int poziom, int poziom_cz) : Nauczyciel(imie_p, nazwisko_p, poziom) { poziom_czlowieka = poziom_cz; }
};

int main()
{
    Sekretarka sekretarka1("jajo", "bomba", 16);
    Dyrektor dyrektor1("katarzyna", "kaluza", 20000000000);
    Wychowawca wychowawca1("bob", "the bill", 15, 12);
    Nauczyciel nauczyciel1("Robert","Zywczak",5);
    wychowawca1.display();
    sekretarka1.display();
    dyrektor1.display();
    nauczyciel1.display();
    return 0;
}