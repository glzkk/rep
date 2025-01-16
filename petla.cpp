#include <iostream>
using namespace std;
int main()
{
  double input1, input2 = 0;

  cout << "Podaj liczbe a ja je podziele" << endl;

  cin >> input1;

  for (int i; input2 == 0;)
  {

    cin >> input2;
    if (input2 == 0)
    {
      cout << "druga liczba nie może być zero" << endl;
    }
  }

  cout << "Dzielenie:" << input1 / input2 << endl;
  return 0;
}