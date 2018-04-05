#include <iostream>
#include <algorithm>

using namespace std;

int BS(int vet[], int ini, int fim, int el) {
    int meio = (ini + fim) / 2;

    if(ini > fim)  return -1;
    else if(el > vet[meio]) BS(vet, meio + 1, fim, el);
    else if(el < vet[meio]) BS(vet, ini, meio - 1, el);
    else if(vet[meio] == el) {
        while(vet[meio-1] == el && meio > 0) meio--;
        return meio;
    }
}

int main() {
    int n, q, busca, tuQsabe, caso=0;

    while(cin >> n >> q) {
        if(n==0 and q==0) break;
        int vet[n+1];

        for(int i=0; i<n; i++) {
            cin >> vet[i];
        }
        sort(vet, vet+n);
        cout << "CASE# " << ++caso << ":\n";
        for(int i=0; i<q; i++) {
            cin >> busca;
            tuQsabe = BS(vet, 0, n-1, busca);
            if(tuQsabe >= 0) {
                cout << busca << " found at " << tuQsabe + 1 << endl;
            } else {
                cout << busca << " not found" << endl;
            }
        }
    }

    return 0;
}