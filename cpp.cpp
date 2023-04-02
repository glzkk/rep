#include <iostream>
using namespace std;
int main(){
    int wiek;
    cout<<"podaj wiek a ja ci powiem czy jestes stary"<<endl;
    cin>>wiek;
    cout <<"wiek ="<<wiek<<endl;
    string lata;
    if(wiek<50)lata="jestes mlody";
    if(wiek>50)lata="jestes stary";/*else wb=""ujemna*/
    if(wiek==50)lata="zaraz bedziesz stary";
    cout<<"lata:"<<lata<<endl;
    return 0;
}


































/*#include <iostream>
using namespace std;
namespace volume {
    const float cola=0.33;
    const float flaszka=0.5;
    const float liter=1;
}

int main()
{   int a = 10;
    int b = 15;
    int c = 10;
    cout<<a*volume::cola;
    cout<<b*volume::flaszka;
    cout<<c*volume::liter;

}

*/



/*#include <iostream>
using namespace std;
namespace p1 {
    typedef float real;
    const float PI=3.14159;
}
namespace p2 {
const double PI=3;
}
int main()
{
    p1::real liczba=5;
    liczba=liczba*p2::PI;
    cout<<liczba<<endl;
    return 0;
}
*/




//#include <iostream>
//using namespace std;
//int main()
//{
//int liczba = 7; // 0111
 //int wynik;

//wynik=(~(-65));
//cout<<wynik<<endl;


// wynik=2147483647;
// cout<<wynik<<endl;

// cout<<sizeof( int)<<endl;
//return 0;
//}









// #include <iostream>

// int main()
// {
//     char c ='j';//j=106 ASCII
//     int n1 = 1;
//     unsigned char n2 = 1;
//     unsigned int n3 = 1;
//     int liczba= (int)c;
//     // liczba=c;
//     //int k=n2;
//     std::cout << liczba<<"\n";
//     std::cout << "char: " << c <<"\n"<< " int: " << +c << '\n'
//               << "-1, where 1 is signed: " << -n1 << '\n'
//               << " unsigned char: " << n2<< '\n'
//               << "-1, where 1 is unsigned char: " << -n2 << '\n'
//               << "-1, where 1 is unsigned int: " << -n3 << '\n';
//     char a[3];
//     std::cout << "size of array: " << sizeof a << '\n'
//               << "size of pointer: " << sizeof +a << '\n';
// }