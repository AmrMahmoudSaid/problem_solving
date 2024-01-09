#include <iostream>
#include <vector>
using namespace std;
bool canCover(vector<int>& holes , int med, int k){
    if (med>=holes[holes.size()-1]&&k>0) return true;
    int cnt{1};
    int sum = holes[0]+med-1;
    for (int i = 1; i < holes.size(); ++i) {
        if (holes[i]>sum){
            cnt++;
            sum =holes[i]+med-1;
        }
        if (cnt>k) return false;
    }
    return true;
}
int main() {
    int t;cin>>t;
    for (int i = 0; i < t; ++i) {
        int n,k;cin>>n>>k;
        vector<int> holes(n);
        for (int j = 0; j < n; ++j) {
            cin>>holes[j];
        }
        int left=0,right = 2e9, res=-1;
        while (left<= right){
            int med = (left+right)/2;
            if (canCover(holes,med,k)){
                right = med-1;
                res = med;
            } else{
                left = med+1;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
