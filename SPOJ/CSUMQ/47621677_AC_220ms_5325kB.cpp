#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,nq;cin>>n;
    vector<int> number (n);
    for (int i = 0; i < n; ++i) {
        cin>>number[i];
    }
    cin>>nq;
    for (int i = 0; i < nq; ++i) {
        int l,r;cin>>l>>r;
        int cnt = (r - l)+1;
        int sum = 0;
        for (int j = 0; j < cnt; ++j) {
            sum+=number[l+j];
        }
        cout<<sum<<"\n";
    }
    return 0;
}