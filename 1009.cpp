#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout << fixed << setprecision(2);

	string nome;
	double salarioFixo,totalVendas,bonus,total2;

	cin >> nome >> salarioFixo >> totalVendas;

	bonus = (totalVendas * 15) / 100;
	total2 = salarioFixo + bonus;

	cout << "TOTAL = R$ " << total2 << endl;

	return 0;
}