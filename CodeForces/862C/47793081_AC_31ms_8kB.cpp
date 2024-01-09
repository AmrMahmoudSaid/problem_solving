#include <iostream>
using namespace std;
int main() {
    int n,x;cin>>n>>x;
    if (n==2&&x==0) {
        cout <<"NO"<<"\n";
        return 0;
    }
    cout<<"YES"<<"\n";
    if (n<=2){
        if (n==1){
            cout<<x<<"\n";
        }
        else{
            cout<<0<<" "<<x<<"\n";
        }
        return 0;
    }
    int p=0;
    for (int i =1; i <=n-3 ; i++) {
        cout<<i<<" ";
        p^=i;
    }
    int big=1<<18;
    if (x!=p){
        cout<<0<<" "<<big<<" "<<(big^x^p)<<endl;
    }
    else{
        cout<<big<<" "<<(big-1)<<" "<<(big ^( big-1))<<endl;
    }
    return 0;
}