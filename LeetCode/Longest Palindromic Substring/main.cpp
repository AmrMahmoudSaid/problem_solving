#include <iostream>

using namespace std;
int expandAroundCenter(int left, int right, string& s){
    while (left>=0 && right<s.length() && s[left]==s[right]){
        left--;
        right++;
    }
    return right-left-1;

}
int main() {
    string s;cin>>s;
    int start = 0, end = 0;
    for (int i = 0; i < s.length(); ++i) {
        int oddLen = expandAroundCenter(i,i,s);
        int evenLen = expandAroundCenter(i,i+1,s);
        int len = max(oddLen,evenLen);
        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    cout<< s.substr(start,end-start+1);
    return 0;
}
