#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, n;
    cin >> x;

    for(int j=0; j<x; j++) {
      cin >> n;
      int div=1;
      for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            div++;
            i=n;
        }
    }
    
    if(div>1)
      cout << n << " nao eh primo" << endl;
    else
      cout << n << " eh primo" << endl;  
  }
  
    return 0;
}
