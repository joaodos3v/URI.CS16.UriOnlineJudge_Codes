#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    string expressao[n];
    char elemento;

    for(int i=0; i<n; i++) {
        cin >> expressao[i];
        int cont = 0;
        stack <char> pilha;
        for(int h=0; h<expressao[i].size(); h++) {
            elemento = expressao[i][h];
            if(elemento == '<') {
                pilha.push(elemento);
            }
            if(elemento == '>') {
                if(pilha.size() > 0) {
                    cont++;
                    pilha.pop();
                }
            }
        }
        cout << cont << endl;
    }

    return 0;
}


