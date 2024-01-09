#include<iostream>
#include <map>
using namespace std;
int main()
{
    long long n,ans=0;
    long long dp[35];

    cin>>n ;
    long long a[n];
    map<long long ,long long >mp;

    for (long long i = 0; i < n; ++i) {
        cin>>a[i], mp[a[i] ]++;
    }
    for (long long  i = 0; i < 32; ++i) {
        dp[i]=1ll<<i;
    }
    for (long long  i = 0; i < n; ++i) {
        for (long long j = 0; j < 32; ++j) {
            long long tmp=dp[j]-a[i];
            if(tmp==a[i]) {ans+=mp[tmp]-1;}
            else ans+=mp[tmp];
        }
    }

    ans>>=1;
    cout<< ans <<endl;
}