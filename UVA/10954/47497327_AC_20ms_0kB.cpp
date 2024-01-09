#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n!=0){
        priority_queue<int, vector<int>, greater<int>> m;
        for (int i = 0; i < n; ++i) {
            int x; cin>>x;
            m.push(x);
        }
        int totalCost = 0;

        while (m.size() > 1) {
            int x = m.top();
            m.pop();
            int y = m.top();
            m.pop();
            int sum = x + y;
            totalCost += sum;
            m.push(sum);
        }
        cout << totalCost <<"\n";
        cin>>n;
    }

    return 0;
}
