#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, perimetro, A, r, R;
    double aCircMaior, aCircMenor, aTrian, pi=3.1415926535897;

    cout << fixed << setprecision(4);

    while(cin >> a >> b >> c) {
        perimetro = (a + b + c) / 2;
        A = sqrt(perimetro*(perimetro - a)*(perimetro - b)*(perimetro - c) );
        R =(a * b * c) / (4 * A);
        r = A / perimetro;
        aCircMenor = (pi * r * r);
        aTrian = (A - aCircMenor);
        aCircMaior = (pi * R * R) - A;

        cout << aCircMaior << " " << aTrian << " " << aCircMenor << endl;
    }

    return 0;
}
