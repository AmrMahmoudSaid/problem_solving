#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, r;cin>>n>>r;
    int cnt;
    vector<pair<int, int>> pair(n);
    long long maxSum = 0;
    int left = 0, right = 0;
    long long temp = 0;
    for (int i = 0; i < n; ++i) {
        cin>>pair[i].first ;
        cin>>pair[i].second;
    }
    sort(pair.begin(), pair.end());
    while (right < n) {
        while (right < n && pair[right].first - pair[left].first < r) {
            temp += pair[right].second;
            right++;
        }
        maxSum = max(maxSum, temp);
        temp -= pair[left].second;
        left++;
    }
    cout << maxSum;
    cout<<"\n";
    return 0;
}