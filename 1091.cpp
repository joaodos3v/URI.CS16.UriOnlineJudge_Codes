#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n != 0) {
        int xDivisor, yDivisor;
        cin >> xDivisor >> yDivisor;

        while (n--) {
            int n, m;
            cin >> n >> m;

            if(xDivisor == n || yDivisor == m) {
                cout << "divisa" << endl;
            } else {
                if(n > xDivisor ) {
                    if(m > yDivisor) {
                        cout << "NE" << endl;
                    } else {
                        cout << "SE" << endl;
                    }
                } else {
                    if(m > yDivisor) {
                        cout << "NO" << endl;
                    } else {
                        cout << "SO" << endl;
                    }
                }
            }
        }

        cin >> n ;
    }

    return 0;
}
