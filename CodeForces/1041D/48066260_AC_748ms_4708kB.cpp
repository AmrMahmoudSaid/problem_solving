#include <iostream>
#include <vector>
using namespace std;
constexpr int MAX_ELEMENTS = 2e5;
vector<long long> x_start(MAX_ELEMENTS + 5);
vector<long long> x_end(MAX_ELEMENTS + 5);
vector<long long> prefix_sum(MAX_ELEMENTS + 5);

int main() {
    int num;
    long long height;
    long long len = 0;
    cin >> num >> height;
    for (int i = 1; i <= num; ++i) {
        cin >> x_start[i] >> x_end[i];
    }
    for (int i = 1; i <= num; ++i) {
        prefix_sum[i]=(x_end[i]-x_start[i])+prefix_sum[i-1];
    }
    for (int i = 1; i <= num; ++i) {
        int left = i, right = num;
        int cnt;
        while (left <= right) {
            auto mid = (left + right)/2;
            auto ans = x_end[mid]-x_start[i];
            auto total_length = prefix_sum[mid]-prefix_sum[i - 1]+height;
            if (total_length > ans) {
                len = max(len, total_length);
                left = mid + 1;
                cnt++;
            } else {
                right = mid - 1;
            }
        }
//        cout<<cnt;
    }
    cout << len;
    cout<<"\n";
    return 0;
}