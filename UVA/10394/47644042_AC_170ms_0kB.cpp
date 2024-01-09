#include <iostream>
#include <vector>
using namespace std;
const int N = 2 * 1e7 + 5;
void sieve(vector<bool>& isPrime , vector<int>& primes){
    isPrime[0]=isPrime[1]= false;
    for (int i = 2; i*i <N ; ++i) {
        if(!isPrime[i])continue;
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
    vector<int> two;
    for (int i = 1; i <= primes.size(); ++i) {
        if (primes[i]-primes[i-1]==2){
            two.push_back(primes[i-1]);
            two.push_back(primes[i]);
        }
    }
    int num;
    while (cin>>num) {
        cout << "(" << two[num*2-2] << ", " << two[num*2-1] << ")" << endl;
    }
    return 0;
}