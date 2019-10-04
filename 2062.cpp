#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string linha, palavra;
    int trash, cont = 0;
    cin >> trash;
    cin.get();
    getline(cin, linha);
    stringstream S(linha);
    while(S >> palavra) {
        if(palavra.length() == 3) {
            if(palavra[0] == 'O') {
                if(palavra[1] == 'B') {
                    palavra[2] = 'I';
                }
            } else if(palavra[0] == 'U') {
                if(palavra[1] == 'R') {
                    palavra[2] = 'I';
                }
            }
            if(cont == 0)
                cout << palavra;
            else
                cout << " " << palavra;
        } else {
            if(cont == 0)
                cout << palavra;
            else
                cout << " " << palavra;
        }
        cont++;
    }
    cout << endl;

    return 0;
}
