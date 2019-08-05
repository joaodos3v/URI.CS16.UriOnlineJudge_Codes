#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(4);

    map <string, int> tree;
    map <string, int>::iterator it;

    int n, cont=0;
    string linha = "";

    cin >> n;
    cin.get();

    for(int i=0; i<=n; i++) {
        cont = 0;
        tree.clear();

        if(i > 1)
           cout << endl;

        while(getline(cin, linha)) {
            if(linha != "") {
                tree[linha]++;
                cont++;
            } else
                break;
        }

        for(it = tree.begin(); it != tree.end(); it++) {
            cout << it->first << " " << (it->second * 100) / (double)cont << endl;
        }

    }

    return 0;
}
