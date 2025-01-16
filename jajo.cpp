#include <iostream>
using namespace std;

class Pizza
{
    float cenaSera;
    float cenaSzynki;
    float CenaCiastaMalego;
    float cenaBrokuly;

public:
    static int ilePizz;
    int ileKalorii;
    float cenaPizzy;
    int ileSera;
    int ileSzynki;
    int ileBrokuly;
    bool czyDuza;
    Pizza()
    {
        ileSera = 0;
        ileSzynki = 0;
        ileBrokuly = 0;
        czyDuza = 0;
    };

    void cenaSera()
    {
        if (ileSera == 1)
        {
            cenaPizzy + 2;
        }   
        if (ileSera == 2)
        {
            cenaPizzy + 4;
        }
        if (ileSera == 3)
        {
            cenaPizzy + 6;
        }
    }
    void cenaSzynki()
    {
        if (ileSzynki == 1)
        {
            cenaPizzy + 3;
        }
        if (ileSzynki == 2)
        {
            cenaPizzy + 6;
        }
        if (ileSzynki == 3)
        {
            cenaPizzy + 9;
        }
    }
    void cenaBrokuly()
    {
        if (ileBrokuly == 1)
        {
            cenaPizzy + 1;
        }
        if (ileBrokuly == 2)
        {
            cenaPizzy + 2;
        }
        if (ileBrokuly == 3)
        {
            cenaPizzy + 3;
        }
    }
    void cenaDuzej()
    {
        if (czyDuza == 1)
        {
            cenaPizzy + 10;
        }
        else
        {
            cenaPizzy + 5;
        }
    }
    bool getCzyDuza()
    {
        return czyDuza;
    }
        void czyDuzaPizza()
    {
        if (czyDuza == 1)
        {
            cout << "twoja pizza jest duza";
        }
        else
        {
            cout << "wybrales male ciasto";
        }
    }
        void czyVege(bool Vege){
            if(ileSzynki>0)
            {
                bool Vege=1;
            }
            else{
                bool Vege=0;
            }
        }
    void ileKal(){
        if(czyDuza==1)
        {
            ileKalorii+1000;
        }
        else{
            ileKalorii+500;

        }
        if (ileBrokuly == 1)
        {
            ileKalorii+34;
        }
        if (ileBrokuly == 2)
        {
            ileKalorii+68;
        }
        if (ileBrokuly == 3)
        {
             ileKalorii+102;
        }
        if (ileSera == 1)
        {
             ileKalorii+402;
        }
        if (ileSera == 2)
        {
             ileKalorii+804;
        }
        if (ileSera == 3)
        {
             ileKalorii+1206;
        }
        if (ileSzynki == 1)
        {
             ileKalorii+145;
        }
        if (ileSzynki == 2)
        {
             ileKalorii+290;
        }
        if (ileSzynki == 3)
        {
             ileKalorii+435;
        }
    }

};
int Pizza::ilePizz = 0;
int main()
{
    int ser;
    int szynka;
    int brokul;
    bool duza;
    cout << "Napisz 1 jesli true i 0 jesli false\n";
    Pizza pizza1;
    bool wartosciLogiczne;
    int liczbyCalkowite;
    cout << "czy pizza jest duza?\n";
    cin >> wartosciLogiczne;
    pizza1.czyDuza = wartosciLogiczne;
    cout << "podaj ilosc szynki\n";
    cin >> liczbyCalkowite;
    pizza1.ileSzynki = liczbyCalkowite;
    cout << "podaj ilosc brokol\n";
    cin >> liczbyCalkowite;
    pizza1.ileBrokuly = liczbyCalkowite;
    cout << "podaj ilosc syra\n";
    cin >> liczbyCalkowite;
    pizza1.ileSera = liczbyCalkowite;
    cout << pizza1.ileSera;
   
    return 0;
}