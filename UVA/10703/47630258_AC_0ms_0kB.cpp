#include <iostream>
using namespace std;
int main(){
    bool taken[505][505];
    int w, h, n;
    while (cin >> w >> h >> n, w){
        while (n--){
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 > x2) swap(x1, x2);
            if (y1 > y2) swap(y1, y2);
            for (int y = y1 - 1; y < y2; ++y)
                for (int x = x1 - 1; x < x2; ++x)
                    taken[y][x] = true;
        }
        int count = 0;
        for (int y = 0; y < h; ++y){
            for (int x = 0; x < w; ++x){
                if (!taken[y][x])
                    ++count;
                else
                    taken[y][x] = false;
            }
        }
        if (count == 0) cout << "There is no empty spots.\n";
        else if (count == 1) cout << "There is one empty spot.\n";
        else cout << "There are " << count << " empty spots.\n";
    }
}