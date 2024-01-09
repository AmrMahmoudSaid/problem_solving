#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0);cout.tie(NULL);cin.tie(NULL);
    int numberOfElement;
    cin>>numberOfElement;
    int input;
    queue<int> q;
    for(int i = 0; i< numberOfElement; i++){
        cin>>input;
        if (input==1){
            cin>>input;
            q.push(input);
        } else if (input==2){
            if (q.empty()) continue;
            else q.pop();
        } else if (input==3){
            if (q.empty())cout<<"Empty!"<<"\n";
            else cout<<q.front()<<"\n";
        }
    }
    return 0;
}
