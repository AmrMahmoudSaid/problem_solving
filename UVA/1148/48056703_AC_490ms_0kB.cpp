#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
int dist[100005];
void bfs(int s) {
    memset(dist, -1, sizeof dist);
    queue<int> q;
    dist[s] = 0;
    q.push(s);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v : adj[u]) {
            if(dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    int t;cin>>t;
    while (t--){
        int n;cin>>n;
        for (int i = 0; i < n; ++i) adj[i].clear();
        for (int i = 0; i < n; ++i) {
            int from,cnt;cin>>from>>cnt;
            for (int j = 0; j < cnt; ++j) {
                int to;cin>>to;
                adj[from].push_back(to);
                adj[to].push_back(from);
            }
        }
        int from,to;cin>>from>>to;
//        int ans = bfs(from)-1;
        bfs(from);
        cout<<from<<" "<<to<<" "<<dist[to]-1<<"\n";
        if (t) cout<<"\n";
    }
}