#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareByPrice(const pair<int,int>&a, const pair<int,int>&b) {
    return a.first < b.first;
}
int main() {
    int numberOfElement;
    cin >> numberOfElement;
    vector<pair<int,int>> laptops;
    for (int i = 0; i < numberOfElement; i++) {
        int p, q;
        cin >> p >> q;
        pair<int,int> x = {p,q};
        laptops.push_back(x);
    }
    sort(laptops.begin(), laptops.end(), compareByPrice);
    for (int i = 1; i < numberOfElement; i++) {
        if ((laptops[i].first < laptops[i-1].first && laptops[i].second > laptops[i-1].second)
        || (laptops[i].first > laptops[i-1].first && laptops[i].second < laptops[i-1].second)) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << std::endl;
    return 0;
}
