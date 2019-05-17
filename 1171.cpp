#include <iostream>
#define TAM 2005

using namespace std;

int main() {
    int n;
    cin >> n;

    int mat[TAM];
    for(int i=0; i<TAM; i++) {
        mat[i] = 0;
    }

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        mat[x]++;
    }

    for(int i=0; i<TAM; i++) {
        if(mat[i] > 0) {
            cout << i << " aparece " << mat[i] << " vez(es)" << endl;
        }
    }

    return 0;
}
