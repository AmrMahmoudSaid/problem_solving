#include <iostream>
#include <vector>
using namespace std;
vector<string>res;
vector<string>words;
void rec(string exp,int index){
    if (index>=exp.size()){
        for (auto & re : res) {
            cout<<re;
        }
        cout<<"\n";
        return;
    }
    if (exp[index]=='0'){
        for (int i = 0; i <=9 ; ++i) {
            string p;
            p.push_back((i+'0'));
            res.push_back(p);
            rec(exp,index+1);
            res.pop_back();
        }
    } else{
        for (auto & word : words) {
            res.push_back(word);
            rec(exp,index+1);
            res.pop_back();
        }
    }
}

int main() {
    int n;
    while (cin>>n){
        words.clear();
        for (int i = 0; i <n ; ++i) {
            string w;cin>>w;
            words.push_back(w);
        }
        int x;
        cin>>x;
        cout<<"--"<<endl;
        for (int i = 0; i < x; ++i) {
            string r;
            cin>>r;
            rec(r,0);
        }
    }
    return 0;
}