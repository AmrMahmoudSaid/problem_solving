#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;cin>>n;
    vector<long long > a(n);
    for (long long i = 0; i < n; i++)
        cin>>a[i];
    vector<long long > pre;
    pre.push_back(0);
    for (long long i = n - 1; i >= 0; i--) {
        long long val = a[i] + pre.back();
        pre.push_back(val);
    }
    long long q;cin>>q;
    for (int i=0; i<q ; i++) {
        int op;
        cin >> op;
        if (op == 1) {
            long long l, r;
            cin >> l >> r;
            l = n - l + 1;
            r = n - r;
            cout << pre[l] - pre[r] << "\n";
        } else {
            long long val;
            cin >> val;
            val += pre.back();
            n++;
            pre.push_back(val);
        }
    }

    return 0;
}
