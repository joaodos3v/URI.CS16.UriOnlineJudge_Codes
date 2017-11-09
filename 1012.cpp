#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    cout << fixed << setprecision(1);

    double A,B,C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    cin >> A >> B >> C;

    TRIANGULO = (A * C) / 2;

    CIRCULO = 3.14159 * pow(C,2);

    TRAPEZIO = ((A + B) * C) / 2;

    QUADRADO = pow(B,2);

    RETANGULO = A * B;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << TRIANGULO << endl;
    cout << "CIRCULO: " << CIRCULO << endl;
    cout << "TRAPEZIO: " << TRAPEZIO << endl;
    cout << "QUADRADO: " << QUADRADO << endl;
    cout << "RETANGULO: " << RETANGULO << endl;

    return 0;
}