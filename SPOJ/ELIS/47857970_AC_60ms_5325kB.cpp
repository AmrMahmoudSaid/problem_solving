#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;cin>>n;
    int ans=1;
    vector<int> v(n);
    for (int i = 0; i <n ; i++) {
        cin>>v[i];
    }
    for (int i = 0; i <(1<<n) ; i++) {
        int cnt=0;
        int l=0;
        for (int j = 0; j <n ; j++){
            if (i>>j&1){
                if (v[j]<=l){
                    ans= max(ans,cnt);
                    break;
                } else{
                    cnt++;
                    l=v[j];
                }
            }
        }
        ans= max(ans,cnt);
    }
    cout<<ans;
    return 0;
}
