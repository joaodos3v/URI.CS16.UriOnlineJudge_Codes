#include <iostream>

using namespace std;

int main() {
    int a, b;

    while( a != b) {
        cin >> a >> b;

        if(a > b)
            cout << "Decrescente" << endl;
            
        if(b > a)
            cout << "Crescente" << endl;
    }

    return 0;
}
