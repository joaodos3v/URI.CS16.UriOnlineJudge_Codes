#include <iostream>
#include <cstdlib>

using namespace std;

void decToBin(int valor) { ///30
    int div, k[40], cont=0;
    for (div=1; div<=valor; div*=2); ///1, 2, 4, 8, 16, 32
    div = div/2; /// 32/2 = 16
    while(div != 0) {
        k[cont] = valor / div;
        valor = valor % div; ///if (dig==1) { n=n-div; }
        div = div/2;
        cont++;
    }
    for(int i=0; i<cont; i++) {
        cout << k[i];
    }
    
    cout << " bin" << endl;
}

int main() {
    int n;
    char x[40];
    string frmt;

    cin >> n;

    for(int i=1; i<=n; i++) { ///decimal, hexadecimal (em minúsculo) e binário
        cin >> x >> frmt;
        cout << "Case " << i << ":" << endl;

        if(frmt == "dec") {
            cout << hex << strtol(x, NULL, 10) << " hex" << dec << endl;
            decToBin(strtol(x, NULL, 10));
        } else if(frmt == "hex") {
            cout << dec << strtol(x, NULL, 16) << " dec" << endl;
            decToBin(strtol(x, NULL, 16));
        } else {
            cout << dec << strtol(x, NULL, 2) << " dec" << endl;
            cout << hex << strtol(x, NULL, 2) << " hex" << dec << endl;
        }
        cout << endl;
    }

    return 0;
}
