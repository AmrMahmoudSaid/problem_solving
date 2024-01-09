#include <iostream>
#include <bitset>


using namespace std;
int main() {
    int numberOfQuery; cin>>numberOfQuery;
    for (int i = 0; i < numberOfQuery; ++i) {
        int number , sum{0};cin>>number;
        for (int i = 1; i <= number; ++i) {
            bitset<10> binaryRepresentation(i);
            sum+=binaryRepresentation.count();
        }
        cout<<sum<<"\n";
    }

}
