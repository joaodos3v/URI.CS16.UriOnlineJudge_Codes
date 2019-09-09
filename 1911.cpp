#include <iostream>
#include <map>

using namespace std;

int compara(string a, string b) {
    int cont = 0;
    for(int i=0; i<a.length(); i++) {
        if(a[i] != b[i]){
          //cout << "cont n func: " << cont << endl;
          cont++;
        }
    }
    return cont;
}

int main() {
    map <string, string> vila;

    string nome, assOriginal, assAula;
    int qtdAluTurma, qtdAluAula, diff=0, opa=0;
    cin >> qtdAluTurma;

    while(qtdAluTurma != 0) {
        for(int i=0; i<qtdAluTurma; i++) {
            cin >> nome >> assOriginal;
            vila[nome] = assOriginal;
        }

        cin >> qtdAluAula;

        for(int i=0; i<qtdAluAula; i++) {
            cin >> nome >> assAula;
            diff = compara(vila[nome], assAula);
            if(diff > 1) opa++;
        }

        cout << opa << endl;
        opa=0;
        diff=0;
        qtdAluAula=0;
        vila.clear();

        cin >> qtdAluTurma;
    }

    return 0;
}
