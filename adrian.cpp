#include <iostream>
using namespace std;

class Pojazd
{
    string marka;

protected:
    string model;

public:
    int rokProdukcji;
    Pojazd()
    {
        marka = "";
        model = "";
        rokProdukcji = 0;
    }
    Pojazd(string markaP, string modelP, int rokProdukcjiP)
    {
        marka = markaP;
        model = modelP;
        rokProdukcji = rokProdukcjiP;
    }
    void setMarka(string markaP)
    {
        marka = markaP;
    }
    void setModel(string modelP)
    {
        model = modelP;
    }
    string getMarka()
    {
        return marka;
    }
    string getModel()
    {
        return model;
    }
    void display()
    {
        cout << "Model: " << model << ", marka: " << marka << ", rok produkcji: " << rokProdukcji;
    }
};

class Autobus : public Pojazd
{
public:
    int liczbaMiejscStojacych, liczbaMiejscSiedzacych;
    Autobus() : Pojazd()
    {
        liczbaMiejscSiedzacych = 0;
        liczbaMiejscStojacych = 0;
    }
    Autobus(string markaP, string modelP, int rokProdukcjiP, int miejscaSiedzace, int miejscaStojace) : Pojazd(markaP, modelP, rokProdukcjiP)
    {
        liczbaMiejscSiedzacych = miejscaSiedzace;
        liczbaMiejscStojacych = miejscaStojace;
    }
    void display()
    {
        Pojazd::display();
        cout << ", liczba miejsc stojacych: " << liczbaMiejscStojacych << ", liczba miejsc siedzacych: " << liczbaMiejscStojacych;
    }
};

string bool2Text(bool wartosc)
{
    if (wartosc == false)
    {
        return "NIE";
    }
    else
    {
        return "TAK";
    }
}

class Ciezarowka : public Pojazd
{
public:
    bool wywrotka, chlodnia, cysterna;
    Ciezarowka() : Pojazd()
    {
        wywrotka = false;
        chlodnia = false;
        cysterna = false;
    }
    Ciezarowka(string markaP, string modelP, int rokProdukcjiP, bool wywrotkaP, bool chlodniaP, bool cysternaP) : Pojazd(markaP, modelP, rokProdukcjiP)
    {
        wywrotka = wywrotkaP;
        chlodnia = chlodniaP;
        cysterna = cysternaP;
    }
    void display()
    {
        Pojazd::display();
        cout << ", czy ma cysterne: " << bool2Text(cysterna) << ", czy ma wywrotke: " << bool2Text(wywrotka) << ", czy ma chlodnie " << bool2Text(chlodnia);
    }
};

int main()
{
    string marka, model;
    int miejscaStojace, miejscaSiedzace, rokProdukcji;
    bool cysterna, wywrotka, chlodnia;
    cout << "teraz dane do autobusu i ciezarowki zeby mniej pisac ";
    cout << "Podaj marke ";
    cin >> marka;
    cout << "Podaj model";
    cin >> model;
    cout << "Podaj rok produkcji ";
    cin >> rokProdukcji;
    cout << "Teraz sam autobus ";
    cout << "Liczba miejsc siedzacych ";
    cin >> miejscaSiedzace;
    cout << "Liczba miejsc stojacych ";
    cin >> miejscaStojace;
    cout << "Teraz ciezarowka. podaj 0(jesli nie) albo 1(jesli tak) ";
    cout << "czy ma chlodnia ";
    cin >> chlodnia;
    cout << "czy ma wywrotka ";
    cin >> wywrotka;
    cout << "czy ma cysterna";
    cin >> cysterna;
    Autobus autobus(marka, model, rokProdukcji, miejscaStojace, miejscaSiedzace);
    Ciezarowka ciezarowka(marka, model, rokProdukcji, wywrotka, chlodnia, cysterna);
    autobus.display();
    ciezarowka.display();
    return 0;
}