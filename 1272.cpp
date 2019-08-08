#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

int main() {
    string linha, palavra, frase = "";
    int n;
    cin >> n;
    cin.get();
    for(int i=0; i<n; i++) {
        getline(cin, linha);
        stringstream S(linha);
        while(S >> palavra) {
            frase += palavra[0];
        }
        cout << frase << endl;
        frase = "";
    }

    return 0;
}
