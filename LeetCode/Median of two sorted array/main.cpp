#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main() {
    vector<int> num1 {1,2};
    vector<int> num2 {3,4};
    multiset<int> sortedArray;
    double res{0.0};
    sortedArray.insert(num1.begin(),  num1.end());
    sortedArray.insert(num2.begin(),  num2.end());
    vector<int> sortedVector;
    for(int num: sortedArray){
        sortedVector.push_back(num);
    }
    if (sortedVector.size() % 2 == 0)
        res = (sortedVector[sortedVector.size()/2]+sortedVector[(sortedVector.size()/2)-1])/2.0;
    else
        res = sortedVector[(sortedVector.size()/2)];
    cout<<res;
    return 0;
}
