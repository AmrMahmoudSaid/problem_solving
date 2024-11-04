#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main() {
    int x;cin>>x;
    int temp = x;
    long long num=0;
    if (x<0) x= abs(x);
    while (x>0){
        int digit = x % 10;
        num = num * 10 + digit;
        x=x/10;
    }
    if (temp==0) cout<<0;
    else if (temp<0){
        if (-num < INT_MIN) return 0;
        cout<<-num;
    }
    else{
        if (num > INT_MAX) return 0;
        cout<<num;
    }
}
