#include <iostream>
#include <vector>

using namespace std;
int main() {
    int l;cin>>l;
    vector<int> levers(l);
    int f;cin>>f;
    for (int i = 0; i < f; ++i) {
        int x;cin>>x;
        levers.at(x-1)++;
    }
    int s;cin>>s;
    for (int i = 0; i < s; ++i) {
        int x;cin>>x;
        levers.at(x-1)++;
    }
    for (int i = 0; i < l; ++i) {
        if (levers.at(i)==0){
            cout<<"Oh, my keyboard!"<<"\n";
            return 0;
        }
    }
    cout<<"I become the guy."<<"\n";
    return 0;
}
