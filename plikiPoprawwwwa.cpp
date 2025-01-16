// Wpisz do pliku 10 losowych liczb z przedzialu od 10 do 20 (otwarty). Znajdź i policz wszystkie liczby które różnią się od średniej o mniej niż 3. Dopisz je do pliku.

#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    ofstream plik("wyjscie.txt", ios::app);
    if (!plik) {
        cout << "Ni udalo sie" << endl;
        return 1;
    }

   
    vector<int> numers;
    int numer;
    cout << "Dawej 5 numerow ";
    for (int i = 0; i < 5; ++i) {
        cin >> numer;
        numers.push_back(numer); 
        plik << numer << " ";  
    }
    plik << endl;
    plik.close(); 

   
    ifstream wPliku("wyjscie.txt");
    if (!wPliku) {
        cout << "Ni udalo si" << endl;
        return 1;
    }

   
    vector<int> cyferkiPlik;
    while (wPliku >> numer) {
        cyferkiPlik.push_back(numer); 
        
    }
    wPliku.close();

  
        
    
    int suma = 0;
    for (int num : cyferkiPlik) {
        suma += num;
    }
    int srednia = suma / cyferkiPlik.size();



 
    plik.open("wyjscie.txt", ios::app);
    if (!plik) {
        cout << "Nie udalo sie otworzyc" << endl;
        return 1;
    }
    plik << "srednia: " << srednia << endl;
    plik.close();

    return 0;
}