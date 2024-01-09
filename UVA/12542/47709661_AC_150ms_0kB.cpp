// C++ code for the above approach:
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
    string s;

    while (cin>>s&&s!="0"){
       int ans =2;
        for (int i = 0; i < s.size(); i++) {
            for (int j = 1; j < s.size(); j++) {
                int num = stoi(s.substr(i,j));
                if (num>1e5) break;
                if (isPrime[num]) ans= max(ans,num);
            }
        }
        cout<<ans<<"\n";
    }
}

