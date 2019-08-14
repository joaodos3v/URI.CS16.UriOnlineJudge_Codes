#include <iostream>

using namespace std;

int main() {
    double numero, cutoff;
    while(cin >> numero) {
        cin >> cutoff;
        if(numero - (int)numero >= cutoff) {
            cout << (int)numero + 1 << endl;
        } else {
            cout << (int)numero << endl;
        }
    }

    return 0;
}
