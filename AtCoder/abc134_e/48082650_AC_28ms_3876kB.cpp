#include <iostream>
#include <vector>
using namespace std;
int main() {
    int size = 1e5 + 5;
    vector<int> val(size);
    vector<int> seq(size);
    int num;cin>>num;
    for (int i = 1; i <= num; i++) cin >> val[i];
    int length = 0;
    for (int i = 1; i <= num; i++) {
        int left = 0, right = length;
        while (left < right) {
            int mid = (left + right + 1) >> 1;
            if (seq[mid] >= val[i]) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        length = max(length, right + 1);
        seq[right + 1] = val[i];
    }
    cout << length << "\n";
    return 0;
}