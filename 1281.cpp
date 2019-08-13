#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    map <string, double> frutasDisp;
    map <string, double>::iterator it;
    int n, prodDisp, prodParcinova, qtdFruta;
    double precoFruta, TOTAL;
    string nomeFruta;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> prodDisp;
        cin.get();
        for(int j=0; j<prodDisp; j++) {
            cin >> nomeFruta >> precoFruta;
            frutasDisp[nomeFruta] = precoFruta;
        }

        cin >> prodParcinova;
        cin.get();
        TOTAL = 0;
        for(int j=0; j<prodParcinova; j++) {
            cin >> nomeFruta >> qtdFruta;
            TOTAL += frutasDisp[nomeFruta] * qtdFruta;
        }

        cout << fixed << setprecision(2);
        cout << "R$ " << TOTAL << endl;
    }

    return 0;
}
