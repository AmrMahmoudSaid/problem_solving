#include <iostream>
#include<algorithm>
#include <set>
using namespace std;
#define N 100010
#define inf 100000000000
long long a[N], b[N], dist[N];
int main(){
    long long k;
    long long n, m;cin>>n>>m;
    long long high, low, mid;
    set<long long> sb;
    set<long long>::iterator itr;
    for (long long i = 0; i < n; i++){
        cin>>a[i];
    }
    for (long long i = 0; i < m; i++){
        cin>>b[i];
        sb.insert(b[i]);
    }
    for (long long i = 0; i < n; i++){
        itr = sb.lower_bound(a[i]);

        if (itr == sb.end())
            dist[i] = inf;
        else
            dist[i] = abs(*itr - a[i]);
    }
    for (long long i = 0; i < n; i++){
        k = inf * 2;
        high = m - 1, low = 0;
        while (low <= high){
            mid = (low + high) / 2;

            if (b[mid] == a[i]) {
                k = 0;
                break;
            }
            if (b[mid] > a[i]){
                high = mid - 1;
            }
            else{
                k = min(k, abs(b[mid] - a[i])), low = mid + 1;
            }
        }
        dist[i] = min(k, dist[i]);
    }
    m = 0;
    for (long long i = 0; i < n; i++){
        m = max(m, dist[i]);
    }
    cout<<m;
    return 0;
}
