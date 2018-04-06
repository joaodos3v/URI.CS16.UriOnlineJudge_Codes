#include <iostream>

using namespace std;

int main() {

    unsigned int a, b, c;

    while(cin >> a && cin >> b) {
        c = a ^ b;
        cout << c << endl;
    }

    return 0;
}