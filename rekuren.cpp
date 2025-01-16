// #include <iostream>

// using namespace std;
// int potega(int a, int b)
// {
//     if (b == 0)
//         return 1;
//     else
//         return a = a * potega(a, --b);
// }

// int main()
// {
//     int liczba = 0;
//     int liczbaPotegi = 0;
//     cout << "podaj liczbe" << endl;
//     cin >> liczba;

//     cout << "jaka potega" << endl;
//     cin >> liczbaPotegi;

//     cout << potega(liczba, liczbaPotegi);
//     return 0;
// }
// #include <iostream>
// #include <string>

// using namespace std;

// string odwracaj(string s) {
//     char znak = cin.get();
//     if (znak == '*') {
//         return s;
//     } else {
//         s = znak + s; // Dodajemy znak na początek istniejącego łańcucha
//         return odwracaj(s);
//     }
// }

// int main() {
//     cout << "Wprowadzaj znaki (zakończ znakiem '*'): ";
//     string wynik = ""; // Inicjalizujemy pusty łańcuch
//     wynik = odwracaj(wynik);
//     cout << "Odwrócony ciąg: " << wynik << endl;
//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// void liczby(int n) //rekurencja
// {
//     if (n == 0)
//         return;
//     else
//     {
//         cout << n<<endl;
//         return liczby(n - 1);
//     }
// }
// int main()
// {
//     int poczatek;
//     cout << endl<<"podaj liczbę naturalną, a wypisze mniejszelub rowne"<<endl;;
//     cin >> poczatek;
//     // for (short i = poczatek; i > 0; i--)//iteracja
//     // {
//     //    cout<<i<<endl;
//     // }
//     liczby(poczatek);
//     return 0;
// }
#include <iostream>
#include <cstdio>
using namespace std;
int rekurencja(int n)
{
    if (n == 1)
    {
        return 3;
    }
    else
    {

        return rekurencja(n - 1) + 2;
    }
}
int main()
{
    cout << rekurencja(25);
    return 0;
}
// #include <iostream>
// using namespace std;
// int silnia(int n)
// {
//     if (n == 1)
//     {
//         return 2;
//     }
//     else if (n == 2)
//     {
//         return 1;
//     }
//     else
//         return silnia(n - 1) * silnia(n - 1) - silnia(n - 2) * silnia(n - 2);
// }
// // long long silnia(int n)
// // {
// //  if(n<2)
// //         return 1; //silnia z 0 i 1 wynosi 1

// // return n*silnia(n-1); //wywołanie funkcji przez samą siebie ze zmniejszonym argumentem
// // }

// // int main()
// // {
// //  int n;

// //  cout<<"Podaj liczbę: ";
// //  cin>>n;
// //  cout<<"n! = "<<silnia(n)<<endl;

// //  system("pause");
// //  return 0;
// // }
// int main()
// {
//     // silnia iteracyjnie
//     int liczba;
//     cin >> liczba;
//     // for(int i=1; i<=liczba; i++){
//     // wynik=wynik*i;
//     // }
//     // silnia rekurencyjnie
//     // cout << sizeof(short int) << endl;
//     cout << silnia(liczba);
//     return 0;
// }
// #include <iostream>
// using namespace std;

// // Funkcja rekurencyjna do obliczenia n-tego elementu ciągu
// int a(int n) {
//     if (n == 1) {
//         return 1;  // Zdefiniowanie a1 = 1
//     }
//     // Rekurencyjne wywołanie dla an = (a_(n-1)^2 - 1) / 4
//     return (a(n - 1) * a(n - 1) - 1) / 4;
// }

// int main() {
//     int n = 10;
//     cout << "a" << n << " = " << a(n) << endl;  // Oblicz a10
//     return 0;
// }