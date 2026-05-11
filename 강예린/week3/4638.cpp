#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	set <int> s;
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		string command;
		cin >> command;
		if (command == "i") {
			int x;
			cin >> x;
			s.insert(x);
		}
		else if (command == "r") {
			int x;
			cin >> x;
			s.erase(x);
		}
	}

	int x;
	cin >> x;
	if (x > s.size()) {
		cout << "OVER";
	}
	else {
		set<int>::iterator iter = next(s.begin(), x - 1);
		cout << *iter;
	}

	return 0;
}