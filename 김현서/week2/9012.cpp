#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int t = 0; t < n; t++) { 
        string s;
        cin >> s;

        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            if (c == '(') {
                st.push(c);
            }
            else if (c == ')') {
                if (st.empty()) {
                    st.push(c);
                }
                else {
                    st.pop();
                }
            }
        }

        if (st.empty()) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}