#include <iostream>

using namespace std;

int main () {
    int matricula, matricula2, numAlunos;
    double nota=0.0, notaMaior=0.0;

    cin >> numAlunos;

    for (int i=0; i<numAlunos; i++) {
        cin >> matricula >> nota;

        if (nota >= 8 and nota > notaMaior) {
            notaMaior = nota;
            matricula2 = matricula;
        }
    }

    if (notaMaior != 0) {
        cout << matricula2 << endl;
    } else {
        cout << "Minimum note not reached" << endl;
    }
    return 0;
}
