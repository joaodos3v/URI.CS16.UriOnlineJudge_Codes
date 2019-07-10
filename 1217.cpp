#include <iostream>
#include <cstdio>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    int nc, kilos, cont=0, kg=0;
    double valor, soma=0, kgTotal=0;
    string linha, fruta;

    cin >> nc;

    for(int i=0; i<nc; i++) {
        cin >> valor;
        soma += valor;
        cont++;
        cin.get();

        getline(cin, linha);
        stringstream frutas(linha);
        while(frutas >> fruta) {
            kg++;
        }
        cout << "day " << cont << ": " << kg << " kg" << endl;
        kgTotal += kg;
        kg=0;

    }
    cout << kgTotal/cont << " kg by day" << endl;
    cout << "R$ " << soma/cont << " by day" << endl;

    return 0;
}
