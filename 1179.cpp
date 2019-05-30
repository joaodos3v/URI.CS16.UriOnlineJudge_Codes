#include <iostream>

using namespace std;

int main() {
   int contP=0, contI=0, par[5], impar[5], x;

   for(int i=0; i<15; i++) {
        cin >> x;

        if(x%2==0) {
            par[contP] = x;
            contP++;
            if(contP == 5) {
                for(int j=0; j<5; j++) {
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
            contP = 0;
            }
        } else {
            impar[contI] = x;
            contI++;
            if(contI == 5) {
                for(int j=0; j<5; j++) {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                contI = 0;
            }
        }
   }

   for(int i=0; i<contI; i++)
        cout << "impar[" << i << "] = " << impar[i] << endl;
   
   for(int i=0; i<contP; i++)
        cout << "par[" << i << "] = " << par[i] << endl;

    return 0;
}
