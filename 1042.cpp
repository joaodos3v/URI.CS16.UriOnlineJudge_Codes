#include <iostream>

using namespace std;

int main ()
{

    int a, b, c, aux, d, e, f;

    cin >> a >> b >> c;

    d = a;
    e = b;
    f = c;

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    if ( b > a) {
        aux = b;
        b = a;
        a = aux;
    }

    cout << b << endl;
    cout << a << endl;
    cout << c << endl;
    cout << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;

    return 0;
}
