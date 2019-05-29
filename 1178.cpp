#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(4);
    double valor, vet[100];

    cin >> valor;

    vet[0] = valor;

    for(int i=1; i<100; i++) {
        vet[i] = vet[i-1] / 2;
    }

    for(int i=0; i<100; i++) {
        cout << "N[" << i << "] = " << vet[i] << endl;
    }

    return 0;
}
