#include <iostream>
#include <cstdlib>

#define TIPO char
using namespace std;

int cont = 0;
struct No {
    No *raiz = 0;
    No *esquerda;
    TIPO valorCentral;
    No *direita;
    No (TIPO info ):
        valorCentral(info),
        esquerda(0),
        direita(0) {}
};
No *P;
int espaco;
struct No *inserirNaArvore (No *minhaArvore, TIPO valorCentral) {
    if(minhaArvore == NULL)
        minhaArvore = new No (valorCentral);
    else if (valorCentral < minhaArvore ->valorCentral)
        minhaArvore->esquerda = inserirNaArvore(minhaArvore->esquerda, valorCentral);
    else if (valorCentral > minhaArvore->valorCentral)
        minhaArvore->direita = inserirNaArvore(minhaArvore->direita, valorCentral);
    return minhaArvore;
};
struct No *busca(No *raiz, char valor, char elemento[]) {
    if(raiz == NULL) {
        cout << valor << " nao existe" << endl;
        return NULL;
    } else {
        if(raiz->valorCentral > valor) {
            elemento[cont] = raiz->valorCentral;
            cont++;
            busca(raiz->esquerda, valor, elemento);
        } else if(raiz->valorCentral < valor) {
            elemento[cont] = raiz->valorCentral;
            cont++;
            busca(raiz->direita, valor, elemento);
        } else cout << valor << " existe" << endl;
    }
};
void infixa(No *minhaArvore) {
    if(minhaArvore != NULL) {
        infixa(minhaArvore->esquerda);
        if(espaco != 1)
            cout << " " << minhaArvore->valorCentral;
        else {
            cout << minhaArvore->valorCentral;
            espaco = 0;
        }
        infixa(minhaArvore->direita);
    }
}

void prefixa(No *minhaArvore) {
    if(minhaArvore != NULL) {
        if(espaco != 1)
            cout << " " << minhaArvore->valorCentral;
        else {
            cout << minhaArvore->valorCentral;
            espaco = 0;
        }
        prefixa(minhaArvore->esquerda);
        prefixa(minhaArvore->direita);
    }
}

void posfixa(No *minhaArvore) {
    if(minhaArvore != NULL) {
        posfixa(minhaArvore->esquerda);
        posfixa(minhaArvore->direita);
        if(espaco != 1)
            cout << " " << minhaArvore->valorCentral;
        else {
            cout << minhaArvore->valorCentral;
            espaco = 0;
        }
    }
}
int main() {
    int operacao;
    int x;
    No *raiz = 0;
    TIPO valor;
    string op;
    x = 0;
    while(cin >> op) {
        if(op == "I") {
            cin >> valor;
            raiz = inserirNaArvore(raiz, valor);
            x++;
        }
        if (op == "P") {
            char atuais[x], elementoDaBusca;
            cin >> elementoDaBusca;
            busca(raiz, elementoDaBusca, atuais);
        }
        if(op == "INFIXA") {
            espaco = 1;
            infixa(raiz);
            cout << endl;
        }
        if(op == "PREFIXA") {
            espaco = 1;
            prefixa(raiz);
            cout << endl;
        }
        if(op == "POSFIXA") {
            espaco = 1;
            posfixa(raiz);
            cout << endl;
        }
    }
}
