#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

    int hInicial, hFinal, mInicial, mFinal, horas, minutos, resultado;

    cin >> hInicial >> mInicial >> hFinal >> mFinal;

    hInicial = hInicial * 60 + mInicial;
    hFinal = hFinal * 60 + mFinal;

    if (hFinal > hInicial) {
        resultado = hFinal - hInicial;
    }

    if (hFinal == hInicial) {
        resultado = 1440;
    }

    if (hFinal < hInicial) {
        resultado = abs(hInicial - 1440) + hFinal;
    }

    horas = resultado / 60;
    minutos = resultado % 60;

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}
