#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    double M[12][12], soma=0, cont=0;
    char operacao;

    cin >> operacao;

    for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    for(int i=7; i<=11; i++) {
        for(int j=12-i; j<=i-1; j++) {
            soma += M[i][j];
            cont++;
        }
    }

    if(operacao == 'S')
        cout << soma << endl;
    else
        cout << soma / cont << endl;

    return 0;
}
