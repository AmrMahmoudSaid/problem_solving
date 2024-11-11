#include <iostream>
#include <cctype>
#include <climits>
using namespace std;

int myAtoi(string s) {
    bool isNegative = false;
    long long temp{-1};
    for (char i : s) {
        if ((i=='-'|| i=='+')&& temp==-1) {
            if (i=='-') isNegative= true;
            temp=0;
            continue;
        }
        if (isdigit(i)){
            if (temp==-1) temp = 0;
            temp =temp * 10 + (i-'0');
        }else if (i==' '){
            if(temp != -1) break;
            continue;
        }else{
            if (temp==-1) temp = 0;
            break;
        }
        if (temp> INT_MAX || -temp < INT_MIN){
            if (isNegative){
                return INT_MIN;
            }else{
                return INT_MAX;
            }
        }
    }
    if (temp==-1) return 0;
    if (isNegative){
        return -temp;
    }
    else {
        return temp;
    }

}
int main() {

}
