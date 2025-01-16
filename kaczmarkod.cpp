#include <iostream>
#include <string>
using namespace std;

class Osoba
{
private:
    int id;
    string imie;

public:
    static int liczbaInstancji;
    Osoba()
    {
        liczbaInstancji++;
        id = 0;
        imie = "";
    }
    Osoba(string imieP, int idP)
    {
        imie = imieP;
        id = idP;
    }
    void getId(int &idObiektu)
    {
        idObiektu = id;
    }
    void getImie(string &imiedObiektu)
    {
        imiedObiektu = imie;
    }
    void setId(int idNowe)
    {
        id = idNowe;
    }
    void setImie(string imieNowe)
    {
        imie = imieNowe;
    }
    void powitanie(string imieP)
    {
        if (imie == "")
        {
            cout << "brak danych";
        }
        else
        {
            cout << "czesc " << imieP << " mam na imie " << imie;
        }
    }
};
int Osoba::liczbaInstancji = 0;

int main()
{
    Osoba person,personess;
    person.powitanie("bob");
    person.setImie("Stefan");
    cout<<endl;
    person.powitanie("bob");
    cout<<endl;
    cout<<person.liczbaInstancji;

    return 0;
}
