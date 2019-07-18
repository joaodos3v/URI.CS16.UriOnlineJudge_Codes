#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, tam=0, metade=0;
    string linha, prt1, prt2;

    cin >> n;
    cin.get();
    for(int i=0; i<n; i++) {
        getline(cin, linha);
        tam = linha.length();
        metade = tam / 2;

        for(int j=metade-1; j>=0; j--) 
            prt1 += linha[j];

        for(int j=tam-1; j>=metade; j--)
            prt2 += linha[j];

        cout << prt1;
        cout << prt2;
        cout << endl;
        prt1 = "";
        prt2 = "";
    }

    return 0;
}
