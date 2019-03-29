#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double ev1, ev2, ataque, dano, prob;
    cin >> ev1 >> ev2 >> ataque >> dano;

    while(ev1 > 0 ) {
        double n1 = ceil(ev1 / dano);
        double n2 = ceil(ev2 / dano);

        if(ataque == 3) {
            prob = n1 / (n1 + n2);
        } else {
            prob = (1 - pow(( (6 - ataque) / ataque ), n1)) / (1 - pow(( (6 - ataque) / ataque ), n1 + n2));
        }

        cout << fixed << setprecision(1);
        cout << prob * 100 << endl;
        cin >> ev1 >> ev2 >> ataque >> dano;
    }

    return 0;
}
