#include <iostream>

#define maxV 100
#define Vertex int

using namespace std;

int cnt, lbl[maxV];
int V,A, adj[25][25];
string espacos="";
int entrou = 0;

void pathR (Vertex v,string espacos) {
    Vertex w;
    lbl[v] = cnt++;
    espacos = espacos + "  ";
    for (w = 0; w < V; w++) {
        if (adj[v][w] == 1) {
            entrou = 1;
            cout << espacos << v << "-" << w ;
            if (lbl[w] == -1) { /// se nao percorreu ainda
                cout << " pathR(G,"  << w << ")" << endl;
                pathR(w,espacos);
            } else {
                cout << endl;
            }
        }
    }
}

int DIGRAPHpath (void) {
    Vertex v;
    for (v = 0; v < V; v++) {
        lbl[v] = -1;
    }
    cnt = 0;
    v=0;
    ///Reinicia o processo no proximo lbl que tem valor -1
    for (v = 0; v < V; v++) {
        if (lbl[v] == -1) {
            entrou=0;
            /// segmento diferente
            pathR (v,espacos);
            if (entrou) cout << endl;
        }
    }
}

int main(void) {
    int orig,dest, n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> V; ///Vertices
        /// Zera a Matriz de Adjacência
        for (int i=0; i<V; i++) {
            for (int j=0; j<V; j++) {
                adj[i][j]=0;
            }
        }
        cin >> A; ///Arestas
        for (int i=0; i<A; i++) {
            cin >> orig >> dest;
            adj[orig][dest]=1;
            /// se for ida e volta (grafo ao inves de digrafo)
            /// (seta para ambas direcoes)
            //    D->adj[dest][orig]=1;
        }

        cout << "Caso " << i << ":" << endl;
        DIGRAPHpath ();
    }
    return(0);
}
