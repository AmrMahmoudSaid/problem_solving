#include <iostream>
#include <set>
using namespace std;
int main() {
    long number;
    cin>>number;
    string numberToString = to_string(number);
    int begin {0};
    int end = numberToString.size()-1;
    for (int i = 0; i < numberToString.size(); ++i) {
        if (numberToString.at(begin)==numberToString.at(end)){
            begin++;
            end--;
            continue;
        } else if (numberToString.at(end)=='0'){
            end--;
            continue;
        } else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
