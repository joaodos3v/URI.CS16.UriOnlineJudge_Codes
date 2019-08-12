#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    string linha, palavra, palavraF = "";
    int n, cont=0;
    cin >> n;
    while(n != 0) {
        string palavras[100];
        cin.get();
        for(int i=0; i<n; i++) {
            getline(cin, linha);
            stringstream S(linha);
            while(S >> palavra) {
                if(cont == 0){
                    palavraF += palavra;
                } else {
                    palavraF += " " + palavra;
                }
                cont++;
            }
            palavras[i] = palavraF;
            cont=0;
            palavraF = "";
        }

        int maiorLength = 0;
        for(int i=0; i<n; i++) {
            if(palavras[i].length() > maiorLength)
                maiorLength = palavras[i].length();
        }

        for(int i=0; i<n; i++) {
            cout << setw(maiorLength) << palavras[i] << endl;

        }
        cin >> n;
         if(n != 0)
            cout << endl;
    }

    return 0;
}
