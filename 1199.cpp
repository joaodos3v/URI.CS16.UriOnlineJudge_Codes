#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    string x;
    cin >> x;

    while(x[0] != '-') {
        if(x.size() > 2 && x[1] == 'x') {
            cout << dec << strtol(x.c_str(), NULL, 16) << endl;
        } else {
             cout << "0x" << uppercase << hex << strtol(x.c_str(), NULL, 10) << endl;
        }
        cin >> x;
    }

    return 0;
}
