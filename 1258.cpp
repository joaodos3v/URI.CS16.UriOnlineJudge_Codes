#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

typedef struct {
    string Nome;
    string Cor;
    char Tamanho;
} Camiseta;

bool Ordena(Camiseta A, Camiseta B) {
    if(A.Cor == B.Cor) {
        if(A.Tamanho == B.Tamanho) {
            return A.Nome < B.Nome;
        }
        return A.Tamanho > B.Tamanho;
    }
    return A.Cor < B.Cor;
}

int main() {
    int n;
    cin >> n;
    cin.get();
    while(n != 0) {
        Camiseta turma[n];
        for(int i=0; i<n; i++) {
            getline(cin, turma[i].Nome);
            cin >> turma[i].Cor;
            cin >> turma[i].Tamanho;
            cin.get();
        }

        sort(turma, turma+n, Ordena);

        for(int i=0; i<n; i++) {
            cout << turma[i].Cor << " " << turma[i].Tamanho << " " << turma[i].Nome << endl;
        }
        cin >> n;
        if(n != 0)
            cout << endl;
        cin.get();
    }

    return 0;
}
