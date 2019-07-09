#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    string nome, dados;
    int distancia, cont=0;
    double media=0;

    while(getline(cin, dados)) {
        cin >> distancia;
        cin.get();
        media += distancia;
        cont++;
    }

    cout << media/cont << endl;

    return 0;
}
