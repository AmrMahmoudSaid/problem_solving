#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
using namespace std;
void best(const vector<int>& jewel, int capacity, vector<int>& currentCom, int& currentSum, vector<int>& bestCom, int& bestSum, int index) {
    if (index==jewel.size()) {
        if (currentSum>bestSum&&currentSum<=capacity) {
            bestCom = currentCom;
            bestSum = currentSum;
        }
        return;
    }
    currentCom.push_back(jewel[index]);
    currentSum += jewel[index];
    best(jewel, capacity, currentCom, currentSum, bestCom, bestSum, index + 1);
    currentCom.pop_back();
    currentSum -= jewel[index];
    best(jewel, capacity, currentCom, currentSum, bestCom, bestSum, index + 1);
}
int main() {
    int n, num;
    int x,y;
    while (cin>>n>>num) {
        vector<int> jewel(num);
        vector<int> currentCom, bestCom;
        int currentSum = 0, bestSum = 0;
        int cnt=0;
        while (num--){
            cin >> jewel[cnt];
            cnt++;
        }
//        for (int i = 0; i < num; ++i) {
//        }
//        best(jewel, n, currentCom, currentSum, bestCom, bestSum, 0);
        best(jewel, n, currentCom, currentSum, bestCom, bestSum, 0);
        for (int i = 0; i < bestCom.size(); ++i) {
            cout<<bestCom[i];
            if (i != bestCom.size() - 1) {
                cout << " ";
            }
        }
        cout<<" sum:"<<bestSum<<"\n";
    }
    return 0;
}