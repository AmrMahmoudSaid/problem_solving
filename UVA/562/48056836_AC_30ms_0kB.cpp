#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;cin>>n;
    for (int i = 0; i <n ; ++i) {
        int num;cin>>num;
        int coins[num],sum=0;
        for (int j = 0; j < num; ++j) {
            cin>>coins[j];
            sum+=coins[j];
        }
        vector<bool> p(sum+1);
        p[0]= true;
        int cnt{0};
        for (int j = 1; j <=sum ; ++j) p[j]= false;
        for (int j = 0; j <num ; ++j) {
            for (int k=sum ; k >=coins[j] ;k--) {
                if (p[k-coins[j]]) p[k]= true;
//                cnt++;
            }
        }
        int d=sum;
        for (int j = sum/2; j >=0 ; j--) {
            if (p[j]){
                d=sum-2*j;
                break;
            }
        }
        cout<<d<<"\n";
    }
    return 0;
}
