#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;cin>>n;
    vector<int> arr(n);
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ans{0};
    int totalServiceTime=0;
    for (int i = 0; i < n; ++i) {
        int serviceTime = arr[i];

        if (totalServiceTime <= serviceTime) {
            ans++;
            totalServiceTime += serviceTime;
        }
    }
    cout<<ans;
    return 0;
}
