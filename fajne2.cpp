#include <iostream>
#include <string>

// Funkcja rekurencyjna do odwracania ciągu znaków
void odwrocCiag(std::string str) {
    if (str.length() == 0) // warunek bazowy
        return;
    
    // Wywołanie rekurencyjne
    odwrocCiag(str.substr(1));
    
    // Wyświetlenie pierwszego znaku po odwrocie reszty ciągu
    std::cout << str[0];
}

int main() {
    std::string tekst;
    std::cout << "Podaj tekst do odwrócenia: ";
    std::getline(std::cin, tekst);

    std::cout << "Odwrócony tekst: ";
    odwrocCiag(tekst);
    std::cout << std::endl;

    return 0;
}
// #include <iostream>

// // Funkcja rekurencyjna do obliczania sumy cyfr liczby
// int suma_cyfr(int n) {
//     if (n == 0) // warunek bazowy
//         return 0;
//     else
//         return (n % 10) + suma_cyfr(n / 10); // wywołanie rekurencyjne
// }

// int main() {
//     int liczba;
//     std::cout << "Podaj liczbe: ";
//     std::cin >> liczba;

//     std::cout << "Suma cyfr liczby " << liczba << " to: " << suma_cyfr(liczba) << std::endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>

// // Funkcja rekurencyjna do znajdowania maksymalnego elementu w tablicy
// int maksymalnyElement(const std::vector<int>& tablica, int n) {
//     if (n == 1) // warunek bazowy
//         return tablica[0];
    
//     return std::max(tablica[n - 1], maksymalnyElement(tablica, n - 1)); // wywołanie rekurencyjne
// }

// int main() {
//     std::vector<int> tablica = {1, 4, 3, 7, 5, 9, 2};
//     int rozmiar = tablica.size();

//     std::cout << "Maksymalny element w tablicy to: " << maksymalnyElement(tablica, rozmiar) << std::endl;
//     return 0;
// }



// #include <iostream>

// // Funkcja rekurencyjna do rysowania wiersza gwiazdek
// void rysujWiersz(int n) {
//     if (n > 0) {
//         std::cout << "*";
//         rysujWiersz(n - 1); // wywołanie rekurencyjne
//     }
// }

// // Funkcja rekurencyjna do rysowania trójkąta
// void rysujTrojkat(int n) {
//     if (n > 0) {
//         rysujTrojkat(n - 1); // wywołanie rekurencyjne
//         rysujWiersz(n); // rysowanie aktualnego wiersza
//         std::cout << std::endl;
//     }
// }

// int main() {
//     int liczba;
//     std::cout << "Podaj liczbe wierszy trojkata: ";
//     std::cin >> liczba;

//     rysujTrojkat(liczba);
//     return 0;
// }

// #include <iostream>

// // Funkcja rekurencyjna do konwersji liczby na system binarny
// void binarny(int n) {
//     if (n > 1)
//         binarny(n / 2); // wywołanie rekurencyjne

//     std::cout << (n % 2); // wyświetlenie reszty
// }

// int main() {
//     int liczba;
//     std::cout << "Podaj liczbe do konwersji na system binarny: ";
//     std::cin >> liczba;

//     std::cout << "Liczba w systemie binarnym to: ";
//     binarny(liczba);
//     std::cout << std::endl;

//     return 0;
// }
