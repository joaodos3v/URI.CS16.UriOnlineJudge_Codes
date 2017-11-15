#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int distancia;
    cin >> distancia;
    cout << fixed << setprecision(1);
    double combustivelGasto, total;
    cin >> combustivelGasto;
    total = distancia / combustivelGasto;

    cout << fixed << setprecision(3);

    cout << total << " km/l" << endl;


    return 0;
}