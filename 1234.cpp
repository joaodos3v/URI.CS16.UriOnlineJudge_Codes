#include <iostream>
#include <cstdio>

using namespace std;
int maiuscula = 0;
string sentDanca(string frase) {
    for(int i=0; frase[i]; i++) {
         if(isalpha(frase[i])) {
            if(maiuscula == 1) {
                frase[i] = tolower(frase[i]);
                maiuscula = 0;
            } else {
                frase[i] = toupper(frase[i]);
                maiuscula = 1;
            }
        }
    }
    maiuscula = 0;
    return frase;
}

int main() {
    string linha;

    while(getline(cin, linha)){
        cout << sentDanca(linha) << endl;
    }

    return 0;
}
