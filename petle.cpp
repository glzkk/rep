#include <iostream>
using namespace std;
int main()
{
    int nieparzyste = 0;
    int suma = 0;
    for (int i = 1; i < 100; i++)
    {
        if (i%2!=0)
        {

            nieparzyste = nieparzyste + i;
        }
        if(i%2==0)
        {
            suma = suma + i;
        }
    }
    cout << suma << endl;
    cout << nieparzyste << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int suma = 0;
//     for (int i = 10; i < 100; i++)
//     {
//         suma = suma + i;
//     }
//     cout << suma << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int suma=0;
//     int i;
//     suma=0;
//     i=9;
//     do{i++;suma=suma+i;}
//     while(i<99);
//     cout<<suma<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i;
//     char gwiazdka = '*';
//     for (int i = 0; i < 10; i++)
//     {
//         cout << gwiazdka;
//     }
//     i = 0;
//     do
//     {
//         i++;
//         cout << gwiazdka;
//     } while (i < 10);
//     i = 0;
//     while (i < 10)
//     {
//         i++;
//         cout << gwiazdka;
//     }

//     return 0;
// }