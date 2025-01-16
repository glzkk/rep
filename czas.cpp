#include <iostream>
using namespace std;
void obliczCzas(int czasWSek)
{
    int czasGodziny = 0;
    int czasMinuty = 0;
    int czasSekundy = 0;
    czasGodziny = czasWSek / 3600;
    czasWSek = czasWSek % 3600;
    czasMinuty = czasWSek / 60;
    czasWSek = czasWSek % 60;
    czasSekundy = czasWSek;
    
    cout << "Godziny jest : " << czasGodziny << endl;
    cout << "Minut jest : " << czasMinuty << endl;
    cout << "Sekund jest : " << czasSekundy << endl;
}

int main()

{
    int podajCzas = 0;
    cout << "Podaj czas w sekundach a ja powiem ile jest godzin, minut, sekund" << endl;
    cin >> podajCzas;
    cout<< "Podales sekund :"<<podajCzas<<endl;
    obliczCzas(podajCzas);
    return 0;
}