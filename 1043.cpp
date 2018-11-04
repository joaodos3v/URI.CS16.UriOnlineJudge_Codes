#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double a, b, c, perimetro, area;

    cin >> a >> b >> c;

    cout << fixed << setprecision(1);

    if (a < b+c and b < a+c and c < a+b)
    {
        perimetro = a + b + c;
        cout << "Perimetro = " << perimetro << endl;
    }
    else
    {
        area = ((a +b) * c) / 2;
        cout << "Area = " << area << endl;
    }


    return 0;
}
