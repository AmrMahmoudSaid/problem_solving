#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    for (int i = 0; i <t ; ++i) {
        int n;cin>>n;
        vector<int>cLeaked;
        vector<int>incLeaked;
        for (int j = 0; j < n; ++j) {
            int d,s;
            cin>>d>>s;
            char r;
            cin>>r;
            if (s==0&&r=='i'){
                incLeaked.push_back(d);
            }
            if (s==1&&r=='c'){
                cLeaked.push_back(d);
            }
        }
        sort(incLeaked.begin(),incLeaked.end());
        long long res=0;
        for (int i = 0; i <cLeaked.size(); ++i) {
            if (incLeaked.size() &&incLeaked[0]<cLeaked[i]){
                res+=(upper_bound(incLeaked.begin(),incLeaked.end(),cLeaked[i]-1)-incLeaked.begin());
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}