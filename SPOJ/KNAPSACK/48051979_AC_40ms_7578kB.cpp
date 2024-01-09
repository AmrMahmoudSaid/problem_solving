#include <iostream>
#include <vector>
using namespace std;
int main() {
    int s,n;cin >>s>>n;
    int wigth[n];int value[n];
    vector<vector<int>> ans(n + 1, vector<int>(s + 1, 0));
    for (int i = 0; i < n; ++i) {
        cin >> wigth[i];
        cin>>value[i];
    }
    for (int i=1;i<=n;++i) {
        for (int j=0;j<= s; ++j) {
            if (wigth[i-1]<= j) ans[i][j] = max(ans[i-1][j],ans[i-1][j-wigth[i-1]]+value[i-1]);
            else ans[i][j]=ans[i-1][j];
        }
    }
    cout<<ans[n][s]<<"\n";
    return 0;
}
