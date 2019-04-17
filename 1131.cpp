#include <iostream>

using namespace std;

int main() {
    int inter, gremio, resposta, total, vitoriaI=0, vitoriaG=0, empate=0;
    cin >> inter >> gremio;
    total = 1;

    while(resposta != 2) {
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> resposta;

        if(inter > gremio) {
            vitoriaI++;
        } else if(gremio > inter) {
            vitoriaG++;
        } else if(gremio == inter) {
            empate++;
        }

        if(resposta == 2) {
            cout << total << " grenais" << endl;
        } else {
            total++;
            cin >> inter >> gremio;
        }
    }

    cout << "Inter:" << vitoriaI << endl;
    cout << "Gremio:" << vitoriaG << endl;
    cout << "Empates:" << empate << endl;

    if(vitoriaG > vitoriaI) {
        cout << "Gremio venceu mais" << endl;
    } else if(vitoriaI > vitoriaG) {
        cout << "Inter venceu mais" << endl;
    }

    return 0;
}
