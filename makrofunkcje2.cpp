#include <iostream>
// Definicja stałej PI:
// #define PI 3.14159
// Definicja makroprocedury READ_VARIABLE:
#define READ_VARIABLE(m, v) \
    std::cout << m;         \
    std::cin >> v
#define poleProstoKata bok1 *bok2
#define ObwodProstokata bok1 *bok1 + bok2 *bok2

using namespace std;
int main()
{
    int bok1;
    int bok2;
    int pole;
    int obwod;
#ifdef READ_VARIABLE
    READ_VARIABLE("podaj 1 bok prostokatu", bok1);
#endif
#ifndef READ_VARIABLE // jeśli nie zdefiniowano makroprocedury READ_VARIABLE
    cout << "podaj 1 bok: ";
    cin >> bok1;
#endif
    cout << "to twoj 1 bok:" << bok1 << endl;
#ifdef READ_VARIABLE
    READ_VARIABLE("podaj 2 bok prostokatu", bok2);
#endif
#ifndef READ_VARIABLE // jeśli nie zdefiniowano makroprocedury READ_VARIABLE
    cout << "podaj 2 bok: ";
    cin >> bok2;
#endif
    cout << "oto twoj 2 bok :" << bok2 << endl;
#ifdef poleProstoKata // jeśli zdefiniowano zamiennik (stałą) o nazwie PI
    pole = poleProstoKata;
#endif
#ifndef poleProstoKata // jeśli nie zdefiniowano stałej PI
    pole = bok1 * bok2;
#endif
#ifdef ObwodProstokata // jeśli zdefiniowano zamiennik (stałą) o nazwie PI
    obwod = ObwodProstokata;
#endif
#ifndef ObwodProstokata // jeśli nie zdefiniowano stałej PI
    obwod = bok1 * bok1 + bok2 * bok2;
#endif
    cout << "TO TWOJE POLE : " << pole << endl;
    cout << " TO TWOJ OBWOD : " << obwod << endl;
    return 0;
}