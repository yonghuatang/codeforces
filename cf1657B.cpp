#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, b, x, y, a = 0;
        long long ans = 0;
        cin >> n >> b >> x >> y;
        for (int i=0; i<n; i++) {
            if (a + x > b) {
                a -= y;
            } else {
                a += x;
            }
            ans += a;
        }
        cout << ans << endl;
    }
    return 0;
}