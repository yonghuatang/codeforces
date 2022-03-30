#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int x, y, ans = 0;
        cin >> x >> y;
        int z = x*x + y*y, r = 0;
        while (r*r < z) {
            r++;
        }
        if (x == 0 && y == 0) {
            ans = 0;
        } else if (r*r == z) {
            ans = 1;
        } else {
            ans = 2;
        }
        cout << ans << endl;
    }
    return 0;
}