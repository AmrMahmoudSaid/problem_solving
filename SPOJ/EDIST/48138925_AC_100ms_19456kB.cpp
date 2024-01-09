#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int main() {
    int t;cin>>t;
    for (int k = 0; k < t; ++k) {
        string num1,num2;cin>>num1>>num2;
        int len1 = num1.size();
        int len2 = num2.size();
        int ans[len1+1][len2+1];
        for (int i = 0; i <len1 ; i++) ans[i][0]=i;
        for (int i = 0; i <len2 ; i++) ans[0][i]=i;
        for (int i = 1; i <len1+1 ; i++) {
            for (int j = 1; j < len2+1; j++) {
                if (num1[i-1]==num2[j-1]) ans[i][j]=ans[i-1][j-1];
                else{
                    int temp=min(ans[i-1][j],ans[i][j-1]);
                    ans[i][j]=1+ min(temp,ans[i-1][j-1]);
                }
            }
        }
        cout<<ans[len1][len2]<<"\n";
    }
    return 0;
}
