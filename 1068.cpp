#include <iostream>
#include <stack>

using namespace std;

int main() {
    char elemento;
    string expressao;

    while(cin >> expressao) {
        bool permite = false;
        bool flag = false;
        for(int i=0; i< expressao.size(); i++) {
            if(expressao[i] == '(' || expressao[i] == ')') permite = true;
        }

        if(permite) {
            stack <char> p;
            for(int i=0; i< expressao.size(); i++) {
                elemento = expressao[i];
                if(elemento == '(') {
                    p.push(elemento);
                }
                if(elemento == ')') {
                    if(p.size() > 0) {
                        p.pop();
                    } else {
                        flag = true;
                        break;
                    }
                }
            }
            if(p.size() == 0 && !flag) cout << "correct" << endl;
            else cout << "incorrect" << endl;
        }

    }

    return 0;
}
