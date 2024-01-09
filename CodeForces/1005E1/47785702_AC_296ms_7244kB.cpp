#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    int n,x;cin>>n>>x;
    vector<int> nums(n);
    int index;
    for (int i = 0; i < n; ++i) {
        cin>>nums[i];
        if (nums[i]==x) index=i;
    }
    int gCnt=0,lCnt=0;
    map<int,int> diff;
    long long res=1;
    for (int i =index+1; i <n ; ++i) {
        if (nums[i]>x)gCnt++;
        else lCnt++;
        diff[gCnt-lCnt]++;
        if (gCnt-lCnt==1||(gCnt==lCnt))
            res++;
    }
    gCnt=0,lCnt=0;
    for (int i =index-1; i>=0 ; --i) {
        if (nums[i]>x)gCnt++;
        else lCnt++;

        res+=diff[lCnt-gCnt]
             +diff[lCnt-gCnt +1];
        if (gCnt-lCnt==1||(gCnt==lCnt))
            res++;
    }
    cout<<res<<"\n";

    return 0;
}