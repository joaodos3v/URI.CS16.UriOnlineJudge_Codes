#include <iostream>
#include <algorithm>

using namespace std;

bool impDecresc_paresCresc(int a, int b) {
    if(a%2==0 && b%2==0) {
        return a < b;
    }
    if(a%2!=0 && b%2!=0) {
        return a > b;
    }
    return abs(a%2) < abs(b%2);
}

int main() {
    int n;
    cin >> n;
    int vet[n];
    
    for(int i=0; i<n; i++)
        cin >> vet[i];

    sort(vet, vet+n, impDecresc_paresCresc);

    for(int i=0; i<n; i++)
        cout << vet[i] << endl;

    return 0;
}
