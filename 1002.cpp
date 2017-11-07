#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
	cout << fixed << setprecision(4);

	double raio, area, tt=3.14159;
	cin >> raio;

	area = (tt * pow(raio,2));

	cout << "A=" << area << endl;

	return 0;
}
