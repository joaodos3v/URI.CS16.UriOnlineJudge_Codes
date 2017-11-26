#include <iostream>

using namespace std;

typedef struct {
    int num;
    int den;
} RACIONAL;

char barra;

void lerRacional(RACIONAL &element) {
    cin >> element.num >> barra >> element.den;
}

RACIONAL simplifica(RACIONAL valor, int i) {
   valor.num  = valor.num / i;
   valor.den  = valor.den / i;
   return valor;
}

int mdc(int m, int n) {
    if(m % n != 0) {
        mdc(n, (m%n));
    } else {
        return n;
    }
}


void imprime(RACIONAL data) {
    cout << data.num << "/" << data.den << " = ";
    bool entrouNum = false;
    bool entrouDen = false;
    if(data.num < 0) {
        data.num = data.num * -1;
        entrouNum = true;
    }

    if(data.den < 0) {
        data.den = data.den * -1;
        entrouDen = true;
    }

    int maximoDiv = mdc(data.num, data.den);
    data  = simplifica(data, maximoDiv);

    if(entrouNum && !entrouDen){
        cout << data.num * -1 << "/" << data.den << endl;
    } else if(entrouDen && !entrouNum){
        cout << data.num << "/" << data.den * -1 << endl;
    }  else if(entrouNum && entrouDen){
        cout << data.num * -1 << "/" << data.den * -1 << endl;
    } else {
        cout << data.num << "/" << data.den << endl;
    }
}

int main(void){
    RACIONAL r1, r2, calc;
    char operacao;

    int oloco = 0;
    cin >> oloco;

    for(int n=0; n<oloco; n++) {
       lerRacional(r1);
        cin >> operacao;
        lerRacional(r2);

        if(operacao == '+') {
            calc.num = r1.num * r2.den + r1.den * r2.num;
            calc.den = r1.den * r2.den;
            imprime(calc);
        } else if(operacao == '*') {
            calc.num = r1.num * r2.num;
            calc.den = r1.den * r2.den;
            imprime(calc);
        } else if(operacao == '-') {
            calc.num = r1.num * r2.den - r1.den * r2.num;
            calc.den = r1.den * r2.den;
            imprime(calc);
        } else {
            calc.num = r1.num * r2.den;
            calc.den = r1.den * r2.num;
            imprime(calc);
        }
    }

    return 0;
}