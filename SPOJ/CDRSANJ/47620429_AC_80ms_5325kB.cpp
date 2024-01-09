#include <iostream>
using namespace std;
int gFunction(int x) {
    if (x==0) {
        return 0;
    }
    if (x==1) {
        return 1;
    }
    if (x==2) {
        return 2;
    }

    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return gFunction(i) + gFunction(x / i);
        }
    }
    return 0;
}
int main() {
    int num;
    cin >> num;
    cout<<gFunction(num)<<"\n";
    return 0;
}