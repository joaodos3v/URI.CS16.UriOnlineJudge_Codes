#include <iostream>
#include <iomanip>
using namespace std;
int main () {

    int i,j,n,M[100][100];
    cin >> n;
    while (n) {
        int valor = 0;
///Atribuir valores para a matriz///
        while(valor < n-valor) {
            for(i=valor; i<n-valor; i++) {
                for(j=valor; j<n-valor; j++) {

                    M[i][j] = valor+1;
                }
            }
            valor++;
        }
        for(int i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                if(j!=0) cout << " ";
                cout << setw(3) << M[i][j];

            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }
}
