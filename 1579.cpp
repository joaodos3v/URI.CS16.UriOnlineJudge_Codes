#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int otimizaCaminhoes(vector <int>vet, int caminhoes) {
    vector<int>::iterator it;
    int low = *max_element(vet.begin(), vet.end()), m=vet.size(), high = accumulate(vet.begin(), vet.end(), 0), limite = 0, compara = 0, req = 0, carga = 0;

    if(low == high) return low;

    while(low < high) {
        req = 1;
        carga = 0;
        limite = (high + low)/2;

        for(it = vet.begin(); it!=vet.end(); it++)  {
            compara = carga + *it;
            if(compara <= limite) {
                carga += *it;
            } else {
                req ++;
                carga = *it;
            }
        }

        if (req <= caminhoes) high = limite;
        else low = limite+1;
    }
    return low;
}

int main() {
    int casos, nPaineis;
    vector<int>vet;
    cin>>casos;

    while(casos--) {
        int caminhoes=0, frete=0, aceptedi = 0, r = 0;
        cin >> nPaineis >> caminhoes >> frete;

        for(int i=0; i<nPaineis; i++) {
            int x;
            cin>>x;
            vet.push_back(x);
        }

        aceptedi = otimizaCaminhoes(vet,caminhoes);
        r = frete * caminhoes;
        cout << aceptedi << " $" << aceptedi * r << endl;
        vet.clear();
    }
    return 0;
}
