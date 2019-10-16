#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

typedef struct {
    int Ouro, Prata, Bronze;
    string Nome;
} Pais;

 ///medalhas de ouro, medalhas de prata, medalhas de bronze,ordem alfabética.
bool Ordena(Pais A, Pais B) {
    if(A.Ouro == B.Ouro) {
        if(A.Prata == B.Prata) {
            if(A.Bronze == B.Bronze) {
                return A.Nome < B.Nome;
            }
            return A.Bronze > B.Bronze;
        }
        return A.Prata > B.Prata;
    }
    return A.Ouro > B.Ouro;
}

int main()
{
    string linha;
    int n;
    cin >> n;
    cin.get();

    Pais paises[n];

    for(int i=0; i<n; i++) {
        getline(cin, linha);
        stringstream S(linha);
        while(S >> paises[i].Nome) {
            S >> paises[i].Ouro;
            S >> paises[i].Prata;
            S >> paises[i].Bronze;
        }
    }

    sort(paises, paises+n, Ordena);

    for(int i=0; i<n; i++) {
        cout << paises[i].Nome<< " " <<  paises[i].Ouro << " " << paises[i].Prata << " " << paises[i].Bronze << endl;
    }

    return 0;
}
