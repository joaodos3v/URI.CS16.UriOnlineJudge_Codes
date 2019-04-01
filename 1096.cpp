#include <iostream>

using namespace std;

int main() {
    int a, b=0, x, y=0;

    for(int x=1; x<=10; x=x+2) {
        b = 7;
        for(int y=0; y<=2; y++) {
            a = x;
            cout << "I=" << a << " ";
            cout << "J=" << b << endl;
            b -= 1;
        }
    }

    return 0;
}
