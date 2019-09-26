#include <iostream>
#include <algorithm>

using namespace std;

typedef struct {
    string Nome;
} Crianca;

bool Ordena(Crianca A, Crianca B) {
    return A.Nome < B.Nome;
}

int main()
{
    string linha;
    int cont=0;

    Crianca criancas[1000];
    Crianca criancasView[1000];
    Crianca c[1000];

    while(getline(cin, criancas[cont].Nome)) {
        criancasView[cont].Nome = criancas[cont].Nome;
        c[cont].Nome = criancas[cont].Nome;
        for(int i=0; i<criancas[cont].Nome.length(); i++) {
            criancas[cont].Nome[i] = tolower(criancas[cont].Nome[i]);
            criancasView[cont].Nome[i] = tolower(criancas[cont].Nome[i]);
        }
        cont++;
    }

    sort(criancas, criancas+cont, Ordena);
    int ponto = cont-1;
    int pos;

    for(int i=0; i<cont; i++) {
        if(criancasView[i].Nome == criancas[ponto].Nome) {
           pos = i;
        }
    }

    cout << c[pos].Nome << endl;

    return 0;
}
