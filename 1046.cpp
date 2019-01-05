#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int tempo(int hI, int hF)
{
    int horas;
    if(hI == hF)
        horas = 24;
    else
        if(hI > hF)
            horas = (24 - hI) + hF;
        else
            horas = hF - hI;

    return horas;
}

int main()
{
    int hI, hF;
    cin >> hI >> hF;
    cout << "O JOGO DUROU " << tempo(hI, hF) << " HORA(S)" << endl;
    return 0;
}
