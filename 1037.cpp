#include <iostream>

using namespace std;

int main ()
{

double valor;

cin >> valor;

if (valor >= 0 and valor <= 25 ) {
    cout << "Intervalo [0,25]" << endl;
}

if (valor > 25 and valor <= 50 ) {
    cout << "Intervalo (25,50]" << endl;
}

if (valor > 50 and valor <= 75 ) {
    cout << "Intervalo (50,75]" << endl;
}

if (valor > 75 and valor <= 100 ) {
    cout << "Intervalo (75,100]" << endl;
}

if (valor < 0 or valor > 100) {
    cout << "Fora de intervalo" << endl;
}

    return 0;
}
