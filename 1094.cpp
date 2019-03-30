#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x, coelhos=0, ratos=0, sapos=0, total=0, quantia=0;
    string cobaia;
    double pCoelhos, pRatos, pSapos;

    cin >> x;

    for(int i=0; i<x; i++) {
        cin >> quantia >> cobaia;

        if(cobaia == "C") coelhos += quantia;

        else if(cobaia == "R") ratos += quantia;

        else if(cobaia == "S") sapos += quantia;
    }

    total = coelhos + ratos + sapos;
    pCoelhos = (100.00 * coelhos) / total;
    pRatos = (100.00 * ratos) / total;
    pSapos = (100.00 * sapos) / total;

    cout << fixed << setprecision(2);
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << "Percentual de coelhos: " << pCoelhos << " %" << endl;
    cout << "Percentual de ratos: " << pRatos << " %" << endl;
    cout << "Percentual de sapos: " << pSapos << " %" << endl;

    return 0;
}
