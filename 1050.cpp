#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

string ddd(int n)
{
    string DDD = "";
    if(n != 61 && n != 71 && n != 11 && n != 21 && n != 32 && n != 19 && n != 27 && n != 31) {
        DDD = "DDD nao cadastrado";
    } else if(n == 61){
        DDD =  "Brasilia";
    } else if(n == 71) {
        DDD =  "Salvador";
    } else if(n == 11) {
        DDD =  "Sao Paulo";
    } else if(n == 21) {
        DDD =  "Rio de Janeiro";
    } else if(n == 32) {
        DDD =  "Juiz de Fora";
    } else if(n == 19) {
        DDD =  "Campinas";
    } else if(n == 27) {
        DDD =  "Vitoria";
    } else if(n == 31) {
        DDD =  "Belo Horizonte";
    }

    return DDD;
}

int main()
{
   int x;
   cin >> x;
   cout << ddd(x) << endl;
}
