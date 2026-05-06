#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> qu;
	string s;
	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> s;

		if (s == "push") {
			cin >> n;
			qu.push(n);
		}
		else if (s == "pop") {
			if (qu.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << qu.front() << '\n';
				qu.pop();
			}
		}
		else if (s == "front") {
			if (qu.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << qu.front() << '\n';
			}
		}
		else if (s == "back") {
			if (qu.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << qu.back() << '\n';
			}
		}
		else if (s == "size")
			cout << qu.size() << '\n';
		else if (s == "empty")
			cout << qu.empty() << '\n';
		else if (s == "top") {
			if (qu.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << qu.front() << '\n';
			}
		}
	}

	return 0;
}