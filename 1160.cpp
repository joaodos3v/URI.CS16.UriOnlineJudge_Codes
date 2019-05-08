#include <iostream>

using namespace std;

int main() {
    int t, pa, pb;
    double crescA, crescB;
    cin >> t;

    for(int i=0; i<t; i++) {
        cin >> pa >> pb >> crescA >> crescB;
        int anos=0;
        while(pa <= pb and anos < 102) {
            anos++;
            pa = pa + pa * crescA / 100;
            pb = pb + pb * crescB / 100;
        }
        if(anos > 100)
           cout << "Mais de 1 seculo." << endl;
        else
           cout << anos << " anos." << endl;
    }

    return 0;
}
