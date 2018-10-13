#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{

    int codigoProduto, quantidadeProduto;
    double total;

    cin >> codigoProduto >> quantidadeProduto;

    cout << fixed << setprecision(2);

    if (codigoProduto == 1)
    {
        total = quantidadeProduto * 4.00;
        cout << "Total: R$ " << total << endl;
    }

    if (codigoProduto == 2)
    {
        total = quantidadeProduto * 4.50;
        cout << "Total: R$ " << total << endl;
    }

    if (codigoProduto == 3)
    {
        total = quantidadeProduto * 5.00;
        cout << "Total: R$ " << total << endl;
    }

    if (codigoProduto == 4)
    {
        total = quantidadeProduto * 2.00;
        cout << "Total: R$ " << total << endl;
    }

    if (codigoProduto == 5)
    {
        total = quantidadeProduto * 1.50;
        cout << "Total: R$ " << total << endl;
    }

    return 0;
}
