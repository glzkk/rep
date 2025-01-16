void obliczanieCzasuDni(int czasWdniach)
{
    int czaslata = 0;
    int czasmiesiace = 0;
    int czasdni = 0;
    int czastygodnie = 0;
    czaslata = czasWdniach / 360;
    czasWdniach = czasWdniach % 360;
    czasmiesiace = czasWdniach / 30;
    czasWdniach = czasWdniach % 30;
    czastygodnie = czasWdniach / 7;
    czasWdniach = czasWdniach % 7;
    czasdni = czasWdniach;
    cout << "lata: " << czaslata << endl;
    cout << "miesiace: " << czasmiesiace << endl;
    cout << "tygodnie: " << czastygodnie << endl;
    cout << "dni: " << czasdni << endl;
}