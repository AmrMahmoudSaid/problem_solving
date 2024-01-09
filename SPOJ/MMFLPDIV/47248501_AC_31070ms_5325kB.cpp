#include <iostream>
#include <cmath>
using namespace std;
int main() {
    while (true){
        int n; cin>>n;
        if (n==0) break;
        int min=0;
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                min=i;
                break;
            }
        }
        if (min>0) cout<<min<<"\n";
        else cout<<n<<"\n";
    }
}
