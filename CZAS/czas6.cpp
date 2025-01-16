#include <iostream>
using namespace std;

double milimetryNaCentymetry(double milimetry) {
    return milimetry / 10.0;
}

double milimetryNaMetry(double milimetry) {
    return milimetry / 1000.0;
}

double milimetryNaKilometry(double milimetry) {
    return milimetry / 1000000.0;
}

int main() {
    double milimetry;
    int wybor;

    cout << "Podaj dlugosc w milimetrach: ";
    cin >> milimetry;

    cout << "Wybierz, co chcesz obliczyc:" << endl;
    cout << "1. Centymetry" << endl;
    cout << "2. Metry" << endl;
    cout << "3. Kilometry" << endl;
    cout << "Wybor: ";
    cin >> wybor;

    switch (wybor) {
        case 1:
            cout << milimetry << " milimetrów to " << milimetryNaCentymetry(milimetry) << " centymetrów" << endl;
            break;
        case 2:
            cout << milimetry << " milimetrów to " << milimetryNaMetry(milimetry) << " metrów" << endl;
            break;
        case 3:
            cout << milimetry << " milimetrów to " << milimetryNaKilometry(milimetry) << " kilometrów" << endl;
            break;
        default:
            cout << "Niepoprawny wybór" << endl;
            break;
    }

    return 0;
}
