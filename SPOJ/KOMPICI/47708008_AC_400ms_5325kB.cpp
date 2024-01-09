#include <iostream>
using namespace std;

int main() {
    long long const size = 1<<10;
    int t;
    cin >> t;

    char num[20];
    int mat[size] = {0};
    long long sol = 0;

    for (int q = 0; q < t; ++q) {
        cin >> num;

        int mask = 0;
        for (int i = 0; num[i] != '\0'; ++i) {
            mask |= 1 << (num[i] - '0');
        }

        sol += mat[mask];
        ++mat[mask];
    }

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (i & j) {
                sol += static_cast<long long>(mat[i]) * mat[j];
            }
        }
    }

    cout << sol << "\n";
    return 0;
}
