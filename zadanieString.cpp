#include <iostream>
#include <string>
using namespace std;
int main()
{
    // =================================  2
       // string napis1 = "Programowanie ";
    // string napis2 = "zorientowane ";
    // string napis3 = "obeiktowo";
    // string napis4 = napis1 + napis2 + napis3;
    // cout << napis4;
    // ================================= 3
//     string napis1="java";
//     string napis2="j";
// if (napis1.compare(napis2) == 0)
//     {
//         cout << "Napisy sa takie same";
//     }
//     else
//     {
//         cout << "Napisy sa rozne";
//     }
//================================================== 4
//   string napis1 = "Java";
//     int napis2 = napis1.find("J");
//     if (napis2 >= 0)
//     {
//         cout << "Jest ";
//     }
//     else
//     {
//         cout << "Nie ma";
 //   }
   

    // ================================= 5
    // // string napis1;
    // cout << "Podaj nazwe ";
    // getline(cin, napis1);
    // cout << napis1;
    // ================================= 6
//   string s1 = "C++, JavaScript, C#";
//     napis1.replace(5, 10, "Java");
//     cout << s1;
//     return 0;

//========================================== 7

    string napis1;
    cout << "Podaj nazwe ";
    getline(cin, napis1);
    string napis2;
    cout << "Podaj nazwe ";
    getline(cin, napis2);
//     we:Ala ma
//       dom boba
// wy:boba ma
//       dom Ala
    napis1.replace(0, 4, "boba");
    cout << napis1<<endl;

    napis2.replace(3,4," Ala");
    cout<< napis2;
  

}