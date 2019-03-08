#include <iostream>

using namespace std;

int main() {
    int x, contador=1;

    cin >> x;

    for(int i=x; contador<=6; i=i+2) {
        if(x % 2 != 0) {
            cout << i << endl;
            contador++;
        } else {
            cout << i + 1 << endl;
            contador++;
        }
    }

    return 0;
}
