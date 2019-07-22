#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

int main(){
    string linha, pal1, pal2, resposta;
    int n, tam1=0, tam2=0, contCorrect=0, contWrong=0, cont1=0;
    cin >> n;
    cin.get();
    for(int i=0; i<n; i++) {
        getline(cin, linha);
        stringstream S(linha);
        S >> pal1;
        S >> pal2;
        tam1 = pal1.length();
        tam2 = pal2.length();
        cont1 = tam1;
        if(tam2 > tam1) {
                resposta = "nao encaixa";
        } else {
            for(int j=tam2; j>=0; j--) {
                if(isdigit(pal1[cont1]) && isdigit(pal2[j]) && pal1[cont1] == pal2[j]) {
                    contCorrect++;
                } else {
                    contWrong++;
                }
                cont1--;
            }
        if(contWrong > 1)
            resposta = "nao encaixa";
        else
            resposta = "encaixa";
        }
        cout << resposta << endl;
        contWrong = 0;
    }

    return 0;
}
