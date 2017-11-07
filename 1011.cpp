#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    int raio;
    double volume;

    cin >> raio;

    volume = (4/3.0) * (3.14159 * (pow(raio,3)));

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;

    return 0;
}