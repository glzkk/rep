
// odczyt  dodaj dzielic przez 5 i wynik dodaje do pliku
// Plik:
// Pobierz 5 liczb od użytkownika i zapisz je do pliku. Odczytaj je i oblicz ich srednią. Dopisz ją do pliku.


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Dane {
    int liczby;

};
      void wyswietlwszystko() {
    fstream plik;
    plik.open("poprawapliki.txt", ios::in);
    if (plik.good()) {
        Dane cyferki;
      
        while (plik >> cyferki.liczby) {
            cout << "liczby: " << cyferki.liczby <<endl;
        
        }
       
    }
    plik.close();
}
void suma(){
    fstream plik;
    plik.open("poprawapliki.txt",ios::in);
    
    if(plik.good()){
        Dane cyferki;
        int suma;
        while(plik>>cyferki.liczby){
            int suma=cyferki.liczby+suma;
            cout<<"suma : "<< suma<<endl;
        }
       
        
    }
}
// void sumaISrednia(int suma)
// {
//     Dane cyferki;
//   for (int i = 0; i < 5; i++)
//   {
//     int suma=cyferki.liczby+suma;
    
//   }
//   int sumaWypisz=suma;
//   cout<<sumaWypisz;
// }
// void srednia(){
//     fstream plik;
//     plik.open("poprawapliki.txt", ios::in);
//     if(plik.good()){
//         Dane cyferki;
//         while(plik>>cyferki.liczby){
//             int suma=cyferki.liczby[1]+cyferki.liczby[2]+liczby[3]+liczby[4]+liczby[5];
//         }
//     }
// }
int main()
{
    Dane cyferki;
    fstream plik;
    plik.open("poprawapliki.txt", ios::in | ios::out | ios::app);
    if(plik.good()==true)
    {
        int liczby[5];
         cout << "podaj 5 liczb : " << endl;

        for (int i = 0; i < 5; i++) {
            cin >> liczby[i];
            plik << liczby[i] << " ";
        }

    
        plik.close();
        
    }
    
    suma();
     cout << "wszystkie rekordy:" << endl;
    wyswietlwszystko();

    }


   
  
    
    







