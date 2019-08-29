#include<iostream>
#include <iomanip>
 
using namespace std;
 
int main(){
 
    unsigned int T = 0, M = 1, N = 1, i, j;
    unsigned int X, Mat[25][25];
 
    while ((cin >> X), (X > 0)){
        for(i = 0; i < X; i++){
            for(j = 0; j < X; j++){
                Mat[i][j] = M * N;
                M *= 2;
            }
            N *= 2;
            M = 1;
        }
        int Maior = Mat[X - 1][X - 1];
        while(Maior > 0){
            Maior /= 10;
            T++;
        }
        for(i = 0; i < X; i++){
            for(j = 0; j < X; j++){
                if(j == 0){
                    cout<<setw(T)<<Mat[i][j];
                }
                else{
                    cout<<setw(T + 1)<<Mat[i][j];
                }
            }
            cout<<endl;
        }
        cout<<endl;
        T = 0;
        M = 1;
        N = 1;
    }
    return 0;
}
