#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int linha;
    char operacao;
    double M[12][12], soma=0;

    cin >> linha >> operacao;

    for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    for(int j=0; j<12; j++) {
        soma += M[linha][j];
    }

    cout << fixed << setprecision(1);

    if(operacao == 'S') {
        cout << soma << endl;
    } else if(operacao == 'M') {
        cout << soma/12.0 << endl;
    }

    return 0;
}
