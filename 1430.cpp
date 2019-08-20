#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    map <char, double> notas;
    map <char, double>::iterator it;

    notas['W'] = 1.0;
    notas['H'] = 1/(double)2;
    notas['Q'] = 1/(double)4;
    notas['E'] = 1/(double)8;
    notas['S'] = 1/(double)16;
    notas['T'] = 1/(double)32;
    notas['X'] = 1/(double)64;

    string linha;
    double corretos=0, confere=0;

    while(cin >> linha) {
        if(linha != "*") {
            for(int i=0; i<linha.length(); i++) {
                if(linha[i] != '/') {
                    ///incrementa
                    for(it = notas.begin(); it != notas.end(); it++) {
                        if(linha[i] == it->first) {
                            confere += it->second;
                        }
                    }
                } else {
                    ///zera tudo, confere e inicia o próximo
                    if(confere == 1 || confere == 1.0) corretos++;
                    confere = 0;
                }
            }
            cout << corretos << endl;
            corretos = 0;
        } else {
            break;
        }
    }

    return 0;
}
