#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

/** Função para ver se um número é primo ou não (OTIMIZADO)
    1º) Só vai até raiz quadrada do número
    2º) Se tem um divisor, já retorna falso e sai da função. Se chegar até o fim, retorna true
    3º) Já faz a raiz quadrada como um número fixo, para não precisar calcular toda vez
    4º) Se for par, nem divide.
    5º) Começa em três e pula de 2 em 2
**/

bool eh_primo(int num) {
    if(num%2==0)
        return false;

    int x = sqrt(num);
    for(int i=3; i<x; i=i+2) {
        if(num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int num, n;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> num;
        if(num==2 || eh_primo(num)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl;
        }
    }
    return 0;
}


