#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double valor1, valor2, valor3, media;
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> valor1 >> valor2 >> valor3;

        media = (valor1 * 2 + valor2 * 3 + valor3 * 5) / 10;

        cout << fixed << setprecision(1);
        cout << media << endl;
    }

    return 0;
}
