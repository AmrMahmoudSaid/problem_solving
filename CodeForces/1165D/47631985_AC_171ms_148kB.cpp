#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int n;cin>>n;
    for (int i = 0; i < n; ++i) {
        int p;cin>>p;
        vector<int> arr(p);
        vector<int> newArray;
        for (int j = 0; j < p; ++j) {
            cin>>arr[j];
        }
        sort(arr.begin(),arr.end());
        long long num = (long long )arr[0]*arr[p-1];
        for (int j = 2; j <= sqrt(num); ++j) {
            if (num%j==0){
                newArray.push_back(j);
                if (j != num/j ) newArray.push_back(num/j);
            }
        }
        sort(newArray.begin(),newArray.end());
        if (arr==newArray) cout<<num<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}
