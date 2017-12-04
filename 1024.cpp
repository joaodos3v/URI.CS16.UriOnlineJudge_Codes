#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    ///freopen("criptografia.in", "r", stdin);
    string linha;
    int n, tam=0;
    cin >> n;
    cin.get();

    for(int i=0; i<n; i++) {
        getline(cin, linha);
        tam = linha.length();
        char frase[tam], fraseF[tam];
        int cont=0;

        for(int j=0; j<tam; j++) { ///Preencho o vetor de char com as letras ou espaços da frase lida
            frase[j] = linha[j];
        }
        for(int j=0; j<tam; j++) { ///Primeira passada: somente letras maiúsculas e minúsculas devem ser deslocadas 3 posições para a direita, segundo a tabela ASCII
            if(isalpha(frase[j]))
                frase[j] = (char) frase[j] + 3;
        }
        for(int j=tam-1; j>=0; j--) {///Segunda passada: a linha deve ser completamente invertida
            fraseF[cont] = frase[j];
            cont++;
        }
        double metade = floor(tam  / 2.0);
        for(int j=metade; j<tam; j++) { ///Terceira passada: todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII
            fraseF[j] = (char) fraseF[j] - 1;
        }

        for(int j=0; j<tam; j++) {
            cout << fraseF[j];
        }
        cout << endl;
        tam = 0;
    }

    return 0;
}
