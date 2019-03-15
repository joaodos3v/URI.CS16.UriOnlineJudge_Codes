/*** par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE).   zero (0) NULL. **/
#include <iostream>

using namespace std;

int main() {
    int n, valor;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> valor;

        if(valor == 0) {
            cout << "NULL" << endl;
        } else {
            if(valor % 2 == 0 ) cout << "EVEN " ;
            if(valor % 2 != 0)  cout << "ODD " ;
            if(valor > 0) cout << "POSITIVE" << endl;
            if (valor < 0) cout << "NEGATIVE" << endl;
        }
    }

  return 0;
}
