#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n, cost;cin >> n >> cost;
    vector<int> diamonds(n);
    for (int i = 0; i < n; ++i) {
        cin >> diamonds[i];
    }
    long long sum{0} ,temp {0};
    int left = 0;
    for (int right = 0; right < n; ++right) {
        temp += diamonds[right];
        while (temp > cost) {
            temp -= diamonds[left];
            ++left;
        }
        sum = max(sum, temp);
    }
    cout<<sum<<"\n";
    return 0;
}
