#include <iostream>
#include <string>

using namespace std;

int main() {
	int x;
	string path;

	while (cin >> path >> x) {
		int num = 0, tam = path.size()-1, backup_x = x;

		for (int i = 0; i <= tam; i++) {
			if (path[i] == 'W') {

				if (i > 0 and path[i - 1] == 'R' and x >= 1 and x != backup_x) {
					num += 2;
				} else {
					num++;
				}

				x = backup_x;
			} else if (path[i] == 'R') {

				if (x <= 1 or i == tam) {
					num++;
					x = backup_x;
				} else {
					x--;
				}
			}
		}

		cout << num << endl;
	}

	return 0;
}
