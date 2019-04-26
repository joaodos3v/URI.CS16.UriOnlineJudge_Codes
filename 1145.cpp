#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int seq2(int a, int b) {
    int cont = 1;
    for(int i=1; i <= b; i++) {
        if(cont < a)
            cout << i << " ";
        else if(cont == a) {
            cout << i << endl;
            cont = 0;
        }
        cont++;
    }
}

int main() {
   int x, y;
   cin >> x >> y;
   seq2(x, y);
}

