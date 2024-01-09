#include <iostream>
#include <vector>
using namespace std;
const int N=1299710;
void sieve(vector<bool>& isPrime , vector<int>& primes){
    isPrime[0]=isPrime[1]= false;
    for (int i = 2; i*i <N ; ++i) {
        if(!isPrime[i])continue;
//        primes.push_back(i);
        for (int j =2*i; j <N ;j+=i) {
            isPrime[j]= false;
        }
    }
    for (int i = 0; i < isPrime.size(); ++i) {
        if (isPrime[i]) primes.push_back(i);
    }
}
int main() {
    vector<bool> isPrime(N, true);
    vector<int> primes;
    sieve(isPrime , primes);
    int num;cin>>num;
    while (num!=0){
        if (num==2) cout<<0<<"\n";
        for (int i = 0; i +1< primes.size(); ++i) {
            if (primes[i]<num&& num<=primes[i+1]){
                if (num==primes[i+1]) {
                    cout<<0<<"\n";
                    break;
                }
                cout<<primes[i+1]- primes[i]<<"\n";
                break;
            }
        }
        cin>>num;
    }

    return 0;

}
