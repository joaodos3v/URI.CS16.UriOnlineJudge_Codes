#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    double M[12][12], soma=0, media=0, cont=0;
    char operacao;

    cin >> operacao;

    for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    for(int i=1; i<=11; i++) {
        for(int j=12-i; j<=11; j++) {
            soma += M[i][j];
            cont++;
        }
    }

    cout << fixed << setprecision(1);

    if(operacao == 'S') {
        cout << soma << endl;
    } else {
        media = soma / cont;
        cout << media << endl;
    }

    return 0;
}
