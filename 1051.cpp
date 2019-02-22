#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double renda, renda2, imposto;

    cin >> renda;

    cout << fixed << setprecision(2);

    if ( renda > 0.00 and renda <= 2000.00) {
        cout << "Isento" << endl;
    }

    else if ( renda >= 2000.01 and renda <= 3000.00) {
        renda2 = renda - 2000.01;
        imposto = (renda2 * 8) / 100;
        cout << "R$ " << imposto << endl;
    }

    else if ( renda >= 3000.01 and renda <= 4500.00) {
        renda2 = renda - 3000.01;
        imposto = 80 + (renda2 * 0.18);
        cout << "R$ " << imposto << endl;
    }

    else if ( renda > 4500.00) {
        renda2 = renda - 4500.00;
        imposto = 80 + 270 + (renda2 * 0.28);
        cout << "R$ " << imposto << endl;
    }

    return 0;
}
