#include <iostream>
using namespace std;

/*
nazwa funkcji: plec

opis funkcji: sprawdzamy 9 indeks(10 numer) peselu jesli parzysta to kobieta jesli nie to chlop

parametry: string-PESEL

zwracany typ i opis: char K to kobieta albo char M to chlop

autor: zdajacy
*/
char plec(string &PESEL)
{
    if (PESEL[9] % 2 == 0) // sprawdza czy parzysta
    {
        return 'K'; // Baba
    }
    else
    {
        return 'M'; // Chlop
    }
}
/*
nazwa funkcji: data

opis funkcji: pisze miesiac dzien rok urodzenioa

parametry: string-PESEL

zwracany typ i opis: miesiac to miesiac .

autor: zdajacy
*/
void data(string pesel)
{
  int rokUrodzenia = ((int)pesel[0] - 48) * 10 + ((int)pesel[1] - 48);

  // rok  1977 poczatek ustalania numeru pesel

  int miesiac = ((int)pesel[2] - 48) * 10 + ((int)pesel[3] - 48);

  if (miesiac > 20)
  {
    rokUrodzenia += 2000;
  }
  else
  {
    rokUrodzenia += 1900;
  }

  if (rokUrodzenia > 1999)
  {
    miesiac -= 20;
  }

  int dzien = ((int)pesel[4] - 48) * 10 + ((int)pesel[5] - 48);
  cout << "Urodziłeś się: ";

  if (dzien < 10)
  {
    cout << "0" << dzien;
  }
  else
  {
    cout << dzien;
  }
  cout << ".";

//   if (miesiac < 10)
//   {
//     cout << "0" << miesiac;
//   }
//   else
//   {
//     cout << miesiac;
//   }
 if(miesiac=1){
    cout<<"styczen"<<endl;
  }
   if(miesiac=2){
    cout<<"luty"<<endl;
  }
   if(miesiac=4){
    cout<<"kwiecien"<<endl;
  }
   if(miesiac=5){
    cout<<"maj"<<endl;
  }
   if(miesiac=6){
    cout<<"czerwiec"<<endl;
  }
   if(miesiac=7){
    cout<<"lipiec"<<endl;
  }
   if(miesiac=8){
    cout<<"sierpien"<<endl;
  }
   if(miesiac=9){
    cout<<"wrzesien"<<endl;
  }
     if(miesiac=10){
    cout<<"pazdziernik"<<endl;
  }
     if(miesiac=11){
    cout<<"listopad"<<endl;
  }
     if(miesiac=12){
    cout<<"grudzien"<<endl;
  }

  if(miesiac=3){
    cout<<"marzec"<<endl;
  }
    

  cout << ".";
  cout << rokUrodzenia << endl;
}

/*
nazwa funkcji: sumaKontrolna

opis funkcji: 

parametry: string-PESEL

zwracany typ i opis: char K to kobieta albo char M to chlop

autor: zdajacy
*/
bool sumaKontrolna(string &PESEL)
{
    // Waga
    int wagi[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
    int S = 0;
    int R = 0;

    // Obliczenia
    for (int i = 0; i < 10; i++)
    {
        S += (PESEL[i] - '0') * wagi[i];
    }
    // MODULO S 10
    int M = S % 10;
    // Jesli  M = 0 TO R=0 jesli nie to R=10-M
    if (M == 0)
    {
        R = 0;
    }
    else
    {
        R = 10 - M;
    }
    // suma kontrolna musi byc rowna jedenastej cyfrze numeru pesel jesli tak to true jesli nie to fales
    if (R == PESEL[10] - '0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    string PESEL;
    cout << "napisz mi swoj pesel a ja powiem ci czy jestes chlop czy baba\n";
    cin >> PESEL;

    // cout<<PESEL[2]<<endl;
    cout << PESEL << endl;

    if (PESEL.length() != 11)
    {
        cout << "Zly pesel powwino byc 11 cyfr" << endl;
    }

    if (plec(PESEL) == 'K')
    {
        cout << "Jestes Baba" << endl;
    }
    else if (plec(PESEL) == 'M')
    {
        cout << "Jestes Chlop" << endl;
    }

    if (sumaKontrolna(PESEL))
    {
        cout << "pesel zgodny z suma kontrolna" << endl;
    }
    else
    {
        cout << "pesel niezgodny z suma kontrolna" << endl;
    }
    data(PESEL);

    return 0;
}
