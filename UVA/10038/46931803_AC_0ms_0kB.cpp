#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int numberOfElement;
    bool check = true;
    while (cin>>numberOfElement){
        vector<int> sequence(numberOfElement);
        set<int> diffBetweenElems;
        for (int i = 0; i < numberOfElement; ++i) {
            cin >> sequence[i];
        }
        if (numberOfElement==1){
            check= true;
        }
        for (int i = 1; i < numberOfElement; ++i) {
            int difference = abs(sequence[i] - sequence[i - 1]);
            if (difference >= numberOfElement || diffBetweenElems.count(difference) > 0) {
                check= false;
            }
            diffBetweenElems.insert(difference);
        }
        for (int i = 1; i < numberOfElement; ++i) {
            if (diffBetweenElems.count(i)==0) check= false;
        }
        if (check) cout<<"Jolly"<<"\n";
        else cout<<"Not jolly"<<"\n";
        check = true;
    }

}
