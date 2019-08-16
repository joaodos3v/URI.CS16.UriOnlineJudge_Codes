#include <iostream>

using namespace std;

int compara(char a, char b) {
    if(a == b) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    string palavra;
    int n, cont=0;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> palavra;
        if(palavra.size() == 3) {
            cont += compara(palavra[0], 'o');
            cont += compara(palavra[1], 'n');
            cont += compara(palavra[2], 'e');

            if(cont == 2 || cont == 3) {
                cout << 1 << endl;
            } else {
                cout << 2 << endl;
            }
        } else if(palavra.size() == 5) { ///three
            cout << 3 << endl;
        }
         cont = 0;
    }


    return 0;
}
