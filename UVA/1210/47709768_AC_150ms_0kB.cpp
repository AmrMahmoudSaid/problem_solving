#include <cmath>
#include <iostream>
#include <string>
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
    int num;
    while (cin>>num&&num!=0){
        int cnt=0;
        for (int i = 0; i < primes.size(); ++i) {
            int sum=0;
            if (primes[i]>num) break;
            for (int j = i; j <primes.size() ; ++j) {
                if (sum+primes[j]<=num){
                    sum+=primes[j];
                    if (sum==num){
                        cnt++;
                        break;
                    }
                } else{
                    break;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
