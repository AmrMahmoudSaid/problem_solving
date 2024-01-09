#include <iostream>

using namespace std;
int main() {
    string kes="qwertyuiopasdfghjkl;zxcvbnm,./";
    char t;cin>>t;
    string w;cin>>w;
    if (t=='L'){
        for (int i = 0; i < w.size(); ++i) {
            w.at(i) = kes[kes.find(w.at(i))+1];
        }
    } else if (t=='R'){
        for (int i = 0; i < w.size(); ++i) {
            w.at(i) = kes[kes.find(w.at(i))-1];
        }
    }
    cout<<w;
    return 0;
}
