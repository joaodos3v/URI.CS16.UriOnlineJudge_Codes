#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string diet, cafeDaManha, lunch, refeicao;
    int n, cont;

    cin >> n;
    cin.get();
    for(int i=0;i<n;i++){
        cont = 0;
        getline(cin, diet);
        getline(cin, cafeDaManha);
        getline(cin, lunch);
        refeicao = cafeDaManha+lunch;
        for(int f=0;refeicao[f];f++){
            cont = diet.find(refeicao[f]);
            if(cont == -1){
               break;
            }
            else diet.erase(cont,1);
        }
        if(cont == -1)
            cout << "CHEATER" << endl;
        else{
            sort(diet.begin(),diet.end());
            cout << diet << endl;
        }
    }

    return 0;
}
