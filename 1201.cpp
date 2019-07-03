#include <iostream>
#include <stdlib.h>
#include <cstdio>
 
using namespace std;
 
int it = 0;
 
struct nodo{
    nodo *esquerda;
    int informacao;
    nodo *direita;
    nodo(int info) :
        informacao(info),
        esquerda (0),
        direita (0) {}
};
 
nodo *P;
 
struct nodo *insere(nodo *tree, int informacao)
{
    if(tree==NULL){
        return new nodo(informacao);
    } else if(informacao <= tree->informacao){
        tree->esquerda = insere(tree->esquerda, informacao);
        return tree;
    } else if(informacao > tree->informacao) {
        tree->direita = insere(tree->direita, informacao);
        return tree;
    }
};
 
int GetMax(nodo *tree){
    if (tree->direita) return GetMax(tree->direita);
    return tree->informacao;
};
 
struct nodo *retira(nodo *tree, int informacao){
    if (tree == NULL) return NULL;
    if (tree->informacao > informacao) {
        tree->esquerda = retira(tree->esquerda, informacao);
    } else if (tree ->informacao < informacao) {
        tree->direita = retira(tree->direita, informacao);
    } else {
        if (tree->esquerda == NULL && tree->direita == NULL) {
            delete tree;
            return NULL;
        }
        if (tree->esquerda != NULL && tree->direita != NULL) {
            int tar = GetMax(tree->esquerda);
            tree->informacao = tar;
            tree->esquerda = retira(tree->esquerda, tar);
        } else if (tree->esquerda) {
            nodo *c = tree->esquerda;
            delete tree;
            return c;
        } else if (tree->direita) {
            nodo *c = tree->direita;
            delete tree;
            return c;
        }
    }
    return tree;
}
 
void prefixa(nodo *tree){
    if(tree != NULL){
        cout << (it++==0? "": " ") << tree->informacao;
        prefixa(tree->esquerda);
        prefixa(tree->direita);
    }
}
 
void infixa(nodo *tree){
    if(tree != NULL){
        infixa(tree->esquerda);
        cout << (it++==0? "": " ") << tree->informacao;
        infixa(tree->direita);
    }
}
 
void posfixa(nodo *tree){
    if(tree != NULL){
        posfixa(tree->esquerda);
        posfixa(tree->direita);
        cout << (it++==0? "": " ") << tree->informacao;
    }
}
 
nodo *binary_tree_search(nodo *tree, int info)
{
    if (tree == NULL) return NULL;
    if (tree->informacao == info) return tree;
    else if (tree->informacao > info) return binary_tree_search(tree->esquerda, info);
    else return binary_tree_search(tree->direita, info);
}
 
int main()
{
    string a;
    int b;
 
    nodo *tree = NULL;
 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
    #endif // ONLINE_JUDGE
 
    while(cin >> a){
        if(a=="I"){
            cin >> b;
            tree = insere(tree, b);
        }
        else if(a=="R"){
            cin >> b;
            if(binary_tree_search(tree, b) != NULL)
                tree = retira(tree, b);
        }
        else if(a=="P") {
            cin >> b;
            if(binary_tree_search(tree, b) == NULL){
                cout << b << " nao existe\n";
            } else {
                cout << b << " existe\n";
            }
        }
        else {
            if(a=="PREFIXA"){
                prefixa(tree);
                cout << endl;
                it=0;
            } else if(a=="INFIXA") {
                infixa(tree);
                cout << endl;
                it=0;
            } else if(a=="POSFIXA") {
                posfixa(tree);
                cout << endl;
                it=0;
            }
        }
    }
 
    return 0;
}
