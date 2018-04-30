#include <iostream>

using namespace std;

int f(int n, int k) {
    if(n == 1) return 0;
    return (f(n-1, k) + k) % n;
}

int main(void) {
    int casos, N, M;
    cin >> casos;
    for(unsigned int i=1; i<=casos; i++) {
        cin >> N >> M;
        cout << "Case " << i << ": " << f(N,M)+1 << endl;
    }

    return 0;
}
