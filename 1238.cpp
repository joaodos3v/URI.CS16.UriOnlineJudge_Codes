#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char x1[60], x2[60], saida[120];
    int n, lim;

    cin >> n;

    while(n--){
        cin >> x1 >> x2;

        int tam1 = strlen(x1);
        int tam2 = strlen(x2);

        (tam1 > tam2) ? lim = tam2 : lim = tam1;

        for(int i=0, j=0; i<lim; i++){
            saida[j] = x1[i];
            j++;
            saida[j] = x2[i];
            j++;
            saida[j] = '\0';
        }


        if(lim == tam1)
            strcat(saida, x2+lim);
            
        if(lim == tam2)
            strcat(saida, x1+lim);

        cout << saida << endl;
    }
}
