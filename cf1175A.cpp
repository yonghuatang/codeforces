#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int tc=0; tc<t; tc++) {
        ll n, k, ans = 0;
        cin >> n >> k;
        while (n) {
            if (n % k == 0) {
                ans++;
                n /= k;
            } else {
                ans += (n % k);
                n -= (n % k);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
