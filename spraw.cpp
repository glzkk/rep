//grupa A
// Stwórz klasę „książka” zawierającą:
// – pola prywatne: tytuł, autor, rok wydania
// – settery i gettery do prywatnych pól
// – metoda wypisująca informację o książce
// – lista użyta do inicjalizacji
// – konstruktor parametryczny i kopiujący
// – pole statyczne zliczające liczbę książek
// – delegowanie konstruktora bezparametrowego do konstruktora parametrycznego
// – W programie użyty konstruktor parametryczny i kopiujący
// -W programie zdefiniuj funkcje która pobiera obiekt jako parametr i zwraca obiekt  w którym imie i nazwisko autora są wielkimi literami.
#include <iostream>
#include <string>
using namespace std;
class Ksiazka {
    private:
        string tytul{};
        string autor{};
        int rok_wydania{};
public:
static int liczbaKsiazek;
    
    Ksiazka(){
        tytul="";
        autor="";
        rok_wydania=0;
        liczbaKsiazek++;
    }
    Ksiazka(string tytulNowy,string autorNowy,int rok_wydaniaN){
        tytul = tytulNowy;
        autor = autorNowy;
        rok_wydania = rok_wydaniaN;
    }
    Ksiazka(string tytul,string autor,int rok_wydania) : Ksiazka(tytul,autor,rok_wydania){
        //delegowanie baza
    }
   
    Ksiazka(string tytul,string autor,int rok_wydania) : tytul(tytul), autor(autor), rok_wydania(rok_wydania) {
        cout << ""<<endl;
    }

    Ksiazka(Ksiazka& kopiujacaKsiazka) : tytul(kopiujacaKsiazka.tytul), autor(kopiujacaKsiazka.autor), rok_wydania(kopiujacaKsiazka.rok_wydania) {
        cout << "kopiujacy"<<endl;
    }
      void setTytul(string tytulNowy)
    {
        tytul = tytulNowy;
    }
    void setAutor(string autorNowy)
    {
        autor = autorNowy;
    }
    void setRokWydania(int rok_wydaniaN)
    {
        rok_wydania = rok_wydaniaN;
    }
    string getTytul()
    {
        return tytul;
    }
    string getAutor()
    {
        return autor;
    }
    int getRokWydania()
    {
        return rok_wydania;
    }
    string zwrocDane() {
return tytul + " " + autor;
}
string zwrocDane() {
return getTytul() + " " + getAutor();
}

int Ksiazka::liczbKsiazek = 0;
};
int main() {

    Ksiazka ksiazkaF;
    ksiazkaF.setTytul("malyksiaze");
    cout<<endl;
    ksiazkaF.setAutor("autor");
    cout<<endl;
    ksiazkaF.setRokWydania(1400);
    cout<<endl;
    ksiazkaF.zwrocDane();
    cout<<ksiazkaF.liczbaKsiazek;
   
    return 0;
}