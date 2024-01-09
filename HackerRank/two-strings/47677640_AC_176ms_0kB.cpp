#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main() {
    int num;
    cin >> num;
    string s1, s2;
    for (int i = 0; i < num; ++i) {
        cin >> s1 >> s2;
        unordered_set<char> set1(s1.begin(), s1.end());
        unordered_set<char> set2(s2.begin(), s2.end());
        unordered_set<char> commonCharacters;
        for (char ch : set1) {
            if (set2.find(ch) != set2.end()) {
                commonCharacters.insert(ch);
            }
        }
        if (commonCharacters.empty()){
            cout<<"NO"<<"\n";
        } else{
             cout<<"YES"<<"\n";
        }
    }
    return 0;
}