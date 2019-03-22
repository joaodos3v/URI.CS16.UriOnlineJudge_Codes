#include <iostream>

using namespace std;

int main() {
    int x, xMaior=0, posicao;

    cin >> x;
    xMaior = x;
    posicao = 1;

    for(int i=2; i<=100; i++) {
        cin >> x;

        if(x > xMaior) {
            xMaior = x;
            posicao = i;
        }
    }

    cout << xMaior << endl;
    cout << posicao << endl;

    return 0;
}
