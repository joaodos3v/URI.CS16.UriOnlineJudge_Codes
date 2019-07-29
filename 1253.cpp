#include <iostream>

using namespace std;

int main() {
    string palavra, palavraF;
    int n, tam, qtd;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> palavra;
        tam = palavra.size();
        cin >> qtd;
        for(int j=0; j<tam; j++) {
            if(((int) palavra[j] - qtd) < 65) {
                palavraF += (char) (palavra[j] - qtd) + 26;
            } else {
                palavraF += (char) (palavra[j] - qtd);
            }
        }
        cout << palavraF << endl;
        palavraF = "";
    }


    return 0;
}
