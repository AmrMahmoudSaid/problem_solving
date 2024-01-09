
#include <iostream>
#include <vector>
using  namespace std;
const long long maximo = 100000000000000ll;
int main(){
    string cad;
    long long money;
    cin >> cad;
    vector <long long> need(3);
    vector <long long> have(3);
    vector <long long> cost(3);
    for (int i = 0; i < cad.size(); ++i){
        if(cad[i] == 'B') need[0]++;
        if(cad[i] == 'S') need[1]++;
        if(cad[i] == 'C') need[2]++;
    }
    for (int i = 0; i < 3; ++i) cin >> have[i];

    for (int i = 0; i < 3; ++i) cin >> cost[i];
    cin >> money;
    long long minBurger = 0;
    long long maxBurger = maximo;
    long long middle;
    long long din = 0ll;
    long long ans = 0ll;
    long long aux = 0;
    while(minBurger <= maxBurger){
        din = 0ll;
        middle = (minBurger + maxBurger) / 2ll;
        for (int i = 0; i < 3; ++i){
            aux = need[i] * middle;
            aux = have[i] - aux;
            if(aux < 0)
                din += abs(aux) * cost[i];
        }
        if(din <= money){
            ans = middle;
            minBurger = middle + 1ll;
        }
        else{
            maxBurger = middle - 1ll;
        }
    }
    cout << ans;
    return 0;
}