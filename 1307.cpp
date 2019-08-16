#include <iostream>
#include <algorithm>

using namespace std;

int mdc(int m, int n) {
    if(m % n != 0) {
        mdc(n, (m%n));
    } else {
        return n;
    }
}

int main(){
   int n, aux=0;
   string s1="", s2="";

   cin >> n;
   cin.get();

   for(int i=0; i<n; i++) {
       getline(cin, s1);
       getline(cin, s2);

       int s1Num = strtol(s1.c_str(), NULL, 2);
       int s2Num = strtol(s2.c_str(), NULL, 2);

        if(s1Num < s2Num) {
            aux = s1Num;
            s1Num = s2Num;
            s2Num = aux;
        }

       int result = mdc(s1Num, s2Num);

       if(result > 1) cout << "Pair #" << i+1 << ": All you need is love!" << endl;
       else cout << "Pair #" << i+1 << ": Love is not all you need!" << endl;

   }

   return 0;
}
