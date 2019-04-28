#include <iostream>

using namespace std;

int main() {
    int a, n, soma=0, contador;
    cin >> a >> n;

    while(n<=0)
        cin >> n;

    contador = 1;
    for(int i=a; contador<=n; i++) {
        soma += i;
        contador++;
    }
    cout << soma  << endl;

    return 0;
}
