#include <iostream>
#include <stack>

using namespace std;

int main() {
   string linha;
   char pri[128], elem;
   pri['^']=6; pri['*']=5; pri['/']=5; pri['+']=4; pri['-']=4; pri['>']=3; pri['<']=3; pri['#']=3; pri['&']=2; pri['|']=1; pri['(']=0;
   stack <int> pilha;

   int n;
   cin >> n;

   while(n--){
       cin >> linha;

       for(int i=0; i<linha.size(); i++) {
           elem = linha[i];
           if( toupper(elem) >= 'A' && toupper(elem) <= 'Z' || elem >= '0' && elem <= '9') {
               cout << elem;
           } else { /// Operador ou Parênteses
               if(pilha.size() == 0 || elem == '(') {
                   pilha.push(elem);
               } else if(elem == ')'){
                   while( pilha.top() != '(' ) {
                       cout << (char)pilha.top();
                       pilha.pop();
                   }
                   pilha.pop();
               } else {
                   if( pri[elem] > pri[pilha.top()] ) {
                       pilha.push(elem);
                   } else {
                       while( pilha.size() > 0 && pri[pilha.top()] >= pri[elem] ) {
                           cout << (char)pilha.top();
                           pilha.pop();
                       }
                       pilha.push(elem);
                   }
               }
           }
       }

       if(pilha.size() > 0) {
           while( pilha.size() > 0 ) {
               cout << (char)pilha.top() << endl;
               pilha.pop();
           }
       } else {
            cout << endl;
       }

   }

   return 0;
}
