#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map <string, int> m;

	int line = 1;
	string name;
	cin >> name;

	while (name != "end") {
		m[name] = line++;
		cin >> name;
	}

	cout << m.size() << "\n";
	for (auto element : m) {
		cout << element.first << " " << element.second << "\n";
	}

	return 0;
}