#include <iostream>
using namespace std;

class Osoba
{
private:
    int id;
    string Imie;

public:
  static string s_szkola;
    Osoba(int id,string imie)
    {
        int id;
        string imie;

    }
    Osoba()
    {
        int id=0;
        string imie="";
    };

    void setImie(string nazwa)
    {
        nazwa=Imie;
    }
     void getImie(string &nazwa)
  {
        Imie=nazwa;
  }
};

  
int main()
{
   Osoba osoba1;
    string Imie;
cout << "podaj imie\n";
  cin >> Imie;
  osoba1.setImie(Imie);
   string nazwa1;
  osoba1.getImie(nazwa1);
    cout<<osoba1.Imie;
    return 0;
}
