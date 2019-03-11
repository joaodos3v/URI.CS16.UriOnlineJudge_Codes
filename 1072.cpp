#include <iostream>

using namespace std;

int main()
{
    int n, x, dentro=0, fora=0;

    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> x;

        if (x >= 10 and x <=20)
        {
            dentro++;
        }
        else
        {
            fora++;
        }
    }

    cout << dentro << " in" << endl;
    cout << fora << " out" << endl;

    return 0;
}
