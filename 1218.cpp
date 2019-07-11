#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

int main() {
    int numero, num2, cont1=1, cont=0, contM=0, contF=0;
    string linha;
    char sexo;

    while(cin >> numero) {
        cin.get();
        getline(cin, linha);
        stringstream calcado(linha);
        cont = 0;
        while(calcado >> num2) {
            calcado >> sexo;
            if(numero == num2) {
                cont++;
                if(sexo == 'M') {
                    contM++;
                } else if(sexo == 'F') {
                    contF++;
                }
            }
        }
        if(cont1 > 1) cout << endl;
        cout << "Caso " << cont1 << ":" << endl;
        cout << "Pares Iguais: " << cont << endl;
        cout << "F: " << contF << endl;
        cout << "M: " << contM << endl;
        cont1++;
        contF=0;
        contM=0;
    }

    return 0;
}
