#include <iostream>

#define PI 3.14
#define Do2 r*r
#define OBLICZPOLE (PI * Do2)
#define OBLICZOBWOD (2 * r * PI)

using namespace std;
int main()
{
    int r;

    cout << "podaj r" << endl;
    cin >> r;
    cout<<"TWOJE R:" << r << endl;
    cout<<"LICZBA PI:" << PI << endl;
    cout<<"R DO 2:" << Do2 << endl;
    cout << "POLE:" << OBLICZPOLE << endl;
    cout << "OBWOD:" << OBLICZOBWOD << endl;

    return 0;
}