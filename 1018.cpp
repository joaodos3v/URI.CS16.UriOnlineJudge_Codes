#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int reais, n100, n50, n20, n10, n5, n2, n1;

	cin >> reais;
	cout << reais << endl;

	n100 = reais /100;
	reais = reais % 100;

	n50 = reais /50;
	reais = reais % 50;

	n20 = reais /20;
	reais = reais % 20;

	n10 = reais /10;
	reais = reais % 10;

	n5 = reais /5;
	reais = reais % 5;

	n2 = reais /2;
	reais = reais % 2;

	n1 = reais /1;
	reais = reais % 1;


	cout << n100 << " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50,00" << endl;
	cout << n20 << " nota(s) de R$ 20,00" << endl;
	cout << n10 << " nota(s) de R$ 10,00" << endl;
	cout << n5 << " nota(s) de R$ 5,00" << endl;
	cout << n2 << " nota(s) de R$ 2,00" << endl;
	cout << n1 << " nota(s) de R$ 1,00" << endl;
    return 0;
}