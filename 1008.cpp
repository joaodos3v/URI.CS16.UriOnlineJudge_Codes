#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout << fixed << setprecision(2);

	int numeroFunc, quantidadeHoras;
	double valorRecebido,salario;

	cin >> numeroFunc >> quantidadeHoras >> valorRecebido;

	salario = quantidadeHoras * valorRecebido;

	cout << "NUMBER = " << numeroFunc << endl;
	cout << "SALARY = U$ " << salario << endl;


	return 0;
}