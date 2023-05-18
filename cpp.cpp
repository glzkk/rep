
#include <iostream>
using namespace std;
int main()
{
    char litera;
    cout << "podaj literke" << endl;
    cin >> litera;
    int liczba;
    liczba=(int)litera;
    if(liczba>64&&liczba<91);//Duza liczba
    cout<<"twoja literka jest duza"<<endl;
    if(liczba>96&&liczba<123);
    cout<<"twoj literka jest mala"<<endl;
    else
    cout<<"podales zla liczbe"<endl;

    return(0);
}

















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


        //ODWROTNOSC

//#include <iostream>
//using namespace std;
//int main()
//{
//int liczba = 7; // 0111
 //int wynik;

//wynik=(~(-65));
//cout<<wynik<<endl;


// wynik=2147483647;
// cout<<wynik<<endl;

// cout<<sizeof( int)<<endl;
//return 0;
//}









