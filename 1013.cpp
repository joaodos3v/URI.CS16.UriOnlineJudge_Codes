#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {
	int a, b, c, maiorAB, w;
	cin >> a >> b >> c;
	maiorAB = (a + b + abs(a-b)) /2;
	w = (maiorAB + c + abs(maiorAB - c)) /2;
	cout << w << " eh o maior" << endl;
    return 0;
}