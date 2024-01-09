#include <iostream>
using namespace std;
int main(){
    long long n, k;cin>>n>>k;
    long long l = 0, h = k;
    int cnt{0};
    while (l <= h){
        long long mid = l +(h - l) / 2;
        long long p = (k * mid) - ((mid * (mid + 1)) / 2) + 1;
        if (p < n) l = mid + 1;
        else h = mid - 1;
        cnt++;
    }
    if (l > k) cout << -1;
    else cout << l;
    return 0;
}