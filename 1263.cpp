#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int alliteration, cont;
    char anterior = '&';
    string linha, palavra;

    while(getline(cin, linha)) {
        cont=alliteration=0;
        stringstream S(linha);
        while(S >> palavra) {
            char letra = (char)tolower(palavra[0]);
            if(letra == anterior) {
                cont++;
            } else {
                if(cont != 0) {
                    alliteration++;
                }
                cont = 0;
            }
            anterior = letra;
        }
        if(cont != 0) {
            alliteration++;
        }
        cout << alliteration << endl;
    }
    return 0;
}
