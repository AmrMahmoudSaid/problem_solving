#include <iostream>
#include <iomanip>
using namespace std;
const int MAXN = 1 << 17;
int a[MAXN];
bool ok(double val,int n ,int k){
    double lo = 0, up = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < val)
            lo += val - a[i];
        else
            up += a[i] - val;
    }
    return up - (up * k) / 100.0 >= lo;
}

int main(){
    int n,k;cin>>n>>k;
    double sum=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        sum += a[i];
    }
    double lo = 0, hi = 1e3;
    for (int i = 0; i < 100; ++i) {
        double mid = (lo + hi) / 2;
        if (ok(mid,n,k))
            lo = mid;
        else
            hi = mid;
    }
    cout<<fixed<<setprecision(9)<<lo<<"\n";
    return 0;
}