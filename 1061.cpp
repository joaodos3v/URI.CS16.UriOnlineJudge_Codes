#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    string aux;
    int dia1, dia2, horas1, horas2, minutos1, minutos2, segundos1, segundos2, totalSegundos;

    cin >> aux >> dia1 >> horas1 >> aux >> minutos1 >> aux >> segundos1;
    cin >> aux >> dia2 >> horas2 >> aux >> minutos2 >> aux >> segundos2;

    totalSegundos = abs((dia1 * 86400 - dia2 * 86400) + (horas1 * 3600 - horas2 * 3600) + (minutos1 * 60 - minutos2 * 60) +
                        (segundos1 - segundos2));

    cout << totalSegundos / 86400 << " dia(s)" << endl;
    cout << totalSegundos % 86400 / 3600 << " hora(s)" << endl;
    cout << totalSegundos % 86400 % 3600 / 60 << " minuto(s)" << endl;
    cout << totalSegundos % 86400 % 3600 % 60 << " segundo(s)" << endl;

    return 0;
}
