#include <iostream>

using namespace std;

int mdc(int m, int n) {
    if(m % n != 0) {
        mdc(n, (m%n));
    } else {
        return n;
    }
}

int main(){
    int n, fRicardo, fVicente;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> fRicardo >> fVicente;
        int maxDiv = mdc(fRicardo, fVicente);
        cout << maxDiv << endl;
    }
}
