#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int size = 1e5 + 10;
int main(){
    int l, t;
    char sequence[size];cin>>l>>t>>(sequence+1);
    vector<int> index;
    for (int i = 1; i <= l; ++i){
        if (sequence[i] == '0') index.push_back(i);
    }
    int ans = size;
    int cnt = index.size();
    int i = 1;
    while (i <= cnt - t) {
        int left = i - 1, right = (i + t - 1), mid, mid_2;
        int cntTemp = 0;
        while (1 + left < right) {
            mid = (left + right) >> 1;
            mid_2 = (mid + right) >> 1;
            int y = max(index[mid_2] - index[i - 1], index[i + t - 1] - index[mid_2]);
            int x = max(index[mid] - index[i - 1], index[i + t - 1] - index[mid]);
            if (x >= y)left = mid;
            else right = mid_2;
            cntTemp++;
        }
        ans = min(ans, max(index[left] - index[i - 1], index[i + t - 1] - index[left]));
        i++;
    }
    cout<<ans<<"\n";
    return 0;
}