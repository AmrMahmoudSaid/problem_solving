#include <iostream>
using namespace std;
int main(){
    int x,y;
    while( cin>>x>>y){
        int dx = 0 , dy = 0 , lap = 1 ;
        while( true ){
            if( (dy-dx) >= x ) break ;
            lap++;
            dx += x , dy += y ;
        }
        cout<<lap<<"\n";
    }
}