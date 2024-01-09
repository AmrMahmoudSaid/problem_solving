#include <iostream>
#include <vector>
#include <set>
using namespace std;

const int N =  1e5;
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
    int numberOfTestCase;cin>>numberOfTestCase;
    for (int i = 0; i < numberOfTestCase; ++i) {
        int numberOfNumber;cin>>numberOfNumber;
        set<long long > arr;
        for (int j = 0; j < numberOfNumber; ++j) {
            long long num;cin>>num;
            for(int prime: primes){
                if (num==1) break;
                if (num%prime==0) arr.insert(prime);
                while (num % prime ==0){
                    num/=prime;
                }
            }
            if (num>1){
                arr.insert(num);
            }
        }
        cout<<"Case #"<<i+1<<": "<<arr.size()<<"\n";
        for (long long j : arr) {
            cout<<j<<"\n";
        }
    }
    return 0;

}
