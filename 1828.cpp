#include <iostream>

using namespace std;

int main()
{

    int T;
    string  sheldon, raj;

    cin >> T;

    for (int i=0; i< T; i++) {
        cin >> sheldon >> raj;

        if (sheldon == "tesoura" and raj == "papel" or sheldon == "papel" and raj == "pedra" or
            sheldon == "pedra" and raj == "lagarto" or sheldon == "lagarto" and raj == "Spock" or
            sheldon == "Spock" and raj == "tesoura" or sheldon == "tesoura" and raj == "lagarto" or
            sheldon == "lagarto" and raj == "papel" or sheldon == "papel" and raj == "Spock" or
            sheldon == "Spock" and raj == "pedra" or sheldon == "pedra" and raj == "tesoura") {
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            }

        else if  (raj == "tesoura" and sheldon == "papel" or raj == "papel" and sheldon == "pedra" or
            raj == "pedra" and sheldon == "lagarto" or raj == "lagarto" and sheldon == "Spock" or
            raj == "Spock" and sheldon == "tesoura" or raj == "tesoura" and sheldon == "lagarto" or
            raj == "lagarto" and sheldon == "papel" or raj == "papel" and sheldon == "Spock" or
            raj == "Spock" and sheldon == "pedra" or raj == "pedra" and sheldon == "tesoura") {
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
            }
        else {
            cout << "Caso #" << i+1 << ": De novo!" << endl;
        }
    }


    return 0;
}
