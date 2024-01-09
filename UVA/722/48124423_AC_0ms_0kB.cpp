#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 99 ;
const int dr[] = {0, 0, 1, -1};
const int dc[] = {1, -1, 0, 0};
const int L = sizeof dr / sizeof dr[0];
char g[N + 1] [N + 1]; int n, m;
int dfs(int row, int col);
int main(){
    int t;cin>>t;
    while (t--){
        int r,c;cin>>r>>c;
        getchar();
        n=0;
        while (gets(g[n])&&g[n][0]!='\0')
            m= strlen(g[n++]);
        printf("%d\n", dfs(r-1,c-1));
        if (t)cout<<'\n';
    }
    return 0;
}
int dfs(int row, int col){
    if (g[row][col] == '1') return 0;
    int sum=1;
    g[row][col]='1';
    for (int i = 0; i < L; ++i) {
        int row2 = row + dr[i];
        int col2 = col + dc[i];
        if (0 <= row2 && row2 < n && 0 <= col2 &&
            col<m&& g[row2][col2]=='0')
            sum+= dfs(row2,col2);
    }
    return sum;
}