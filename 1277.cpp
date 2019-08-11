#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

int main(){
    int n, numAlunos;
    cin >> n;
    for(int i=0; i<n; i++) { ///Número de Casos de Teste
        cin >> numAlunos;
        string nomeAlunos[numAlunos], freqAlunos[numAlunos], reprovados[numAlunos], mostra = " ";
        int calcFreq[numAlunos], presente=0, ausente=0;
        double total=0, minObrigatorio=0, ausencia=0, freqValida=0.0;
        cin.get();
        for(int j=0; j<numAlunos; j++) {
            cin >> nomeAlunos[j];
        }
        for(int j=0; j<numAlunos; j++) {
            cin >> freqAlunos[j];
            calcFreq[j] = freqAlunos[j].length();
        }
        for(int j=0; j<numAlunos; j++) {
            for(int k=0; k<calcFreq[j]; k++) {
                if(freqAlunos[j][k] != 'M') {
                    freqValida = freqValida + 1.0;
                }
                if(freqAlunos[j][k] == 'P') {
                    presente++;
                } else if(freqAlunos[j][k] != 'M') {
                    ausente++;
                }
            }
            ausencia = (ausente * 100.0) / freqValida;

            if(ausencia > 25) {
                mostra += " " + nomeAlunos[j];
            }
            freqValida = 0;
            ausente = 0;
        }
        mostra.erase(0,2);
        cout << mostra << endl;
        mostra = " ";
    }


    return 0;
}
