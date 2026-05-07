#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	stack<int> s;
	int K;
	int num;
	int sum = 0;

	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else
			s.push(num);
	}

	
	for (int i = 0; i < s.size(); i++) {
		sum += s.top();	
		s.pop();
	}

	cout << sum;

	return 0;
}
