#include <iostream>
#include <algorithm>
#include <vector>
//#include <cstdio>

using namespace std;

int binarySearch(int el, vector<int> v, int ini, int fim) {
    int meio = (ini + fim) / 2;

    if(ini > fim) {
      return -1;
    } else if(v[meio] < el) {
        return binarySearch(el, v, meio + 1, fim);
    } else if(v[meio] > el)  {
        return binarySearch(el, v, ini, meio - 1);
    } else if(v[meio] == el) {
        while(v[meio-1] == el && meio > 0) {
                meio--;
        }
        return meio;
    }
}

int contElements(vector<int> v, int el) {
    int cont = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == el) cont++;
        else if(v[i] > el) break;
    }
    return cont;
}

int main() {
    int n, busca, x, y, inicio = 0, fim = 0;

    while(cin >> n) {
        vector<int> vet;
        vector<int>::iterator it;
        inicio = 0;
        fim = 0;
        for(int i=0; i<n; i++) {
            cin >> x >> y;
            for(int j=x; j<=y; j++) {
                vet.push_back(j);
            }
        }

        int sizeVector = vet.size();
        sort(vet.begin(), vet.end());
        cin >> busca;
        inicio = binarySearch(busca, vet, 0, sizeVector - 1);
        fim = inicio + (contElements(vet, busca) - 1);
        if(inicio >= 0){
            cout << busca << " found from " << inicio << " to " << fim << endl;
        } else {
            cout << busca << " not found\n";
        }

    }


    return 0;
}


