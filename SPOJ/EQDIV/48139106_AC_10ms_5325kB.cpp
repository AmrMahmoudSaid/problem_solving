#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <cstring>
using namespace std;
int visited[101][101];
int direction[4][2] = {
        {0, 1},
        {0, -1},
        {1, 0},
        {-1, 0}
};
int n;
struct temp{
    int x, y;
};
int cnt;
bool check(temp tmp);
void bfs(int x, int y);
int map_[101][101];
int main(){
    char st[100002];
    bool flag;
    while (cin>>n, n){
        memset(visited, 0, sizeof(visited));
        memset(map_, 0, sizeof(map_));
        for (int i = 1; i < n; i++){
            for (int j = 0; j < n; j++){
                int x,y;cin>>x>>y;
                map_[x - 1][y - 1] = i;
            }
            fgets(st, sizeof(st), stdin);
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                flag = true;
                if (!visited[i][j]){
                    bfs(i, j);
                    if (cnt != n)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (!flag)
                break;
        }
        if (flag) cout << "good" << "\n";
        else cout << "wrong" << "\n";
    }
    return 0;
}
bool check(temp tmp){
    if (tmp.x >= 0 && tmp.x < n && tmp.y >= 0 && tmp.y < n && !visited[tmp.x][tmp.y])
        return true;
    else
        return false;
}

void bfs(int x, int y){
    queue<temp> q;
    cnt = 1;
    temp pre, last;
    visited[x][y] = 1;
    pre.x = x;
    pre.y = y;
    q.push(pre);
    while (!q.empty()){
        pre = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i){
            last.x = pre.x + direction[i][0];
            last.y = pre.y + direction[i][1];
            if (check(last) && map_[x][y] == map_[last.x][last.y]){
                cnt++;
                visited[last.x][last.y] = 1;
                q.push(last);
                if (cnt == n) return;
            }
        }
    }
}
int x;
