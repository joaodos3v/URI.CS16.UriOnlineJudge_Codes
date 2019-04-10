#include <iostream>

using namespace std;

int main() {
    int h1, m1, h2, m2, valorFinal = 0;

    cin >> h1 >> m1 >> h2 >> m2;
    while(h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0 ) {
        int min1 = 0, min2=0;
        min1 = h1 * 60 + m1;
        min2 = h2 * 60 + m2;

        valorFinal = min2 - min1;
        if(min1 > min2) {
            valorFinal += 1440;
        }

        cout << valorFinal << endl;
        cin >> h1 >> m1 >> h2 >> m2;
    }

    return 0;
}
