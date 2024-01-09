#include <iostream>
using namespace std;
long long int fun(long long  a, long long  b) {
    if (b == 0)
        return a;
    else
        return fun(b, a % b);
}

int main() {
    long long  n, num, den, x;
    while (true) {
        cin >> n;
        if (n == -1)
            break;
        num = 1;
        den = 1;
        for (int i = 1; i < n; i++) {
            long long a, b;
            cin >> a >> b;
            num = num * a;
            den = den * b;
        }
        x = fun(num, den);
        cout << num / x << " " << den / x << "\n";
    }
    return 0;
}
