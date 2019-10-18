#include <iostream>

using namespace std;

int main()
{
    string dna, resist;
    int result=0, cont=0;

    while(cin >> dna >> resist) {
        result = dna.find(resist);
        if(result != -1) cout << "Resistente" << endl;
        else cout << "Nao resistente" << endl;
    }


    return 0;
}
