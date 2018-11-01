#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double x, y, quadrante;

    cout << fixed << setprecision(1);

    cin >> x >> y;

    if ( x == 0 and y == 0) {
       cout << "Origem" << endl;
    }

    if ( x == 0 and y != 0) {
        cout << "Eixo Y" << endl;
    }

    if ( x != 0 and y == 0) {
        cout << "Eixo X" << endl;
    }

    if ( x > 0 and y > 0) {
       cout << "Q1" << endl;
    }

    if ( x > 0 and y < 0) {
       cout << "Q4" << endl;
    }

    if ( x < 0 and y > 0) {
       cout << "Q2" << endl;
    }

    if ( x < 0 and y < 0) {
       cout << "Q3" << endl;
    }

    return 0;
}
