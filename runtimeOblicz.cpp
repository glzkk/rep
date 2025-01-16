
#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include "Windows.h"
using namespace std;
using namespace std::chrono_literals;
using namespace std::chrono;

 inline int dodawanie(int pierwszaLiczba, int drugaLiczba)
{
//    
    int wynik = 1;
    wynik = pierwszaLiczba+drugaLiczba;

    return wynik;
}
int main()
{
    int pierwszaLiczba=2;
    int drugaLiczba=2;
    int wynik;
    auto start = high_resolution_clock::now();
     cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
    cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
      cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
        cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
          cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
            cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
             cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
    cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
      cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
        cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
          cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;
            cout<<dodawanie(pierwszaLiczba,drugaLiczba)<<endl;  

    auto stop = high_resolution_clock::now();
 
   
    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
    return 0;
}