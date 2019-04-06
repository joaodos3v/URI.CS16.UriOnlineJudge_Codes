#include <iostream>
#include <cstdio>
#define TAM 9
#define INFINITO 9

using namespace std;

int adj[65][65];

int returnCount(char c, int i) {
   return ( (c - 'a') * 8 ) + i;
}

void floyd(){
    for (int k=1;k<=64;k++){
        for (int i=1;i<=64;i++){
            for (int j=1;j<=64;j++){
                if (adj[j][k] + adj[k][i] < adj[j][i])
                    adj[j][i] = adj[j][k] + adj[k][i];
            }
        }
    }
}

int main(){
    int tabuleiro[TAM][TAM];
    int cont = 1, i, j;

    for (i = 1; i < TAM; i++){
        for (j = 1; j < TAM; j++){
            tabuleiro[i][j] = cont++;
        }
    }

    for (i = 1; i < 65; i++){
        for (j = 1; j < 65; j++){
            adj[i][j] = INFINITO;
        }
        adj[i][i] = 0;
    }

    cont = 0;
    for (i = 1; i < TAM; i++){
        for (j = 1; j < TAM; j++){
            if ((i+1)<TAM && (j+2)<TAM){ ///mov 5
                adj[tabuleiro[i][j]][tabuleiro[i+1][j+2]] = 1;
            }
            if ((i-1)>0 && (j+2)<TAM){ ///mov 6
                adj[tabuleiro[i][j]][tabuleiro[i-1][j+2]] = 1;
            }
            if ((i-2)>0 && (j+1)<TAM){ ///mov 2
                 adj[tabuleiro[i][j]][tabuleiro[i-2][j+1]] = 1;
            }
            if ((i-2)>0 && (j-1)>0){ ///mov 1
                adj[tabuleiro[i][j]][tabuleiro[i-2][j-1]] = 1;
            }
            if ((i-1)>0 && (j-2)>0){ ///mov 3
                adj[tabuleiro[i][j]][tabuleiro[i-1][j-2]] = 1;
            }
            if ((i+1)<TAM && (j-2)>0){ ///mov 4
                adj[tabuleiro[i][j]][tabuleiro[i+1][j-2]] = 1;
            }
            if ((i+2)<TAM && (j-1)>0){ ///mov 7
                adj[tabuleiro[i][j]][tabuleiro[i+2][j-1]] = 1;
            }
            if ((i+2)<TAM && (j+1)<TAM){ ///mov 8
                adj[tabuleiro[i][j]][tabuleiro[i+2][j+1]] = 1;
            }
        }
    }

    floyd();

    string s1, s2;
    while(cin >> s1 && cin >> s2) {
        int numSaida, numChegada;
        numSaida = returnCount(s1[0], (int) s1[1] - '0');
        numChegada = returnCount(s2[0], (int) s2[1] - '0');

        cout << "To get from " << s1 << " to " << s2 << " takes " << adj[numSaida][numChegada] << " knight moves." << endl;
    }

    return 0;
}
