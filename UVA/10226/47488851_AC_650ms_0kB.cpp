#include<iostream>
#include <map>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string line;
    int total;
    cin.ignore();
    getline(cin,line);
    while(n--){
        total=0;
        map<string,int> mp;
        while(getline(cin,line) && line!=""){
            mp[line]++;
            total++;
        }
        for(auto it:mp){
            cout<<it.first<<" ";
            printf("%.4f\n",(double)it.second/total*100.0);
        }
        if(n){
            cout<<"\n";
        }
    }
}