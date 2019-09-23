#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

typedef struct {
    string NomePres;
    double Valor;
    int Pref;
} Presente;

///ordem descrescente do valor de preferência,de menor preço, ordem alfabética.
bool Ordena(Presente A, Presente B) {
    if(A.Pref == B.Pref) {
        if(A.Valor == B.Valor) {
            return A.NomePres < B.NomePres;
        }
        return A.Valor < B.Valor;
    }
    return A.Pref > B.Pref;
}

int main() {
    cout << fixed << setprecision(2);
    string linha, nome;
    int n;

    while(cin >> nome >> n) {
        Presente lista[n];
        for(int i=0; i<n; i++) {
            cin.get();
            getline(cin, lista[i].NomePres);
            cin >> lista[i].Valor;
            cin >> lista[i].Pref;
        }

        sort(lista, lista+n, Ordena);

        cout << "Lista de " << nome << endl;
        for(int i=0; i<n; i++) {
            cout << lista[i].NomePres << " - R$" <<lista[i].Valor << endl;
        }
        cout << endl;
    }

    return 0;
}
