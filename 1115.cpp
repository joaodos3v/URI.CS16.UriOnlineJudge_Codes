#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

string quadrante(int a, int b) {
    if(a > 0 && b > 0)
        return "primeiro";
    else if(a > 0 && b < 0)
        return "quarto";
    else if(a < 0 && b > 0)
        return "segundo";
    else
        return "terceiro";
}

int main() {
   int x, y;
   cin >> x >> y;
   while(x != 0 && y != 0) {
     cout << quadrante(x, y) << endl;
     cin >> x >> y;
   }
}
