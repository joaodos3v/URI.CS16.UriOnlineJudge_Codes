#include <iostream>

using namespace std;

bool primeiro;

int j(int n, int k) {
    if(n == 1) return 0;

    if(primeiro) {
        primeiro = false;
        return (j(n, k) + n) % n;
    }

    return (j(n-1, k) + k) % n;
}

int main() {
    int N, K, restou;

    cin >> N;
    while(N != 0) {
        K = 0;
        restou = 0;

        while(restou != 13) {
            K++;
            restou = j(N-1, K) + 2;
        }

        cout << K << endl;

        cin >> N;
    }
    return 0;
}
