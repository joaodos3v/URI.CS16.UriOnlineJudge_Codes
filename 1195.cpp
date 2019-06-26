#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo {
   nodo *esquerda;
   int informacao;
   nodo *direita;

   // Construtor
   nodo(int info) {
       informacao = info;
       esquerda = NULL;
       direita = NULL;
   }
};

struct nodo *insere(nodo *tree, int num) {
   if(tree == NULL) {
       tree = new nodo(num);
   } else if(tree->informacao > num) {
       tree->esquerda = insere(tree->esquerda, num);
   } else {
       tree->direita = insere(tree->direita, num);
   }
   return tree;
};

void prefixa (nodo *tree) {
    if(tree != NULL) {
        cout << " " << tree->informacao;
        prefixa(tree->esquerda);
        prefixa(tree->direita);
    }
}

void infixa (nodo *tree) {
    if(tree != NULL) {
        infixa(tree->esquerda);
        cout << " " << tree->informacao;
        infixa(tree->direita);
    }
}

void posfixa (nodo *tree) {
    if(tree != NULL) {
        posfixa(tree->esquerda);
        posfixa(tree->direita);
        cout << " " << tree->informacao;
    }
}

int main() {
   int n, elmTree;
   cin >> n;

   for(int i=1; i<=n; i++) {
       nodo *arvore = 0;
       cin >> elmTree;
       for(int j=0; j<elmTree; j++) {
           int elm;
           cin >> elm;
           arvore = insere(arvore, elm);
       }

       cout << "Case " << i << ":" << endl;

       cout << "Pre.:";
       prefixa(arvore);
       cout << endl;

       cout << "In..:";
       infixa(arvore);
       cout << endl;

       cout << "Post:";
       posfixa(arvore);
       cout << endl << endl;
   }

   return 0;
}
