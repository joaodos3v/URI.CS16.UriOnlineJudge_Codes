#include<iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int M = 0, i, j, Aux = 1;
    int X, Mat[105][105];
 
    while ((cin >> X), (X > 0)){
        for(i = 0; i < X; i++){
            for(j = M; j < X; j++){
                Mat[i][j] = Aux;
                Aux++;
            }
            Aux = 1;
            M++;
        }
        M = X - 1;
        for(i = X - 1; i >= 0; i--){
            for(j = M; j >= 0; j--){
                Mat[i][j] = Aux;
                Aux++;
            }
            Aux = 1;
            M--;
        }
        for(i = 0; i < X; i++){
            for(j = 0; j < X; j++){
                if(j == 0){
                    cout<<setw(3)<<Mat[i][j];
                }
                else{
                    cout<<setw(4)<<Mat[i][j];
                }
            }
            cout<<endl;
        }
        cout<<endl;
        Aux = 1;
        M = 0;
    }
    return 0;
}
