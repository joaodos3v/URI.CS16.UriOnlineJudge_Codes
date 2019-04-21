#include <iostream>

using namespace std;

int main() {
    int n, contador, vezes=0;
    cin >> n;
    contador = 1;

    for(int i=1; contador<=n; i++) {
        if (vezes != 3) {
            cout << i << " ";
            vezes++;

        } else if (vezes == 3) {
            cout << "PUM" << endl;
            vezes = 0;
            contador++;
        }
    }

    return 0;
}
