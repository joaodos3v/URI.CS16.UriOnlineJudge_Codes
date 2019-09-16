#include <iostream>
#include <algorithm>
#include <iomanip>
#define rong 0.000001
using namespace std;

long double returnCut(long double fim,  int arr[],int qtdTiras,  long double aEsperado,long double inicio) {
    long double meio = (inicio + fim)/2.0;
    if(fim - inicio < rong) return meio;

    long double soma = 0;

    for(int i = 0; i<qtdTiras; i++) {
        if(meio<arr[i]) {
            soma += arr[i]-meio;
        }
    }

    if(aEsperado == soma ) {
        return meio;
    } else {
        if(aEsperado > soma) return returnCut(meio, arr, qtdTiras, aEsperado,inicio);

        if(aEsperado < soma) return returnCut(fim, arr, qtdTiras, aEsperado,meio);

    }
    return meio;
}

int main() {
    cout << fixed << setprecision(4);
    int qtdTiras;
    long double aEsperado, soma=0,inicio =0,maior=0,corte = 0,aceptedi=0;
    cin >> qtdTiras >> aEsperado;

    while(qtdTiras != 0 && aEsperado != 0) {
        int arr[qtdTiras];

        for(int i=0; i<qtdTiras; i++) {
            cin >> arr[i];
            if(arr[i] > maior) maior = arr[i];
            soma += arr[i];
        }

        if(soma == aEsperado) cout << ":D" << endl;
        else if(aEsperado > soma) cout << "-.-" << endl;
        else {
            sort(arr, arr + qtdTiras);
            aceptedi = returnCut(maior, arr, qtdTiras, aEsperado, inicio);
            cout << aceptedi << endl;
        }

        soma = 0;
        maior = 0;
        corte = 0;
        inicio = 0;
        cin >> qtdTiras >> aEsperado;
    }

    return 0;
}
