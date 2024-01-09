#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int,int> x , pair<int,int> y){
    return x.first< y.first;
}
int main() {
    int r,n; cin>>r>>n;
    vector<pair<int,int>> ans;
    for (int i = 0; i < n; ++i) {
        int pi,qi; cin>>pi>>qi;
        pair<int , int> x;
        x.first=pi;
        x.second=qi;
        ans.push_back(x);
    }
    sort(ans.begin(),ans.end(), compare);
    for (auto a: ans) {
        if (a.first<r) r+=a.second;
        else {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
