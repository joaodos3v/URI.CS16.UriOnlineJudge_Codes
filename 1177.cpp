#include <iostream>

using namespace std;

int main() {
    int t, n[1010], cont;
    cin >> t;

    for(int i=0; i<1000;) {
        cont = 0;
        for(int j=0; cont<t; j++) {
            cont++;
            n[i] = j;
            i++;
        }
    }

    for(int i=0; i<1000; i++)
        cout << "N[" << i << "] = " << n[i] << endl;

    return 0;
}
