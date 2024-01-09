#include <iostream>
#include <set>
using namespace std;
int main() {
    int numberOfElement;
    cin>>numberOfElement;
    set<int> listOfNumber;
    for (int i = 0; i < numberOfElement; ++i) {
        int number;
        cin>>number;
        listOfNumber.insert(number);
    }
    auto prodOne =listOfNumber.erase(listOfNumber.begin());
    if (listOfNumber.empty()) {
        cout<<"NO"<<"\n";
        return 0;
    }
    auto prodSecond = listOfNumber.begin();
    cout<<*prodSecond;
    return 0;
}
