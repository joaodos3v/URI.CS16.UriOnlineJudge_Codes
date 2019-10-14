#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    map <string, int> tamPalavras;
    map <string, int>::iterator it;
    string linha, maiorP, maiorP2, palavra;
    int maior=0, maior2=0, cont=0;

    getline(cin, linha);
    while(linha != "0") {
        int palavras[100];
        stringstream S(linha);
        while(S >> palavra) {
            tamPalavras[palavra] = palavra.length();
            palavras[cont] = palavra.length();
            cont++;
        }

        for(it = tamPalavras.begin(); it != tamPalavras.end(); it++) {
            if(it->second > maior) {
                maior = it->second;
                maiorP = it->first;
            }
        }

        for(int i=0; i<cont; i++) {
            if(i == 0)  cout << palavras[i];
            else cout << "-" << palavras[i];
        }

        cout << endl;

        if(maior >= maior2) {
            maior2 = maior;
            maiorP2 = maiorP;
        }

        maiorP="";
        maior=0;
        cont=0;
        tamPalavras.clear();
        getline(cin, linha);
    }

    cout << endl;
    cout << "The biggest word: " << maiorP2 << endl;

    return 0;
}
