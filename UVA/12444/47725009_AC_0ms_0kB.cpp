#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t ,a,b,c,d,temp,highest;
    cin>>t;
    while (t--){
        cin>>c>>d;
        if ((c&d)!=c){
            cout<< -1<<"\n";
        } else{
            a=b=c;
            temp=c^d;
            highest=log2(c^d);
            for (int i = 0; i <=highest ; ++i) {
                if ((temp&(1<<i)) !=0){
                    if (i==highest) b|= (1<<i);
                    else
                        a|=(1<<i);
                }
            }
            cout<<a<<" "<<b<<"\n";
        }
    }
    return 0;
}