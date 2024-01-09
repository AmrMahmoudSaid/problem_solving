#include <iostream>
#include <vector>
using namespace std;
const int N = 2*1e7;
vector<bool> isPrime(N, true);
vector<int> primes;
void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < N; ++i) {
        for (int j = 2 * i; j < N; j += i) {
            isPrime[j] = false;
        }
    }
    for (int i = 0; i <isPrime.size() ; ++i) {
        if (isPrime[i])primes.push_back(i);
    }
}

int main() {
    sieve();
    int num;
    cin>>num;
    for (int i = 0; i <num ; ++i) {
        int index;cin>>index;
        cout<<primes[index-1]<<"\n";
    }
    return 0;
}