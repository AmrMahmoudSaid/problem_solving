#include <iostream>
#include <vector>
using namespace std;
const int size=500001;
vector<int> adj[size];
vector<bool> vis(500001);
void dfs(int u){
    vis[u]= true;
    for (int neig: adj[u]) {
        if (!vis[neig])
            dfs(neig);
    }
}
int main() {
    int num,rows;cin>>num>>rows;
    int cnt=0;
    for (int i = 0; i < rows; ++i) {
        int f1,f2;cin>>f1>>f2;
        adj[f1].push_back(f2);
        adj[f2].push_back(f1);
    }
    for (int i = 1; i <= num; ++i) {
        if (!vis[i]){
            dfs(i);
            cnt++;
        }
    }
    if (cnt==1&&num==rows+1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
