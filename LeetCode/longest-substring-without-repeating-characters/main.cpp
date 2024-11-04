#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main() {
    string s;cin>>s;
    vector<int> lastSeen(256, -1);
    int maxLen = 0;
    int start = 0;

    for(int end = 0; end < s.length(); end++) {
        if(lastSeen[s[end]] >= start) {
            start = lastSeen[s[end]] + 1;
        }
        lastSeen[s[end]] = end;
        maxLen = max(maxLen, end - start + 1);
    }
    cout<< maxLen;
    return 0;
}
