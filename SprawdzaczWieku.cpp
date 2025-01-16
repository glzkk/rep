#include <iostream>
using namespace std;
int main()
{
    int wiek;
    cout << "podaj wiek a ja cie opisze" << endl;
    cin >> wiek;
    cout << "Wiek = " << wiek << endl;

    // Zastosowanie instrukcji warunkowych:
    if(wiek<0){
        cout<<"Podaj prawidlowy wiek"<<endl;
    }
    if (wiek < 20&wiek>0)
    {
        cout << " Jestes zoomerem " << endl;
    }
    if (wiek > 20 & wiek < 60)
    {
        cout << "Jestes x-genem " << endl;
    }
    if (wiek > 60)
    {
        cout << "Jestes boomerem" << endl;
    }

    return 0;
}