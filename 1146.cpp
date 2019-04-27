#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        while ( i < n) {
            cout << i << " ";
            i++;
        }
        cout << i << endl;
        i = 0;
        cin >> n;

        if (n == 0)
            i = n;
    }

    return 0;
}
