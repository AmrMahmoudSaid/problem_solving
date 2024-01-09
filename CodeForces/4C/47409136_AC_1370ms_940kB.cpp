#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;cin>>n;
    map<string,int> m;
    for (int i = 0; i < n; ++i) {
        string work;cin>>work;
        if (m[work] == 0){
            cout<<"OK"<<"\n";
            m[work]+=1;
        }
        else {
            cout<<work<<m[work]<<"\n";
            m[work]+=1;
        }
    }
    return 0;
}
