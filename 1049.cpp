#include <iostream>

using namespace std;

int main ()
{
    string vertebra, tipo, alimentacao;

    cin >> vertebra >> tipo >> alimentacao;

    if (vertebra == "vertebrado") {
        if ( tipo == "ave") {
            if ( alimentacao == "carnivoro") {
                cout << "aguia" << endl;
            } else if (alimentacao == "onivoro") {
                cout << "pomba" << endl;
            }
        }
        else if ( tipo == "mamifero") {
             if ( alimentacao == "onivoro") {
                cout << "homem" << endl;
            } else if (alimentacao == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    }



    else if ( vertebra == "invertebrado") {
        if ( tipo == "inseto") {
            if ( alimentacao == "hematofago") {
                 cout << "pulga" << endl;
            } else if ( alimentacao == "herbivoro") {
                 cout << "lagarta" << endl;
            }
        }
        if ( tipo == "anelideo") {
            if ( alimentacao == "hematofago") {
                 cout << "sanguessuga" << endl;
            } else if ( alimentacao == "onivoro") {
                 cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
