#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double t, vet[70];
    int y;

    vet[0] = 0;
    vet[1] = 1;

    for(int i=2; i<70; i++) {
        vet[i] = vet[i-1] + vet[i-2];
    }

    cin >> t;

    cout << fixed << setprecision(0);
    for(int j=0; j<t; j++) {
        cin >> y;
        cout << "Fib(" << y << ") = " << vet[y] << endl;
    }

    return 0;
}
