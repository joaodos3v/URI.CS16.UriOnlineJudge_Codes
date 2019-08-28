#include <iostream>
 
using namespace std;
 
int main(){
    int N;
    while(cin>> N){
        if( N>0 ){
            int M[N][N];
            for(int i=0 ; i<N ; i++){
                for(int j=0 ; j<N ; j++){
                    if(j == ((N-1)-i)) M[i][j] = 2;
                    else if(i == j) M[i][j] = 1;
                    else M[i][j]=3;
                }
            }
            for(int i=0; i<N ; i++){
                for(int j=0 ; j<N ; j++){
                    cout<<M[i][j];
                }
                cout<<endl;
            }
        }
    }
 
    return 0;
}
