#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

    double n1, n2, n3, n4, notaExame, media, novaMedia;

    cout << fixed << setprecision(1);
    cin >> n1 >> n2 >> n3 >> n4;

    media = ( ( n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1)  / 10) ;

    cout << "Media: " << media << endl;

    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    }

    if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    }

    if (media >= 5.0 and media <= 6.9) {
        cout << "Aluno em exame." << endl;
        cin >> notaExame;
        cout << "Nota do exame: " << notaExame << endl;
        novaMedia = (media + notaExame) / 2;

        if (novaMedia >= 5.0) {
             cout << "Aluno aprovado." << endl;
             cout << "Media final: " << novaMedia << endl;
        }
        if (novaMedia <= 4.9) {
             cout << "Aluno reprovado." << endl;
             cout << "Media final: " << novaMedia << endl;
        }
    }

    return 0;
}
