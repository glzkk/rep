#include <iostream>
using namespace std;
template <typename T>
T funkcja(T napis)
{
    cout << "int ";
    return napis;
}
template <>
double funkcja(
    double napis)
{
    cout << "double ";
    return napis;
}
template <>
float funkcja(
    float napis)
{
    cout << "float ";
    return napis;
}
int main()
{
    cout << "liczba " << funkcja(1) << endl;
    cout << "liczba " << funkcja<double>(2) << endl;
    cout << "liczba " << funkcja<float>(3) << endl;
    return 0;
}