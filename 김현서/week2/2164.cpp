#include <iostream>
#include <queue>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while (q.size() > 1) {

        q.pop();

        int x = q.front();
        q.pop();
        q.push(x);
    }

    cout << q.front();

    return 0;
}