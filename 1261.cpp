#include <iostream>
#include <map>

using namespace std;

int main() {
    map <string, int> ptFeno;
    map <string, int>::iterator it;

    string palDic, palavra;
    int numPalavras, qtdDesc;
    int valorPalDic, TOTAL=0;
    cin >> numPalavras >> qtdDesc;

    for(int i=0; i<numPalavras; i++) {
        cin >> palDic >> valorPalDic;
        ptFeno[palDic] = valorPalDic;
    }

    for(int i=0; i<qtdDesc; i++) {
        TOTAL = 0;
        while(cin >> palavra and palavra != ".") {
            TOTAL += ptFeno[palavra];
        }
        cout << TOTAL << endl;
      }

    return 0;
}
