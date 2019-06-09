#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    char operacao;
    double M[12][12], soma=0, cont=0.0;

    cin >> operacao;

    for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    for(int i=0; i<=10; i++) {
        for(int j=0; j<=10-i; j++) {
            soma += M[i][j];
            cont++;
        }
    }
    cout << fixed << setprecision(1);

    if(operacao == 'S') {
        cout << soma << endl;
    } else {
        cout << soma / cont << endl;
    }

    return 0;
}
