#include <iostream>
using namespace std;

int main ()
{

    int valor, pares=0, impares=0, positivos=0, negativos=0;

    for (int i=0; i<5; i++)
    {
        cin >> valor;
        if(valor % 2 == 0)
        {
           pares = pares + 1;
        }
        if(valor % 2 != 0)
        {
            impares = impares + 1;
        }
        if(valor > 0)
        {
            positivos = positivos + 1;
        }
        if(valor < 0)
        {
            negativos = negativos + 1;
        }
    }

    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;
    return 0;
}
