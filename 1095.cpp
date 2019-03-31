#include <iostream>

using namespace std;

int main() {
    int i=-2, j=65;

    for(int x=0; x<=12; x++) {
        i += 3;
        j -= 5;
        cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}
