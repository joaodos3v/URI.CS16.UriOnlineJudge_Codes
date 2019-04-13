#include <iostream>

using namespace std;

int main() {
    int i=1,senha;

    while(i){
        cin >> senha;

        if(senha == 2002) {
            cout << "Acesso Permitido" << endl;
            i=0;
        } else {
            cout << "Senha Invalida" << endl;
        }
    }

    return 0;
}
