#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    double valor;
    int reais, centavos, n100, n50, n20, n10, n5, n2, n1, n050, n025, n010, n05, n01;

    cin >> valor;

    reais = valor;
    centavos = ((valor - reais) + 0.001 )* 100;

    n100 = reais /100;
    reais = reais % 100;

    n50 = reais /50;
    reais = reais % 50;

    n20 = reais /20;
    reais = reais % 20;

    n10 = reais /10;
    reais = reais % 10;

    n5 = reais /5;
    reais = reais % 5;

    n2 = reais /2;
    reais = reais % 2;

    //MOEDAS A PARTIR DAQUI

    n1 = reais /1;
    reais = reais % 1;

    n050 = centavos /50;
    centavos = centavos % 50;

    n025 = centavos /25;
    centavos = centavos % 25;

    n010 = centavos /10;
    centavos = centavos % 10;

    n05 = centavos /5;
    centavos = centavos % 5;

    n01 = centavos /1;
    centavos = centavos % 1;

    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << n1 << " moeda(s) de R$ 1.00" << endl;
    cout << n050 << " moeda(s) de R$ 0.50" << endl;
    cout << n025 << " moeda(s) de R$ 0.25" << endl;
    cout << n010 << " moeda(s) de R$ 0.10" << endl;
    cout << n05 << " moeda(s) de R$ 0.05" << endl;
    cout << n01 << " moeda(s) de R$ 0.01" << endl;
    
return 0;

}