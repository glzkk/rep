  #include <iostream>
    using namespace std;
    int main(){
        int liczba;
        cout<<"podaj liczbe a ja powiem ile lekcji ci zostlo i jaka masz teraz"<<endl;
        cin>>liczba; 
        string wartosc;
        if(liczba==1)wartosc="biologia";
        if(liczba==2)wartosc="chemia";
        if(liczba==3)wartosc="fizyka";
        if(liczba==4)wartosc="matematyka";
        if(liczba==5)wartosc="praktyka1";
        if(liczba==6)wartosc="praktyka2";
       string zostalo;
       if(liczba==1)zostalo="jeszcze 6 lekcji(biologia,chemia,fizyka,matematyka,praktyka1,praktyka2)";
       if(liczba==2)zostalo="jeszcze 5 lekcji(chemia,fizyka,matematyka,praktyka1,praktyka2)";
       if(liczba==3)zostalo="jeszcze 4 lekcje(fizyka,matematyka,praktyka1,praktyka2)";
       if(liczba==4)zostalo="jeszcze 3 lekcje(matematyka,praktyka1,praktyka2)";
       if(liczba==5)zostalo="jeszcze 2 lekcje(praktyka1,praktyka2)";
       if(liczba==6)zostalo="jeszcze 1 lekcja(praktyka2)";
        
        cout<<"lekcja="<<wartosc<<endl;
        cout<<"zostala="<<zostalo<<endl;
        
        return 0;
    }