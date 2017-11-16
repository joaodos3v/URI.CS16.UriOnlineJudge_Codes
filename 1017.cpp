#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int tempoGasto, velocidadeMedia, distanciaPercorrida;
	double quantidadeLitrosGasta;

	cin >> tempoGasto >> velocidadeMedia;

	distanciaPercorrida = tempoGasto * velocidadeMedia;
	quantidadeLitrosGasta = distanciaPercorrida / 12.0;

	cout << fixed << setprecision(3);
	cout << quantidadeLitrosGasta << endl;


    return 0;
}

