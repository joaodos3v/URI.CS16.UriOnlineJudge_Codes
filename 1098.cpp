#include <iostream>

using namespace std;

int main() {
    int y=0;

    for(double x=0; x<2; x=x+0.2) {
        for(int y=1; y<=3; y++) {
            cout << "I=" << x << " ";
            cout << "J=" << x + y << endl;
        }
    }

    return 0;
}
