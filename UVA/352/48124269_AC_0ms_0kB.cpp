#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n;
vector<vector<int>> grid;
vector<vector<bool>> vis;
void dfs(int x, int y);
int main() {
    int cnt = 0;
    while (cin >> n) {
        grid.assign(n, vector<int>(n));
        vis.assign(n, vector<bool>(n, false));
        cnt++;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) {
                char c;cin >> c;grid[i][j] = c-'0';
            }
        }
        int cnt_2 = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (!vis[i][j] && grid[i][j] == 1) {
                    dfs(i, j);cnt_2++;
                }
            }
        }
        cout<<"Image number "<<cnt<<" contains "<<cnt_2<<" war eagles."<<"\n";
    }
    return 0;
}
void dfs(int x, int y) {
    vis[x][y] = true;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < n && !vis[nx][ny] && grid[nx][ny] == 1)
            dfs(nx, ny);
    }
}
