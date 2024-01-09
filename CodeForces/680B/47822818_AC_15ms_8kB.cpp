#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n , index;cin>>n>>index;
    vector<int> cities(n);
    for (int i = 0; i < n; ++i) {
        cin>>cities[i];
    }
    int left=index-1;
    int right=index-1;
    int cnt{0};
    if (cities[index-1]==1) cnt++;
    while (true){
        left--;
        right++;
        if (left>=0&&right<cities.size()) {
            if (cities[left]==1&&cities[right]==1) cnt+=2;
        } else if (left>=0){
            if (cities[left]==1) cnt++;
        } else if (right<cities.size()){
            if (cities[right]==1) cnt++;
        } else break;
    }
    cout<<cnt;
    return 0;
}
