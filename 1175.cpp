#include <iostream>

using namespace std;

int main()
{
    int n[20], n2[20];

    for(int i=0; i<20; i++) {
        cin >> n[i];
    }

    for(int i=19, aux=0; i>=0; i--, aux++) {
        n2[i] = n[i];
        cout << "N[" << aux << "] = " << n2[i] << endl;
    }



    return 0;
}
