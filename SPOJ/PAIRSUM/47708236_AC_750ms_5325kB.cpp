#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    vector<long long > prefixSum(n+1);
    vector<long long > prefixSquareSum(n+1);
    for (int i = 1; i <= n; ++i) {
        int num = arr[i-1];
        prefixSum[i]+=prefixSum[i-1]+num;
        prefixSquareSum[i]+=prefixSquareSum[i-1]+(num*num);
    }
    int q;cin>>q;
    for (int i = 0; i < q; ++i) {
        int l,r;cin>>l>>r;
        r++;
        long long  sumSq = prefixSquareSum[r]-prefixSquareSum[l];
        long long sum = prefixSum[r]- prefixSum[l];
        cout<<(sum*sum+sumSq)/2<<"\n";
    }
    return 0;
}
