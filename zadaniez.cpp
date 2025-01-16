#include <iostream>
using namespace std;
namespace dawnemiary {
// Definicja nowego typu danych o nazwie real:
typedef int dawne;
dawne sazen=180;

/* UWAGA
* Identyfikator real stanowi faktycznie alias nazwy float.
*/
// Definicja stałej PI:

}

int main()
{
    cout<<"Powiedz jaki masz wzrost";
    int wzrost;
    cin>>wzrost;
    int sazenwzrost;
    sazenwzrost=wzrost/dawnemiary::sazen;
    cout<<sazenwzrost<<endl;

    
return 0;   
}





                                        // Rzutowanie
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "podaj pierwsza cyfra";
//     char znak1;
//     cin >> znak1;
//     cout << "podaj druga cyfra";
//     char znak2;

//     cin >> znak2;

//     int liczba, liczba1;
//     // string slowo;
//     liczba = (int)znak1;
//     liczba -= 48;
//     liczba1 = (int)znak2;
//     liczba1-=48;
//      // rzutowanie typu (konwersja typu)
//     // liczba=(int)slowo; // nie wszystko nasz kompilator skonwertuje
//     cout << liczba+liczba1 << endl;
    
//     // pokonwertowac float i inne
//     return 0;
// }

// Jakies tam dzialania
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "podaj pierwsza liczbe";
//     int liczba1;
//     int liczba2;

//     cin >> liczba1;
//     cout << "podaj druga liczbe";
//     cin >> liczba2;

//     int wynik;
//     {
//         wynik = liczba1 & liczba2; // 0111 AND na bitach liczby
//         wynik << 2;
//         cout << wynik << endl;
//     }
//     {
//         wynik = liczba1 | liczba2; // 0111 OR na bitach liczby
//         cout << wynik << endl;
//     }
//     {
//         wynik = liczba1 ^ liczba2; // 0000 XOR na bitach liczby
//         wynik << 2;
//         cout << wynik << endl;
//     }
//     {
//         wynik = ~liczba1 & liczba2; // -1000
//         wynik << 2;
//         cout << wynik << endl;
//     }
//     {
//         wynik = liczba1 << liczba2; // 11100
//         wynik << 2;
//         cout << wynik << endl;
//     }
//     {
//         wynik = liczba1 >> 1 & liczba2 >> 1; // 0011
//         wynik << 2;
//         cout << wynik << endl;
//     }
//      wynik=~(liczba1);
//      cout<<wynik<<endl;
//      wynik=~(liczba2);
//      cout<<wynik<<endl;
//     cout << (liczba1 >> 2) << endl;
//     cout << (liczba1 << 3) << endl;
//     return 0;
// }
// Silnia
// #include <iostream>
// using namespace std;

// unsigned long long silnia(int n)
// {
//     if (n == 0)
//         return 1;
//     else
//         return silnia(n - 1) * n;
// }
// int main()
// {
//     // silnia iteracyjnie
//     unsigned long long liczba, wynik = 1;
//     cin >> liczba;
//     // for(int i=1; i<=liczba; i++){
//     // wynik=wynik*i;
//     // }
//     // silnia rekurencyjnie
//     cout << sizeof(short int) << endl;
//     cout << silnia(liczba);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
// int liczba ;
// cout<<"Podaj liczbe a powiem ci czy dzilenia przez 5 z reszta 2"<<endl;
// cin>>liczba;
// cout << "Podana liczba to = " << liczba << endl;
// string dzielenie;
// if (liczba %5 == 2) dzielenie = "Reszta z dzielenia to 2 ";
// else  dzielenie="Liczbe nie daje reszty 2";
// cout<< dzielenie<<endl;
// return 0;
// }

/*
  #include <iostream>
  using namespace std;
  int main(){
      int liczba;
      cout<<"podaj argument"<<endl;
      cin>>liczba;
      cout <<"liczba = "<<liczba<<endl;
      string wartosc;
      if(liczba<=0)wartosc="0";
      if(liczba>0)wartosc="1";
      cout<<"funkcja="<<wartosc<<endl;
      return 0;
  }
  */

/*      OBLICZA CZY PARZYSTA
#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cout << "wprowadz liczbe" << endl;
    cin >> liczba;
    if (liczba%2==0)
        cout <<"parzysta"<< endl;
    else if(liczba==0)
        cout<<"zero"<<endl;
    else
        cout <<"nie jest parzysta"<< endl;

    return(0);
}
*/
/*          przyklad z klamrami
#include <iostream>
using namespace std;
int main() {
int liczba ;
cout << "Podaj liczbe, jesli jest dodatnia wypisze lub zerowa wypisze 0 a jesli ujemna to 1" << endl;
cin>>liczba;
cout << "Liczba = " << liczba << endl;
int wartosc=17;
// Zastosowanie instrukcji warunkowych:
if (liczba < 0){
wartosc = 0;
cout<<"podales liczbe ujemna"<<endl;
}//do ifa jest przyklejona tylko następna jedna instrukcja.
// Jak chcesz przykleić więcej to musisz zrobić blok z nawiasów klamrowych
else  wartosc=1;
cout << "wartosc funkcji: " << wartosc << endl;
return 0;
}*/

/*  SKRYPT DODATNIA CZY UJEMNA I ZERO
    #include <iostream>
using namespace std;
int main() {
int liczba ;
cout<<"podaj liczbę a powiem czy jest czy dodatnia ujemna"<<endl;
cin>>liczba;
cout << "Liczba = " << liczba << endl;
string znak;
// Zastosowanie instrukcji warunkowych:
if (liczba > 0) znak = "dodatnia";
else if(liczba<0) znak="ujemna";
else znak="zero";
cout << "Znak liczby: " << znak << endl;
return 0;
}

*/

// ZADANIE //COOLA

/*#include <iostream>
using namespace std;
namespace volume {
    const float cola=0.33;
    const float flaszka=0.5;
    const float liter=1;
}

int main()
{   int a = 10;
    int b = 15;
    int c = 10;
    cout<<a*volume::cola;
    cout<<b*volume::flaszka;
    cout<<c*volume::liter;

}

*/

//                LICZBA PI
/*#include <iostream>
using namespace std;
namespace p1 {
    typedef float real;
    const float PI=3.14159;
}
namespace p2 {
const double PI=3;
}
int main()
{
    p1::real liczba=5;
    liczba=liczba*p2::PI;
    cout<<liczba<<endl;
    return 0;
}
*/

// ODWROTNOSC

// #include <iostream>
// using namespace std;
// int main()
//{
// int liczba = 7; // 0111
// int wynik;

// wynik=(~(-65));
// cout<<wynik<<endl;

// wynik=2147483647;
// cout<<wynik<<endl;

// cout<<sizeof( int)<<endl;
// return 0;
//}
