#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;cin>>n;
    map<string,string> u;
    string s,t;cin>>s>>t;
    u.insert({s,t});
    for (int i = 0; i < n-1; ++i) {
        cin>>s>>t;
        bool added= false;
        for (auto x: u) {
            if (x.second==s){
                u[x.first]=t;
                added= true;
            }
        }
        if (!added){
            u.insert({s,t});
        }

    }
    cout<<u.size()<<"\n";
    for (auto x: u) {
        cout<<x.first<<" "<<x.second<<"\n";
    }

    return 0;
}
