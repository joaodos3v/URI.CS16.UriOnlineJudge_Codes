#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	cout << fixed << setprecision(2);

	int peca1, numPeca1, peca2, numPeca2;
	double valorPeca1, valorPeca2, totalPeca1, totalPeca2, totalGeral;

	cin >> peca1 >> numPeca1 >> valorPeca1;
	cin >> peca2 >> numPeca2 >> valorPeca2;

	totalPeca1 = numPeca1 * valorPeca1;
	totalPeca2 = numPeca2 * valorPeca2;
	totalGeral = totalPeca1 + totalPeca2;

	cout << "VALOR A PAGAR: R$ " << totalGeral << endl;

	return 0;
}
