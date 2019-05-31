using namespace std;

int main() {
    int n, menor, posicao=0;
    cin >> n;

    int x[n];
    cin >> x[0];
    menor = x[0];

    for(int i=0; i<n-1; i++) {
        cin >> x[i];

        if(x[i] < menor) {
            menor = x[i];
            posicao = i+1;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
