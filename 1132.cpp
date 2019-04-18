#include <iostream>

using namespace std;

int main() {
    int x, y, aux, div13, soma=0;
    cin >> x >> y;

    if(x > y) {
        aux = x;
        x = y;
        y = aux;
    }

    for(int i=x; i<=y; i++) {
        if(i % 13 == 0)
            div13 = i;
        else
            soma += i;
    }

    cout << soma << endl;

    return 0;
}
