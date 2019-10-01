#include <bits/stdc++.h>
#define MAX 1010
 
using namespace std;
 
int t[MAX][MAX], a, b;
 
int mochila(int wei[], int val[], int n, int capacity){
    for (int col=0; col <=capacity; col++) {
        t[0][col]=0;
        for (int i=1; i <= n; i++) {
            a = t[i-1][col];
            if (wei[i] > col){
                b=0;
            } else {
                b=t[i-1][col-wei[i]] + val[i];
            }
            if (a>b)
                t[i][col] = a;
            else
                t[i][col] = b;
        }
    }
    return t[n][capacity];
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, x, capacity, cases=0;
 
    cin >> n;
 
    while(n--){
        cin >> x >> capacity;
 
        int w[MAX], v[MAX];
        for(int i=1; i<=x; i++){
            cin >> v[i] >> w[i];
        }
 
        printf("Galho %d:\nNumero total de enfeites: %d\n\n", ++cases, mochila(w, v, x, capacity));
    }
 
    return 0;
}
