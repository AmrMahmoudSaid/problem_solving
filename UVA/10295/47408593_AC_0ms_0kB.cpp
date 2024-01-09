#include <iostream>
#include <map>

using namespace std;
int main() {
    int n,m;cin>>n>>m;
    map<string,int> q;
    for (int i = 0; i < n; ++i) {
        string word;cin>>word;
        int v ;cin>>v;
        q[word] = v;
    }
    for (int i = 0; i < m; ++i) {
        string w;
        cin>>w;
        int sum{0};
        while (w!="."){
            int num = q[w];
            if (num!=0) sum+=num;
            else q.erase(w);
            cin>>w;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
