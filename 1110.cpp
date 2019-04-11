#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue <int> cards;
    queue <int> exit;
    int n;

    while(cin >> n) {
        if(n != 0) {
            for(int i=1; i<=n; i++) {
               cards.push(i);
            }

            int tamC = cards.size();
            for(int i=0; i<tamC; i++) {
                if(cards.size() >= 2) {
                    exit.push(cards.front());
                    cards.pop();
                    int elm = cards.front();
                    cards.pop();
                    cards.push(elm);
                } else {
                    break;
                }
            }

            cout << "Discarded cards: ";
            int tamE = exit.size();
            for(int i=0; i<tamE; i++) {
                if(i < tamE - 1) cout << exit.front() << ", ";
                else cout << exit.front();
                exit.pop();
            }

            cout << endl << "Remaining card: ";
            while(cards.size() > 0) {
                if(cards.size() > 1) cout << cards.front() << ", ";
                else cout << cards.front();
                cards.pop();
            }
            cout << endl;
//            cout << cards.front() << endl;
        } else {
            break;
        }
    }

    return 0;
}
