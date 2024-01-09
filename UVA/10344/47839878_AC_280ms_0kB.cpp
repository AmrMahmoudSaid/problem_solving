#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool check(vector<long long int>& arr, int n, long long int sum) {
    if (n == arr.size()) return sum == 23;
    return check(arr, n + 1, sum + arr[n]) ||
           check(arr, n + 1, sum * arr[n]) ||
           check(arr, n + 1, sum - arr[n]);
}
bool isPossible(vector<long long int>& v) {
    sort(v.begin(), v.end());
    do {
        if (check(v, 1, v[0])) return true;
    } while (next_permutation(v.begin(), v.end()));
    return false;
}
int main() {
    while (true) {
        vector<long long int> arr(5);
        for (int i = 0; i < 5; ++i) {
            cin >> arr[i];
        }
        if (all_of(arr.begin(), arr.end(), [](long long int x) {
            return x == 0;
        })) {
            break;
        }
        if (isPossible(arr)) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}