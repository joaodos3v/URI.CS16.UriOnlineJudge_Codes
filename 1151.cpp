#include <iostream>

using namespace std;

int main() {
    int anterior=0, atual=1, N, novo;
    cin >> N;
    if(N==1) {
        cout << 0 << endl;
    } else {
        cout << anterior << " " << atual;
        for(int i=3; i<=N; i++) {
            novo = anterior + atual;
            anterior = atual;
            atual = novo;
            cout << " " << novo;
        }
    }
    cout << endl;

    return 0;
}
