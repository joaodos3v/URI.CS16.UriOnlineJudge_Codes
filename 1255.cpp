#include <iostream>

using namespace std;

int main() {
    int letras[151], n;
    string linha;

    cin >> n;
    cin.get();
    for(int i=0; i<n; i++) {
        getline(cin, linha);
        int maior = 0;
        for(int j=0; j<=150; j++) letras[j] = 0;
        for(int j=0; j<linha.size(); j++) {
            char letra = tolower(linha[j]);
            if(letra >= 'a' && letra <= 'z') {
                letras[letra]++;
                if(letras[letra] > maior) {
                    maior = letras[letra];
                }
            }
        }
        for(char i='a'; i<='z'; i++) {
            if(letras[i] == maior) {
                cout << i;
            }
        }
        cout << endl;
    }

    return 0;
}
