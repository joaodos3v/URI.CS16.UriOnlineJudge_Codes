#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

    double a, b, c, aux;

    cin >> a >> b >> c;

    if (c > b) {
        aux = c;
        c = b;
        b = aux;
    }

    if (b > a) {
        aux = b;
        b = a;
        a = aux;
    }

    if ( c > b) {
        aux = c;
        c = b;
        b = aux;
    }

//TIPOS DE TRIÂNGULO A PARTIR DAQUI

    if ( a >= b+c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }

     else if ( (pow(a,2)) == (pow(b,2)) + (pow(c,2))) {
        cout << "TRIANGULO RETANGULO" << endl;
    }

     else if ( (pow(a,2)) > (pow(b,2)) + (pow(c,2))  ) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }

     else if ( (pow(a,2)) < (pow(b,2)) + (pow(c,2))) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

     if ( a == b and a == c) {
        cout << "TRIANGULO EQUILATERO" << endl;
    }

     else if ( a == b  or b == c  or a == c) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
