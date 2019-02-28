#include <iostream>
using namespace std;

int main () {

    int valor, pares=0;

    for (int i=0; i<5; i++) {
        cin >> valor;
        if(valor % 2 == 0) {
            pares = pares + 1;
        }
    }

    cout << pares << " valores pares" << endl;
    return 0;
}
