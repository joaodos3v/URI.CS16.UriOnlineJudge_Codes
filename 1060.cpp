#include <iostream>

using namespace std;

int main () {

    double n, numero=0;

    for (int i=0; i<=5; i++) {
        cin >> n;
        if ( n > 0) {
            numero = numero + 1;
        }
    }

    cout << numero << " valores positivos" << endl;

    return 0;
}
