#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	stack<int> st;
	int N;             
	string s; 
	int num;         
	int result = 0; 

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s;

		
		if (s == "push") {
			cin >> num;
			st.push(num);
		}

		else if (s == "pop") {
			if (st.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = st.top();
				cout << result << endl;
				st.pop();
			}
		}
		else if (s == "size") {
			cout << st.size() << endl;
		}

		else if (s == "empty") {
			if (st.size() == 0) {
				result = 1;
				cout << result << endl;
			}
			else {
				result = 0;
				cout << result << endl;
			}
		}
		else if (s == "top") {
			if (st.size() == 0) {
				result = -1;
				cout << result << endl;
			}
			else {
				result = st.top();
				cout << result << endl;
			}
		}
	}

	return 0;
}
