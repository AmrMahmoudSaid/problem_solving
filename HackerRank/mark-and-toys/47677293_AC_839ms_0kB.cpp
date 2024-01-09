#include <iostream>
#include <set>
using namespace std;
int main() {
    int num,size;
    cin>>num>>size;
    multiset<int> toys;
    while (num--){
        int price;
        cin>>price;
        toys.insert(price);
    }
    int cnt=0;
    auto it=toys.begin();
    while (it!=toys.end()){
        if (*it<=size){
            size=size-*it;
            it++;
            cnt++;
        } else break;
    }
    cout<<cnt<<"\n";
    return 0;
}