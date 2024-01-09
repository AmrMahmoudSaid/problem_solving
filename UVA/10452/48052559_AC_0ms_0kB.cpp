#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int testCase;cin >> testCase;
    for (int i = 0; i < testCase; ++i) {
        int n, m;cin >> n >> m;
        vector<string> g(n);
        pair<int, int> start;
        for (int i = 0; i < n; ++i) {
            cin >> g[i];
            int pos = g[i].find('@');
            if (pos != string::npos) {
                start = {i, pos};
            }
        }
        vector<pair<int, int>> dir = {{-1, 0}, {0, -1}, {0, 1}};
        vector<string> commands = {"forth", "left", "right"};
        string path = "IEHOVA#";
        vector<string> result;
        for (char c : path) {
            for (int i = 0; i < 3; ++i) {
                int nx = start.first + dir[i].first;
                int ny = start.second + dir[i].second;
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && g[nx][ny] == c) {
                    result.push_back(commands[i]);
                    start = {nx, ny};
                    break;
                }
            }
        }
        for (int i = 0; i < result.size(); ++i) {
            if (i > 0) cout << " ";
            cout << result[i];
        }
        cout << "\n";
    }
    return 0;
}