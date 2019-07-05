#include <iostream>

using namespace std;

int main()
{
    string n1, n2, maior;
    int posN1, posN2, digito1, digito2, carry=0, soma=0, cont=0;

    cin >> n1 >> n2;
    while(n1 != "0" || n2 != "0") {
        if(n1 > n2)
            maior = n1;
        else
            maior = n2;

        posN1 = n1.size()-1;
        posN2 = n2.size()-1;

        for(int i=maior.size(); i>=0; i--) {
            digito1 = (posN1 >= 0) ? n1[posN1] - '0' : 0;
            digito2 = (posN2 >= 0) ? n2[posN2] - '0' : 0;

            soma = digito1 + digito2 + carry;

            if(soma >= 10)
                cont++;

            carry = soma / 10;

            posN1--;
            posN2--;
        }

        if(cont == 0) cout << "No carry operation.\n";
        else if(cont == 1) cout << cont << " carry operation.\n";
        else cout << cont << " carry operations.\n";

        cont = 0;
        carry = 0;

        cin >> n1 >> n2;
    }

    return 0;
}
