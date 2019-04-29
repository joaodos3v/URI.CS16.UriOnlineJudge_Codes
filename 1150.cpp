#include <iostream>

using  namespace std;

int main() {
    int x, z, cont=0, soma=0;
    cin >> x >> z;

    while (z <= x)
        cin >> z;

    while (soma < z) {
        soma += x;
        x++;
        cont++;
    }

    cout << cont << endl;
    return 0;
}
