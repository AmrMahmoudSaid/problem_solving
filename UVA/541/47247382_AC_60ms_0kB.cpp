#include <iostream>
#include <set>
#include <map>
#include <vector>

using namespace std;
int row{0} , column{0};
bool ifProperty(vector<vector<int>> matrix ,int n){
    int x{0} , y{0};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            x+=matrix[i][j];
            y+=matrix[j][i];
        }
        if (x%2!=0||y%2!=0){
            return false;
        }
        x=0; y=0;
    }
    return true;
}
bool ifCanFixMatrix(vector<vector<int>> matrix ,int n){
//    int cnt{0},x,y;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j]==1) matrix[i][j]=0;
            else matrix[i][j]=1;
            if (ifProperty(matrix,n)){
                row = i+1;
                column = j+1;
                return true;
            }
            if (matrix[i][j]==1) matrix[i][j]=0;
            else matrix[i][j]=1;
        }
    }
    return false;
}
int main() {
    while (true){
        int sizeOfMatrix; cin>>sizeOfMatrix;
        if (sizeOfMatrix ==0) break;
        vector<vector<int>> matrix(sizeOfMatrix,vector<int> (sizeOfMatrix));
        for (int i = 0; i < sizeOfMatrix; ++i) {
            multiset<int> add;
            for (int j = 0; j <sizeOfMatrix ; ++j) {
                cin>>matrix[i][j];
            }
        }
//        int cnt{0};
//        int x{0}, y{0};

//    for (int i = 0; i < sizeOfMatrix; ++i) {
//        for (int j = 0; j < sizeOfMatrix; ++j) {
//            x+=matrix[i][j];
//            y+=matrix[j][i];
//        }
//        if (x%2!=0||y%2!=0){
//
//        }
//    }
        if (ifProperty(matrix,sizeOfMatrix)) cout<<"OK"<<"\n";
        else{
            if (ifCanFixMatrix(matrix,sizeOfMatrix))
                cout<<"Change bit ("<<row<<","<<column<<")"<<"\n";
            else cout<<"Corrupt"<<"\n";
        }
    }

    return 0;
}
