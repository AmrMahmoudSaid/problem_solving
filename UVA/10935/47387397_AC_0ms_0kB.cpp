#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, x;
    queue<int> q;

    while (cin >> n, n) {
        for (int i = 1; i <= n; i++) {
            q.push(i);
        }

        cout << "Discarded cards:";
        while (q.size() > 1) {
            cout << " " << q.front();
            q.pop();
            x = q.front();
            q.pop();
            if (!q.empty())
                cout << ",";
            q.push(x);
        }
        cout << "\nRemaining card: " << q.front() << "\n";
        q.pop();
    }

    return 0;
}
