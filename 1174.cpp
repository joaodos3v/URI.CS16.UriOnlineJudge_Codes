#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    double a[100];

    for(int i=0; i<100; i++) {
        cin >> a[i];

        if(a[i] <= 10)
            cout << "A["<< i << "] = " << a[i] << endl;
    }
}
