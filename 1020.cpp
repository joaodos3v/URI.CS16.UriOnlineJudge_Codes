#include <iostream>
#include <iomanip>

using namespace std;

int main () {

int n, anos, meses, dias;

cin >> n;

anos = n / 365;
n = n%365;

meses = n / 30;
n = n%30;

dias = n;


cout << anos << " ano(s)" <<  endl;
cout << meses << " mes(es)" <<  endl;
cout << dias << " dia(s)" <<  endl;
    return 0;
}
