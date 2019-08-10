#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    string palavra;
    int n;
    cin >> n;

    while(n != 0) {
        int tamPalavras[n], maior=0;
        string palavras[n];

        for(int i=0; i<n; i++) {
            cin >> palavra;
            palavras[i] = palavra;
            tamPalavras[i] = palavra.length();
            if(tamPalavras[i] > maior)
                maior = tamPalavras[i];

        }

        for(int i=0; i<n; i++) {
            int diff = maior - tamPalavras[i];
            cout << setw(maior) << palavras[i] << endl;
        }
        maior = 0;
        cin >> n;
        if(n != 0)
            cout << endl;
    }

    return 0;
}
