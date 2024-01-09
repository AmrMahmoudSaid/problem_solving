#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,s;cin>>n>>s;
    vector<long long >arr(n);
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    long long start=0,end=n;
    long long max,min;
    while (start<=end){
        vector<long long >answer(n);
        long long sum=0;
        long long mid=start+(end-start)/2;
        for (int i = 0; i <n ; ++i) {
            answer[i]=mid*(i+1)+arr[i];
        }
        sort(answer.begin(),answer.end());
        for (int i = 0; i <mid ; ++i) {
            sum+=answer[i];
        }
        if (sum<=s){
            start=mid+1;
            min=sum;
            max=mid;
        } else{
            end=mid-1;
        }
    }
    cout<<max<<" "<<min<<"\n";
    return 0;
}