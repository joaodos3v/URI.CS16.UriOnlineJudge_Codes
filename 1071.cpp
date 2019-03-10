#include <iostream>

using namespace std;

int main() {
    int x, y, aux, acumulador=0;
    cin >> x >> y;

    if(y > x) {
        aux = y;
        y = x;
        x = aux;
    }

    for(int i=y+1; i<x; i++) {
        if( i % 2 != 0)
        acumulador += i;
    }

    cout << acumulador << endl;

    return 0;
}
