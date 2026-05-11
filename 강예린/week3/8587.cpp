#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Person {
	string name;
	int age;
	double blood;

	bool operator<(const Person& other) const {
		if (blood == other.blood) {
			return age < other.age; //나이가 많은 사람 먼저
		}
		return blood < other.blood; //출혈량이 많은 사람 먼저
	}
};

int main() {
	
	priority_queue <Person> pq;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		string command;
		cin >> command; //push or pop

		if (command == "push") {
			string name;
			int age;
			double blood;

			cin >> name >> age >> blood;

			pq.push({ name, age, blood });
		}
		else if (command == "pop") {
			if (!pq.empty()) {
				cout << pq.top().name << "\n";
				pq.pop();
			}
		}
	}

	return 0;
}

