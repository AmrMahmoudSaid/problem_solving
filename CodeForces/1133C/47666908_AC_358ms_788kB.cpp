#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int num;
    cin >> num;
    vector<int> workers(num);
    for (int i = 0; i < num; ++i) {
        cin >> workers[i];
    }
    sort(workers.begin(), workers.end());
    int left = 0, right = 0, numberOfGroup = 0;
    while (right < num) {
        if (workers[right] - workers[left] <= 5) {
            numberOfGroup = max(numberOfGroup, right - left + 1);
            ++right;
        } else {
            ++left;
        }
    }

    cout << numberOfGroup <<"\n";

    return 0;
}