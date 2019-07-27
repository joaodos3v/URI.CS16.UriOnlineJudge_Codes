#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef struct {
    int Frequencia;
    int ValorASC;
} VALORES;


bool compara (VALORES A, VALORES B) {
    if (A.Frequencia != B.Frequencia) {
        return A.Frequencia < B.Frequencia;
    } else {
        return A.ValorASC > B.ValorASC;
    }
}

int main() {
   VALORES v[128];
   char tmp[128];
   string linha;
   int inicio=0;
   while (cin >> linha) {
       for (int i=32; i<128; i++) {
          tmp[i]=0;
       }
       for (int i=0; i<linha.size(); i++) {
          tmp[linha[i]]++;
       }

       int cont = 0;
       for (int i=32; i<128; i++) {
          if (tmp[i] != 0) {
             v[cont].ValorASC=i;
             v[cont].Frequencia=tmp[i];
             cont++;
          }
       }

       sort (v, v+cont, compara);

       if (inicio++)
            cout << endl;

       for (int i=0; i<cont; i++) {
           cout << v[i].ValorASC << " " << v[i].Frequencia<<endl;
       }

   }
}
