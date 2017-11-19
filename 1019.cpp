#include <iostream>
#include <iomanip>

using namespace std;

int main () {

int n, horas, minutos, segundos;

cin >> n;

horas = n / 3600;
n = n%3600;

minutos = n / 60;
n = n%60;

segundos = n;


cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}