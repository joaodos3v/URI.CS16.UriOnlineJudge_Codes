#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    int c;
    char operacao;
    double M[12][12], soma=0;

    cin >> c >> operacao;

    for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    for(int i=0; i<12; i++) {
        soma += M[i][c];
    }

    cout << fixed << setprecision(1);

    if(operacao == 'S') {
        cout << soma << endl;
    } else {
        cout << soma / 12.0 << endl;
    }

    return 0;
}
