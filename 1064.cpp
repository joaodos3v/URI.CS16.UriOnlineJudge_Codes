#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

    double valor, positivos=0, media=0, media1=0;

    for (int i=0; i<6; i++)
    {
        cin >> valor;
        if(valor >= 0)
        {
            positivos = positivos + 1;
            media = media + valor;
        }
    }

    media1 = media / positivos;
    cout << positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1);
    cout << media1 << endl;

    return 0;
}
