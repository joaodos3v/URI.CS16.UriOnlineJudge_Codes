#include <iostream>

using namespace std;

int main() {
    int n[10], x;
    cin >> n[0];

    for(int i=1; i<10; i++)
        n[i] = n[i-1] * 2;

    for(int i=0; i<10; i++)
        cout << "N[" << i << "] = " << n[i] << endl;

    return 0;
}
