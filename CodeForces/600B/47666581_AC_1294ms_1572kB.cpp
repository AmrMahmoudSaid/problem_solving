#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isLessOrEqual(long long num , vector<long long> arr,int mid){
    if (arr[mid]<=num) return true;
    else return false;
}
int main() {
    int a,b;cin>>a>>b;
    vector<long long> arrA (a);
    for (int i = 0; i < a; ++i) {
        cin>>arrA[i];
    }
    sort(arrA.begin(),arrA.end());
    for (int i = 0; i < b; ++i) {
        long long num;cin>>num;
//        int left=0, right = arrA.size()-1 ,result =-1;
//        while (left<=right){
//            int mid = (left+right)/2;
//            if (isLessOrEqual(num,arrA,mid)){
//                left = mid +1;
//                result = mid;
//            } else{
//                right = mid-1;
//            }
//        }
        int count = lower_bound(arrA.begin(), arrA.end(), num + 1) - arrA.begin();

        if (i+1<b)
            cout<<count<<" ";
        else
            cout<<count;

    }

    return 0;
}
