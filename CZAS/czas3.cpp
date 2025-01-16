void oblicznieZlitrow(int podaneLitry)
{
    int litry = 0;
    int wanny = 0;    // 250l
    int cysterny = 0; // 1000l
    int beczki = 0;// 50l
    cysterny = podaneLitry / 1000;
    wanny = podaneLitry / 250;
    beczki = podaneLitry / 50;
    litry = podaneLitry;
    cout << "cysterny:" << cysterny << endl;
    cout << "wanny:" << wanny << endl;
    cout << "beczki:" << beczki << endl;
    cout << "litry:" << litry << endl;
}