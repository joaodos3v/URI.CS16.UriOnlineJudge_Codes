#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    double salario, novoSalario, reajuste;

    cin >> salario;

    cout << fixed << setprecision(2);

    if (salario > 0 and salario <= 400.00)
        {
            reajuste = (salario * 15) / 100;
            novoSalario = salario + reajuste;
            cout << "Novo salario: " << novoSalario << endl;
            cout << "Reajuste ganho: " << reajuste << endl;
            cout << "Em percentual: 15 %" << endl;
        }

    if (salario >= 400.01 and salario <= 800.00)
        {
            reajuste = (salario * 12) / 100;
            novoSalario = salario + reajuste;
            cout << "Novo salario: " << novoSalario << endl;
            cout << "Reajuste ganho: " << reajuste << endl;
            cout << "Em percentual: 12 %" << endl;
        }

    if (salario >= 800.01 and salario <= 1200.00)
        {
            reajuste = (salario * 10) / 100;
            novoSalario = salario + reajuste;
            cout << "Novo salario: " << novoSalario << endl;
            cout << "Reajuste ganho: " << reajuste << endl;
            cout << "Em percentual: 10 %" << endl;
        }

    if (salario >= 1200.01 and salario <= 2000.00)
        {
            reajuste = (salario * 7) / 100;
            novoSalario = salario + reajuste;
            cout << "Novo salario: " << novoSalario << endl;
            cout << "Reajuste ganho: " << reajuste << endl;
            cout << "Em percentual: 7 %" << endl;
        }

    if (salario > 2000)
        {
            reajuste = (salario * 4) / 100;
            novoSalario = salario + reajuste;
            cout << "Novo salario: " << novoSalario << endl;
            cout << "Reajuste ganho: " << reajuste << endl;
            cout << "Em percentual: 4 %" << endl;
        }

    return 0;
}
