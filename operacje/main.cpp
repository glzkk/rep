#include <iostream>
#include <string>
#include "operacje.h"
using namespace std;
int main()
{
    cout << "podaj bok" << endl;
    double bok;
    cin >> bok;
    
    cout << "pole kw:" << poleKw(bok) << endl;
    cout << "pole pr:" << obwodKw(bok) << endl;
    return 0;
}
