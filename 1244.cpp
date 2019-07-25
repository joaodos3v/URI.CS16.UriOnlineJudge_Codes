#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

///stable sort
typedef struct {
    int tam;
    int pos;
    string nome;
} Palavra;

bool ordena(Palavra a, Palavra b) {
   if (a.tam==b.tam) {
       return a.pos < b.pos;
   }
   return a.tam > b.tam;
}

int main() {
   int n;
   cin >> n;
   cin.get();
   Palavra elementos[50];
   string linha, palavra;

   for(int k=0; k<n; k++) {
       getline (cin,linha);

       stringstream S(linha);

       int cont=0;
       while (S >> palavra) {
          ///cout << palavra << endl;
          elementos[cont].nome = palavra;
          elementos[cont].pos = cont;
          elementos[cont].tam = palavra.size();
          cont++;
       }

       sort (elementos, elementos+cont, ordena);


       for (int i=0; i<cont; i++) {
            if(i == 0)
                cout <<  elementos[i].nome;///" "<< elementos[i].pos << " " << elementos[i].tam << endl;
            else
                cout << " "  << elementos[i].nome;
       }
       cout << endl;
       cont=0;
   }

   return 0;
}
