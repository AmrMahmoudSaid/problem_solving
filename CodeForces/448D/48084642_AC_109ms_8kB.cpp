#include <iostream>
#include <algorithm>
using namespace std;
long long calculateElements(long long rows, long long columns, long long target) {
    long long count = 0;
    for (long long i = 1; i <= rows; i++) {
        count += min(columns, target / i);
    }
    return count;
}

int main() {
    long long rows, columns, cnt;
    cin >>rows>>columns >> cnt;
    long long left = 1, right = rows * columns;
    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (calculateElements(rows, columns, mid) < cnt) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    cout << left << "\n";
    return 0;
}