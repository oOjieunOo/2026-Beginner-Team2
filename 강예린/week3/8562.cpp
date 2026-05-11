#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	map <int, int> m;
	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		string command;
		cin >> command;
		
		if (command == "f") {
			int x;
			cin >> x;
			if (m.find(x) != m.end()) {
				cout << "YES " << m[x] << "\n";
			}
			else {
				cout << "NO\n";
			}
		}
		else if (command == "a") {
			int x;
			cin >> x;
			m[x] += 1;
		}
		else if (command == "c") {
			cout << m.size() << "\n";
		}
	}

	return 0;
}