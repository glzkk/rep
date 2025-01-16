#include <iostream>
using namespace std;
int f(int n){
    if(n==0)return 3;
    else return f(n-1)+2;
}
long int potega(int p, int w){
    if(w==0) return 1;
    else return p*potega(p,w-1);
}
long int fiba(int n)
{
    if(n==1 || n==2) return 1;
    else return fiba(n-1)+fiba(n-2);

}
long int silnia(int n){
    if(n==0)return 1;
    else return n*silnia(n-1);

}
int main()
{
    int liczba=0;
    cout<<"podaj liczbe"<<endl;
    cin>>liczba;
   cout<<f(liczba)<<endl;
   int liczbaPotegi=0;
   cout<<"podaj liczbe potegi"<<endl;
   cin>>liczbaPotegi;
   cout<<potega(liczba,liczbaPotegi)<<endl;
   int liczbaFiba=0;
   cout<<"podej liczbe fiba"<<endl;
   cin>>liczbaFiba;
   cout<<fiba(liczbaFiba)<<endl;
    int liczbaSilnia=0;
   cout<<"podej liczbe silnia"<<endl;
   cin>>liczbaSilnia;
   cout<<silnia(liczbaSilnia);



   return 0;
}