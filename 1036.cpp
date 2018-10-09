#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{

    double a, b, c, delta, r1, r2;

    cin >> a >> b >> c;

    delta = pow(b,2) - (4 * a * c);

    cout << fixed << setprecision(5);

    if (delta > 0 and a > 0) {

        r1 = (- b + sqrt(delta)) / (2 * a);
        r2 = (- b - sqrt(delta)) / (2 * a);

        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;

    } else {
        cout << "Impossivel calcular" << endl;
    }


    return 0;
}
